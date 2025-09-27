#include <stdio.h>
#include <string.h>

#define QTD_FILMES 3  // Quantidade de filmes
#define QTD_SEMANAS 4 // Quantidade no mês

int main()
{
    int ingressos[QTD_FILMES][QTD_SEMANAS]; // Matriz para armazenar ingressos vendidos
    char filmes[QTD_FILMES][50];            // Array para armazenar nomes dos filmes
    int i, j, totalGeral = 0;
    int totalFilme[QTD_FILMES] = {0}; // Array para armazenar total de ingressos por filme
    int max = 0, min = 0;             // Variáveis para armazenar índices dos filmes com mais e menos ingressos
    float media; // Variável para armazenar a média geral

    printf("===============================\n");
    printf("Sistema CineMajestic\n");
    printf("Controle de Vendas de Ingressos\n");
    printf("===============================\n\n");

    // Entrada de nomes dos filmes
    for (i = 0; i < QTD_FILMES; i++)
    {
        printf("Digite o nome do filme %d: ", i + 1);
        scanf(" %[^\n]", filmes[i]); // lê nomes com espaços
    }

    // Entrada de ingressos por semana
    for (i = 0; i < QTD_FILMES; i++)
    {
        for (j = 0; j < QTD_SEMANAS; j++)
        {
            printf("Digite ingressos vendidos para '%s' na semana %d: ", filmes[i], j + 1);
            scanf("%d", &ingressos[i][j]);
            totalFilme[i] += ingressos[i][j];
            totalGeral += ingressos[i][j];
        }
    }

    // Descobrir maior e menor
    for (i = 1; i < QTD_FILMES; i++)
    {
        if (totalFilme[i] > totalFilme[max])
        {
            max = i;
        }
        if (totalFilme[i] < totalFilme[min])
        {
            min = i;
        }
    }

    // Media Geral
    media = (float)totalGeral / (QTD_FILMES * QTD_SEMANAS);

    // Relatorio final
    printf("\n==== Relatorio de Vendas ====\n");
    for (i = 0; i < QTD_FILMES; i++)
    {
        printf("%s - Total do mes: %d ingressos\n", filmes[i], totalFilme[i]);
    }
    printf("Filme mais assistido: \033[1;32m%s (%d ingressos)\033[0m\n", filmes[max], totalFilme[max]);
    printf("Filme menos assistido: \033[1;31m%s (%d ingressos)\033[0m\n", filmes[min], totalFilme[min]);
    printf("Total geral de ingressos vendidos: %d\n", totalGeral);
    printf("Media geral de ingressos por filmes/semana: %.2f\n", media);

    // Grafico de barras por filme
    printf("\n===== Graficos de Vendas (Total de Filme) =====\n");
    for (i = 0; i < QTD_FILMES; i++)
    {
        printf("%s:", filmes[i]);
        int barras = totalFilme[i] / 10; // cada * vale 10 ingressos
        for (int k = 0; k < barras; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Relatorio Semanal
    printf("\n===== Relatorio Semanal =====\n");
    for (j = 0; j < QTD_SEMANAS; j++)
    {
        int totalSemana = 0;
        for (i = 0; i < QTD_FILMES; i++)
        {
            totalSemana += ingressos[i][j];
        }
        printf("Semana %d: ingressos vendidos: %d\n", j + 1, totalSemana);
    }
    printf("\nObrigado por usar o CineMajestic!\n");
    return 0;
}