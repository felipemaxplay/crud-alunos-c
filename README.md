# CRUD Alunos
Primeira atividade avaliativa. Deverá ser entregue um sistema de cadastro em linguagem C, salvando os registros em uma lista duplamente encadeada, aplicando os conceitos de alocação dinâmica, ponteiros, structs, etc.

# Features
- **Cadastrar aluno:** Receber o **nome** e o **ra** armazenando em uma struct e cadastrar na lista duplamente encadeada. **[Feito]**
- **Consultar por RA:** Receber um **ra** e retorna a struct com o **nome** e o **ra** correspondente dentro da lista duplamente encadeada. **[Feito]**
- **Listar todos:** Listar todos os **ra** e **nomes** dentro da lista duplamente encadeada. **[Feito]**
- **Buscar por nome (completo ou uma parte do nome):** Receber um **nome** ou parte dele e retorna um ou mais **nomes** correspondentes dentro da lista duplamente encadeada. **[Feito]**
- **Excluir todos:** Excluir todos os registros da lista duplamente encadeada. **[Feito]**
- **Exibir o maior e o menor nome:** Exibir o maior e o menor **nome** registrado na lista duplamente encadeada. **[Feito]**
- **Sair:** Opção de sair para finalizar a applicação. **[Feito]**

# Build
Como fazer o build de acordo com o seu sistema operacional.

## Linux
Requisitos:
- gtkmm-3.0
- g++
- GNU Make

Para fazer a build no linux basta está na pasta raiz e executar esse comando no terminal bash.
```bash
make
```
No final da operação será criada uma pasta com um arquivo assim
```bash
./bin/crud-alunos
```
depois pasta executa o arquivo no terminal.

## Windows
Requisitos:
- Mingw-w64

~~To Do~~

# Contato
**Nome:** Felipe Gomes Lucena