dir = $(PWD)

main: existDir
	@g++ ${dir}/src/main.cpp -o ${dir}/bin/crud-alunos
	@echo "Programa compilado com sucesso no local:"
	@echo "./bin/crud-alunos"
existDir:
	@if [ ! -d ${dir}/bin ]; then\
		mkdir ${dir}/bin;\
	fi