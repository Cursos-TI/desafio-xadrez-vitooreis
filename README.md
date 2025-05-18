# Desafio de Xadrez - Movimentos das Peças
Bem-vindo ao Desafio de Xadrez! Neste projeto, você encontrará a implementação dos movimentos de peças de xadrez, utilizando estruturas de repetição e técnicas avançadas de programação. O desafio foi dividido em três níveis que exploram diferentes abordagens de movimento para as peças, desde loops simples até a aplicação de recursão e loops complexos.

# Descrição do Projeto
Este projeto foi desenvolvido para simular os movimentos de diversas peças do xadrez utilizando C, como Torre, Bispo, Rainha, e Cavalo. O código utiliza estruturas de repetição, recursividade, e loops complexos para simular os movimentos dessas peças, de acordo com as regras do xadrez e os requisitos dos desafios em três níveis.

# Objetivo do Desafio
O objetivo do desafio foi testar a habilidade de simular movimentos de peças de xadrez utilizando diferentes técnicas de programação, incluindo:

 - Estruturas de repetição (for, while, do-while)
 - Recursão
 - Loops aninhados

A aplicação foi dividida em três níveis, cada um com requisitos específicos, desafiando a complexidade das soluções implementadas.

# Níveis do Desafio
 Nível Novato
No Nível Novato, o desafio consistia em mover as peças do xadrez Torre, Bispo e Rainha utilizando loops simples (for, while, do-while). A movimentação das peças era feita de forma direta, com cada peça seguindo suas regras tradicionais de movimento no tabuleiro:

 - Torre: 5 casas para a direita.
 - Bispo: 5 casas na diagonal superior direita.
 - Rainha: 8 casas para a esquerda.

Principais Funcionalidades:
Torre, Bispo e Rainha movem-se utilizando loops simples.

Impressão das direções de movimento utilizando printf.

# Nível Aventureiro
O Nível Aventureiro trouxe a movimentação do Cavalo, uma peça que se move em "L". O movimento do Cavalo foi simulado utilizando loops aninhados, com um loop for controlando o movimento vertical e um while controlando o movimento horizontal.

Principais Funcionalidades:
 - Cavalo se move com loops aninhados, utilizando duas estruturas de repetição para simular o movimento "L" (2 casas para baixo e 1 para a esquerda).

# Nível Mestre
No Nível Mestre, o código foi aprimorado para utilizar recursão nas peças Torre, Bispo e Rainha. A movimentação do Cavalo foi aprimorada com loops aninhados complexos, com o uso de múltiplas variáveis e condições.

Principais Funcionalidades:
 - Recursão utilizada para simular os movimentos da Torre, Bispo e Rainha.
 - Loops aninhados complexos para a movimentação do Cavalo (usando continue e break).

# Como Executar o Projeto
Pré-requisitos
 - Compilador C (recomendado o GCC)

Passos para Rodar:
 1. Clone este repositório para seu ambiente local.
 2. Abra o terminal na pasta do projeto.
 3. Compile o código utilizando o comando:  
```
gcc xadrez.c -o xadrez
```

 4. Execute o programa:
```
./xadrez
```
