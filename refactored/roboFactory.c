#include <stdio.h>
#include <stdlib.h>
#include "roboRefactory.h"

int main()
{
    Caminho *road;
    int percorrido = 0;
    Ponto chegada;
    int ciclos = 0; // ciclos agora fica dentro do main

    printf("Robot Road\n\n");
    printf("Digite a quantidade de ciclos que deseja que o robô percorra:\n");

    //verificação de número válido
    if (scanf("%d", &ciclos) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    road = iniciarCaminho(ciclos);
    chegada = Final(road);
    percorrido = Distancia(road);

    printf("Ponto final: (X: %d, Y: %d)\n", chegada.Y, chegada.X);
    printf("Distância total percorrida: %d\n\n", percorrido);

    liberarCaminho(road);
    return 0;
}

Caminho *iniciarCaminho(int N)
{
    Caminho *NovoCaminho = malloc(sizeof(Caminho));
    if (NovoCaminho == NULL)
    {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    //printf("Alocação de memória bem sucedida!!\n\n");

    // alocação de todos os pontos em um bloco de memória
    NovoCaminho->Origem = malloc(N * sizeof(Ponto));

    //válidação de alocação de memória
    if (NovoCaminho->Origem == NULL)
    {
        printf("Erro na alocação de memória.\n");
        free(NovoCaminho);
        exit(1);
    }
    printf("Alocação de memória para Origem bem sucedida!\n\n");

    NovoCaminho->N = N;
    NovoCaminho->Distancia = 0;
    
    Ponto *atual = NovoCaminho->Origem;
    for (int i = 0; i < N; i++)
    {
        atual[i].X = 0;
        atual[i].Y = 0;
    }

    return NovoCaminho;
}

Ponto Final(Caminho *C)
{
    Ponto final = {0, 0};
    int distancia = 0;

    for (int i = 0; i < C->N; i++)
    {
        if (i % 2 == 0)
        {
            distancia++;
        }

        switch (i % 4)
        {
            case 0: // Cima
                final.Y += distancia;
                break;
            case 1: // Direita
                final.X += distancia;
                break;
            case 2: // Baixo
                final.Y -= distancia;
                break;
            case 3: // Esquerda
                final.X -= distancia;
                break;
        }
    }
    return final;
}

int Distancia(Caminho *C)
{
    int distanciaTotal = 0;
    int distancia = 0;

    for (int i = 0; i < C->N; i++)
    {
        if (i % 2 == 0)
        {
            distancia++;
        }
        distanciaTotal += distancia;
    }

    return distanciaTotal;
}

// liberação para a memória alocada dinamincamente  
void liberarCaminho(Caminho *C)
{
    if (C != NULL)
    {
        if (C->Origem != NULL)
        {
            free(C->Origem);
        }
        free(C);
    }
}