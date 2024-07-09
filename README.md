# Sistema de Gerenciamento de Voos e Astronautas

## Descrição:

Este projeto é um sistema de gerenciamento de voos e astronautas, desenvolvido em C++. O objetivo é permitir a criação e o gerenciamento de voos espaciais, incluindo o cadastro de astronautas, a adição de astronautas a voos, e o gerenciamento do estado dos voos.

## Estrutura:
    main.cpp: Contém a função principal que executa o menu de opções.
    flight.h e flight.cpp: Definem e implementam a classe Flight, responsável pela gestão dos voos.
    astronaut.h e astronaut.cpp: Definem e implementam a classe Astronaut, responsável pela gestão dos astronautas.
    
## Funções:
  - Cadastrar novo astronauta: Permite cadastrar um novo astronauta no sistema.
  - Cadastrar novo voo: Permite cadastrar um novo voo no sistema.
  - Adicionar astronauta em voo: Permite adicionar um astronauta a um voo específico.
  - Remover astronauta de voo: Permite remover um astronauta de um voo específico.
  - Lançar voo: Permite mudar o estado de um voo para "lançado".
  - Explodir voo: Permite mudar o estado de um voo para "explodido".
  - Finalizar voo: Permite mudar o estado de um voo para "finalizado".
  - Listar todos os voos: Exibe uma lista de todos os voos cadastrados no sistema.

## Compilação e Execução:

Para compilar e executar o projeto, siga os passos abaixo:
```bash

g++ main.cpp flight.cpp astronaut.cpp -o sistema_voos
```
Execução:
```bash
./sistema_voos
```

## Considerações Finais:
Este projeto é um exemplo inicial de como gerenciar dados ligados a voos e astronautas em C++. Ele pode ser refinado com a adição de funções, o armazenamento de dados em um banco de dados ou em arquivos, a interface gráfica, entre outras modificações.
