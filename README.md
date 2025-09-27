# 🎬 CineMajestic: O Controle de Vendas que Manda um Abraço! 🍿📊

Cansado de perder o controle das vendas de ingressos no seu cinema? O **CineMajestic** é o seu novo melhor amigo! 
Este sistema não apenas rastreia quantos bilhetes foram vendidos, mas também te diz qual filme é o queridinho da galera e qual está precisando de um pouco mais de marketing.

---

## Sobre o Projeto

Este projeto é um **sistema de console** desenvolvido para simular o **controle e análise de vendas de ingressos de cinema** ao longo de um mês. 
Você insere os dados de vendas semanais para vários filmes e o sistema calcula automaticamente os totais, médias, identifica o *blockbuster* (mais assistido) e o filme menos assistido, e ainda gera um gráfico de barras simples!

> 🎓 **Missão Acadêmica:** Este projeto foi desenvolvido como um **trabalho prático para a faculdade de Análise e Desenvolvimento de Sistemas (ADS)**, com foco no uso eficiente de estruturas de dados (matrizes e vetores) e lógica de programação em C.

---

## Tecnologias

A robustez deste controle de vendas é feita com a linguagem raiz:

* **C (Linguagem de Programação)**: O motor de tudo! C foi usada para construir toda a lógica, manipulação de vetores e matrizes para armazenar e processar os dados de vendas, garantindo um desempenho rápido e eficiente no terminal.

---

## Estrutura do Programa

O código principal (`main`) realiza as seguintes etapas lógicas:

1.  **Declaração de Constantes**: Define a quantidade de filmes e semanas do mês (configurado para 3 filmes e 4 semanas).
2.  **Entrada de Dados**: Solicita ao usuário o nome dos filmes e a quantidade de ingressos vendidos para cada um, semana após semana.
3.  **Processamento**: Calcula o total de ingressos por filme (`totalFilme`) e o total geral (`totalGeral`).
4.  **Análise**: Identifica o **Filme Mais Assistido** e o **Filme Menos Assistido**.
5.  **Relatórios**: Exibe um relatório detalhado, incluindo totais, a média de vendas e um **Gráfico de Barras** (onde cada `*` equivale a 10 ingressos).
6.  **Relatório Semanal**: Mostra o total de ingressos vendidos por semana, em todos os filmes.

---

## Como Usar

Ligar, Inserir Dados, Ver a Mágica Acontecer. Simples assim!

1.  **Compile o código C** em sua máquina (usando GCC, por exemplo):
    ```bash
    gcc -o cinemajestic nome_do_arquivo.c
    ```
2.  **Execute o programa** no terminal:
    ```bash
    ./cinemajestic
    ```
3.  O programa irá solicitar o **nome de 3 filmes**.
4.  Em seguida, pedirá o número de ingressos vendidos para cada filme, por **4 semanas seguidas**.
5.  Após a inserção dos dados, o **relatório completo** será exibido, incluindo os destaques do mês!

---

## Contribua!

Quer sugerir novas métricas de análise? Melhorar a formatação do gráfico de barras? Ou talvez adicionar mais funcionalidades de relatórios (como o melhor filme da semana)? Suas ideias são sempre bem-vindas!

---

## "Foco no código e na bilheteria!" 🍿💻
