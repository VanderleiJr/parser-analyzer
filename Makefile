# Projeto
PROJETO=parser-analyzer.out

# Compilador
CC=g++ -std=c++11

# Flags para o compilador
CC_FLAGS=-I/usr/local/include/antlr4-runtime \
		 -L/usr/local/lib/ \
		 -lantlr4-runtime \
		 -w

all:	$(PROJETO)

$(PROJETO):	main.cpp src/antlr4/LALexer.cpp src/antlr4/LAParser.cpp
	@echo Compilando...
	$(CC) -o $(PROJETO) main.cpp src/antlr4/LALexer.cpp src/antlr4/LAParser.cpp $(CC_FLAGS)
