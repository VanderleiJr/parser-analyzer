/*
Parser Analyzer with ANTLR4

Made by Vanderlei Junior
https://github.com/VanderleiJr
*/

#include <cstdlib>
#include <fstream>
#include <iostream>

#include "antlr4-runtime.h"
#include "src/antlr4/LALexer.h"
#include "src/antlr4/LAParser.h"

using namespace std;
using namespace antlr4;

//Tratamento de erro customizado para imprimir a saída desejada
namespace CustomError{
  class MyCustomErrorListener : public ANTLRErrorListener{
    ofstream saida;

    public:
    void setOfstream(const char* dadosSaida){
      saida.open(dadosSaida, std::fstream::trunc);;
    }

    virtual void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact, const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override{};

    virtual void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, const antlrcpp::BitSet &conflictingAlts, atn::ATNConfigSet *configs) override{};

    virtual void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, size_t prediction, atn::ATNConfigSet *configs) override{};

    virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override{
      saida << "Linha " << offendingSymbol->getLine() << ": erro sintatico proximo a ";
      //Verificação necessária, para impressão de forma correta do EOF
      if(offendingSymbol->getText().compare("<EOF>")){
        saida << offendingSymbol->getText() << endl;
      } else {
        saida << "EOF" << endl;
      }
      saida << "Fim da compilacao" << endl;
      exit(0);
    };
  };
};
  
int main(int argc, char *argv[]){

  //Declaração dos arquivos de entrada e saída recebidos via argumento
  ifstream dadosEntrada;
  ofstream dadosSaida;
  dadosEntrada.open(argv[1]);

  ANTLRInputStream input(dadosEntrada);
  LALexer lexer (&input);
  CommonTokenStream tokens(&lexer);
  LAParser parser (&tokens);

  //Criação da nossa "fila" de erros
  CustomError::MyCustomErrorListener *pegaErro = new CustomError::MyCustomErrorListener();
  //Passando o argumento de saída para dentro da função de impressão de erros
  pegaErro->setOfstream(argv[2]);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    if(token->getText().compare("<EOF>")){

      // Quando algum ERRO Léxico é encontrado
      if(token->getType() == 71){
        //Agora, o arquivo de erro só é aberto, quando o erro é encontrado, diminuindo conflitos
        dadosSaida.open(argv[2], std::fstream::trunc);  //Usado para criar sempre um arquivo novo, caso o anterior já exista
        dadosSaida << "Linha "<< token->getLine() <<": ";
        // Cadeia literal não fechada, falta de '"' no final da string
        if(token->getText() == "\""){
          dadosSaida << "cadeia literal nao fechada" << endl;
        // Comentário não fechado por '}'
        } else if(token->getText() == "{"){
          dadosSaida << "comentario nao fechado" << endl;
        // Símbolo desconhecido
        } else {
          dadosSaida << token->getText() << " - simbolo nao identificado" << endl;
        }

        dadosSaida << "Fim da compilacao" << endl;
        // Fechar os arquivos após o ERRO encontrado

        dadosEntrada.close();
        dadosSaida.close();
        return 0;
      }
    } 
  }

  //Remover o tratamento de erro padrão do ANTLR4
  parser.removeErrorListeners();
  //Adicionar o nosso tratamento de erro
  parser.addErrorListener(pegaErro);

  tree::ParseTree *tree = parser.programa();

  //Fechamento dos arquivos abertos pelo analisador
  dadosEntrada.close();

  return 0;
}

