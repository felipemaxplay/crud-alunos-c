# CRUD Alunos
Crud Alunos é um pequenho projeto de terminal para fazer crud(create, read, update e delete).

É a primeira atividade passada pelo professor. E deverá ser entregue um sistema de cadastro em linguagem C, salvando os registros em uma lista duplamente encadeada, aplicando os conceitos de alocação dinâmica, ponteiros, structs, etc.

# Pré-requisito
Antes de iniciarmos, verifique se você tem os seguintes requisitos para fazer a compilação do programa:
- Ter um compilador de C/C++. por exemplo g++(linux e mac) ou [cygwin](https://cygwin.com/install.html)(Windows).
- [GNU Make](https://www.gnu.org/software/make/).

# Build
Para fazer a build do projeto basta seguir as seguintes etapas.

**Linux**, **Mac** e **Windows**(windows só através do cygwin).

Na pasta raiz do projeto execute o comando:
```bash
make
```
Pronto depois disso será criada uma pasta chamada **bin** com o arquivo **crud-alunos** dentro.

Agora ainda na pasta raiz execute o programa:
```bash
./bin/crud-alunos
```

# Features
Recursos a serem implementados para que o projeto esteja pronto:
- **Cadastrar aluno:** Receber o **nome** e o **ra** armazenando em uma struct e cadastrar na lista duplamente encadeada. **[Feito]**
- **Consultar por RA:** Receber um **ra** e retorna a struct com o **nome** e o **ra** correspondente dentro da lista duplamente encadeada. **[Feito]**
- **Listar todos:** Listar todos os **ra** e **nomes** dentro da lista duplamente encadeada. **[Feito]**
- **Buscar por nome (completo ou uma parte do nome):** Receber um **nome** ou parte dele e retorna um ou mais **nomes** correspondentes dentro da lista duplamente encadeada. **[Feito]**
- **Excluir todos:** Excluir todos os registros da lista duplamente encadeada. **[Feito]**
- **Exibir o maior e o menor nome:** Exibir o maior e o menor **nome** registrado na lista duplamente encadeada. **[Feito]**
- **Sair:** Opção de sair para finalizar a applicação. **[Feito]**

# Contribuidores
- [@Felipe Gomes](https://github.com/felipemaxplay)

# Licença
Este projeto usa a seguinte licença: [MIT](./LICENSE.md).