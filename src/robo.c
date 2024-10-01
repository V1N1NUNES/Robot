#include <stdio.h>
#include <malloc.h>
#include "robo.h"



//funções de manutenção e limpeza

int main()
{
    int ciclos = 0;
    Caminho road;

    printf("Robot road\n\n");
    printf("Digite a quantidade de ciclos que deseja que o robô percorra:\n");
    scanf("%d", &ciclos);

    iniciarCaminho(ciclos);
}




//Função para alocar memória para o caminho e inicializar variáveis do tipo abstrato de dados Caminho (o ponto de origem com o valor referente a (0, 0), o número de pontos a ser percorrido com o inteiro N e a distância a ser percorrida com valor inicial 0).
Caminho *iniciarCaminho(int N)
{
    //NovoCaminho passa a ter o tamanho de N caminhos
    Caminho *NovoCaminho = malloc(N * sizeof(Caminho));
    
    if(NovoCaminho == NULL)
    {
        printf("Erro na alocação de memória para o caminho.\n");
        exit(1);
    }
    
}


//Função que retornará o ponto final ocupado pelo robô depois de N ciclos. Por exemplo, caso N seja 6, o valor de retorno será o ponto para o qual X = 2 e Y = 2; e, caso N seja 16, o ponto terá coordenadas X = -2 e Y = -4.
Ponto Final(Caminho *C)
{

}


//Função que retornará a distância total percorrida pelo robô em N ciclos. Por exemplo, para N = 6 e chegar em (2, 2), a distância percorrida será 1 + 1 + 2 + 2 + 3 + 3 = 12. Para N = 16, a distância percorrida pelo robô para chegar em (-4, -4) é 1 + 1 + 2 + 2 + 3 + 3 + ... + 7 + 7 + 8 + 8 = 56.
int Distancia(Caminho *C)
{

}

