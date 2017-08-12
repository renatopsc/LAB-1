

# Compilador
CC=g++ 

# Variavel para apagar arquivos
RM = rm -rf 



# Variaveis para os subdiretorios
LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc
TEST_DIR=test
 
# Opcoes de compilacao
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all init clean debug doxy doc

# Define o alvo (target) para a compilacao completa e os alvos de dependencia.
# Ao final da compilacao, remove os arquivos objeto.
all: init questao01 questao02 questao03 

debug: CFLAGS += -g -O0
debug: all

# Alvo (target) para a criação da estrutura de diretorios
# necessaria para a geracao dos arquivos objeto 
init:
	@mkdir -p $(OBJ_DIR)/questao01
	@mkdir -p $(OBJ_DIR)/questao02
	@mkdir -p $(OBJ_DIR)/questao03
	@mkdir -p $(BIN_DIR)/questao01
	@mkdir -p $(BIN_DIR)/questao02
	@mkdir -p $(BIN_DIR)/questao03

# Alvo (target) para a construcao do executavel calculadora (questao 01)

questao01: CFLAGS+= -I$(INC_DIR)/questao01
questao01: $(OBJ_DIR)/questao01/area.o $(OBJ_DIR)/questao01/calcula.o $(OBJ_DIR)/questao01/main.o $(OBJ_DIR)/questao01/perimetro.o $(OBJ_DIR)/questao01/volume.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/questao01/calculadora $^
	@echo "+++ [Executavel calculadora criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto questao01/area.o
# Define os arquivos questao01/area.cpp e questao01/area.h como dependencias.
$(OBJ_DIR)/questao01/area.o: $(SRC_DIR)/questao01/area.cpp $(INC_DIR)/questao01/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto questao01/calcula.o
# Define o arquivo questao01/calcula.cpp como dependencia.
$(OBJ_DIR)/questao01/calcula.o: $(SRC_DIR)/questao01/calcula.cpp $(INC_DIR)/questao01/calcula.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto questao01/main.o
# Define o arquivo questao01/main.cpp como dependencia.
$(OBJ_DIR)/questao01/main.o: $(SRC_DIR)/questao01/main.cpp 
	$(CC) -c $(CFLAGS) -o $@ $<
# Alvo (target) para a construcao do objeto questao01/perimetro.o
# Define o arquivo questao01/perimetro.cpp como dependencia.
$(OBJ_DIR)/questao01/perimetro.o: $(SRC_DIR)/questao01/perimetro.cpp $(INC_DIR)/questao01/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<
# Alvo (target) para a construcao do objeto questao01/volume.o
# Define o arquivo questao01/volume.cpp como dependencia.
$(OBJ_DIR)/questao01/volume.o: $(SRC_DIR)/questao01/volume.cpp $(INC_DIR)/questao01/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<


# Alvo (target) para a construcao do executavel mdc (questao 02)
# Define o arquivo questao02/mdc.o como dependencia.
questao02: CFLAGS+= -I$(INC_DIR)/questao02
questao02: $(OBJ_DIR)/questao02/main.o $(OBJ_DIR)/questao02/fatorial.o $(OBJ_DIR)/questao02/primalidade.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/questao02/anterior $^
	@echo "+++ [Executavel mdc criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto questao02/mdc.o
# Define o arquivo questao02/mdc.cpp como dependencia.
$(OBJ_DIR)/questao02/main.o: $(SRC_DIR)/questao02/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao02/fatorial.o: $(SRC_DIR)/questao02/fatorial.cpp $(INC_DIR)/questao02/fatorial.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao02/primalidade.o: $(SRC_DIR)/questao02/primalidade.cpp $(INC_DIR)/questao02/primalidade.h
	$(CC) -c $(CFLAGS) -o $@ $<


# Alvo (target) para a construcao do executavel dec2bin (questao 03)
# Define o arquivo questao03dec2bin.o como dependencia.
questao03: CFLAGS+= -I$(INC_DIR)/questao03
questao03: $(OBJ_DIR)/questao03/dec2bin.o $(OBJ_DIR)/questao03/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/dec2bin $^
	@echo "+++ [Executavel dec2bin criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto questao03/dec2bin.o
# Define o arquivo questao03/dec2bin.cpp como dependencia.
$(OBJ_DIR)/questao03/dec2bin.o: $(SRC_DIR)/questao03/dec2bin.cpp $(INC_DIR)/questao03/dec2bin.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto questao03/main.o
# Define o arquivo questao03/main.cpp como dependencia.
$(OBJ_DIR)/questao03/main.o: $(SRC_DIR)/questao03/main.cpp $(INC_DIR)/questao03/dec2bin.h
	$(CC) -c $(CFLAGS) -o $@ $<




# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

