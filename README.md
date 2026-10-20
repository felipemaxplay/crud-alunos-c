# CRUD Alunos

Sistema de cadastro de alunos em linguagem C, executado no terminal. Os dados são armazenados em uma lista encadeada dinâmica na memória, então são perdidos ao encerrar o programa.

## Funcionalidades

| Opção | Descrição |
|-------|-----------|
| 1 | Cadastrar aluno (nome e RA) |
| 2 | Consultar aluno por RA |
| 3 | Listar todos os alunos |
| 4 | Consultar alunos por nome (busca parcial) |
| 5 | Excluir aluno por RA |
| 6 | Excluir todos os alunos |
| 7 | Exibir o maior e o menor nome da lista |
| 0 | Sair |

## Estrutura do projeto

```
crud-alunos-c/
├── LICENSE.md
├── README.md
└── src/
    ├── main .cpp              # Ponto de entrada: chama menuDisplay()
    └── headers/
        ├── alunos.h           # Estrutura do nó e operações sobre a lista encadeada
        ├── alunosService.h    # Telas de cada operação (entrada/saída do usuário)
        ├── menu.h             # Loop do menu principal
        ├── menuOptions.h      # Despacho da opção escolhida para a operação
        └── menuOptionsMisc.h  # Utilitários: título, limpeza de buffer, pausa
```

## Como compilar e executar

Requisitos: um compilador C (como `gcc`) e um terminal. O programa usa `system("clear")`, então é melhor executá-lo em Linux ou macOS (no Windows, troque por `cls`).

```bash
gcc "src/main .cpp" -o crud-alunos
./crud-alunos
```

> O nome do arquivo principal contém um espaço (`main .cpp`), por isso ele deve ser passado entre aspas.

## Licença

Distribuído sob a licença MIT. Veja [LICENSE.md](LICENSE.md).
