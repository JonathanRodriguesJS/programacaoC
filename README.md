Super Trunfo - Cidades

Este é um jogo simples baseado no conceito de Super Trunfo, onde os jogadores comparam atributos de diferentes cidades para determinar qual é a mais "forte".

🚀 Funcionalidades

O jogador insere informações sobre duas cidades.

As cidades são comparadas com base em atributos como população, área, PIB e pontos turísticos.

O programa determina qual cidade vence em cada atributo.

🛠️ Tecnologias Utilizadas

Linguagem: C

Compilador recomendado: GCC

📜 Como Compilar e Executar

Salve o código em um arquivo chamado super_trunfo.c

Abra o terminal e navegue até a pasta onde o arquivo está salvo

Compile o código com o GCC:

gcc super_trunfo.c -o super_trunfo

Execute o programa:

./super_trunfo

🔹 Estrutura do Código

O programa solicita ao jogador as seguintes informações para cada cidade:

Estado

Código da cidade

Nome da cidade

População

Área (km²)

PIB (bilhões de reais)

Número de pontos turísticos

Calcula atributos derivados, como:

Densidade populacional = População / Área

PIB per capita = PIB / População

Compara as cidades com base nesses atributos e exibe os resultados.

📌 Problemas Conhecidos

O programa pode apresentar comportamento inesperado caso sejam inseridos valores inválidos.
