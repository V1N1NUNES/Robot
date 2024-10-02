#include <stdio.h>
#include <malloc.h>
#include "robo.h"



//funções de manutenção e limpeza

int main()
{
    int ciclos = 0;
    Caminho *road;
    int percorrido = 0;
    Ponto chegada;

    printf("Robot road\n\n");
    printf("Digite a quantidade de ciclos que deseja que o robô percorra:\n");
    scanf("%d", &ciclos);

    road = iniciarCaminho(ciclos);
    chegada = Final(road);
    percorrido = Distancia(road);
}




//Função para alocar memória para o caminho e inicializar variáveis do tipo abstrato de dados Caminho (o ponto de origem com o valor referente a (0, 0), o número de pontos a ser percorrido com o inteiro N e a distância a ser percorrida com valor inicial 0).
Caminho *iniciarCaminho(int N)
{
    //NovoCaminho passa a ter o tamanho de N caminhos
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
    NovoCaminho->Origem->Próximo = NULL;

    return NovoCaminho;
}


//Função que retornará o ponto final ocupado pelo robô depois de N ciclos. Por exemplo, caso N seja 6, o valor de retorno será o ponto para o qual X = 2 e Y = 2; e, caso N seja 16, o ponto terá coordenadas X = -2 e Y = -4.
Ponto Final(Caminho *C)
{
    Ponto chegada;

    for(int i=0;i< C->N;i++)
    {
        if(C->Origem->X == i)
        {
            chegada.X = i+1;
            C->Origem->X = chegada.X;
            //armazenar as coordenadas do ponto(X = 1 ; Y = 0)
        }
        for(int j=0;j<C->N;j++)
        {
            if(C->Origem->Y == j)
            {
                chegada.Y = j+1;
                C->Origem->Y = chegada.Y;
                //armazenar as coordenadas do ponto(X = 1 ; Y = 1)
            }
        }
    }

    return chegada;
}


//Função que retornará a distância total percorrida pelo robô em N ciclos. Por exemplo, para N = 6 e chegar em (2, 2), a distância percorrida será 1 + 1 + 2 + 2 + 3 + 3 = 12. Para N = 16, a distância percorrida pelo robô para chegar em (-4, -4) é 1 + 1 + 2 + 2 + 3 + 3 + ... + 7 + 7 + 8 + 8 = 56.
int Distancia(Caminho *C)
{

}

