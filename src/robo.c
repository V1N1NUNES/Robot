#include <stdio.h>
#include <malloc.h>
#include "robo.h"


//declarações
int ciclos = 0;

//funções
int main()
{
    Caminho *road;
    int percorrido = 0;
    Ponto chegada;

    printf("Robot Road\n\n");
    printf("Digite a quantidade de ciclos que deseja que o robô percorra:\n");
    scanf("%d", &ciclos);

    road = iniciarCaminho(ciclos);
    chegada = Final(road);
    percorrido = Distancia(road);

    printf("Ponto final: (X: %d, Y: %d)\n", chegada.Y, chegada.X);
    printf("Distância total percorrida: %d\n\n", percorrido);

    return 0;
}

Caminho *iniciarCaminho(int N)
{
    //inicializa o caminho 
    Caminho *NovoCaminho = malloc(sizeof(Caminho));

    if(NovoCaminho == NULL)
    {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    NovoCaminho->Origem = (Ponto *) malloc(sizeof(Ponto));
    
    //inicializa as variaveis
    NovoCaminho->N = N;
    NovoCaminho->Distancia = 0;
    NovoCaminho->Origem->X = 0;
    NovoCaminho->Origem->Y = 0;
    NovoCaminho->Origem->proximo = NULL;

    //criar N pontos no caminho
    Ponto *atual = NovoCaminho->Origem;

    for(int i=0;i<N-1;i++)
    {
        atual->proximo = (Ponto*)malloc(sizeof(Ponto));
        atual = atual->proximo;
    }

    return NovoCaminho;
}

Ponto Final(Caminho *C)
{
    Ponto final;
    int x = 0, y = 0;
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
                y += distancia;
                break;
            case 1: // Direita
                x += distancia;
                break;
            case 2: // Baixo
                y -= distancia;
                break;
            case 3: // Esquerda
                x -= distancia;
                break;
        }
    }
    final.X = x;
    final.Y = y; 

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