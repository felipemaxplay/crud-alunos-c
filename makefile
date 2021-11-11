dir = $(PWD)

all:	existDir
	@g++ ${dir}/src/main\ .cpp -o ${dir}/bin/crud-alunos;
	@echo "Programa Compilado com sucesso.";
	@echo "Compilado na pasta ./bin/crud-alunos";
existDir:
	@if [ ! -d ${dir}/bin ]; then\
		mkdir ${dir}/bin;\
		echo "Pasta bin criada em ./bin"; else\
		echo "Compilando o programa";\
	fi