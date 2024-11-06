#ifndef ROBOrefactory_H
#define ROBOrefactory_H

typedef struct Ponto {
    int X;
    int Y;
} Ponto;

typedef struct Caminho {
    Ponto *Origem;
    int N;
    int Distancia;
} Caminho;

Caminho *iniciarCaminho(int N);
Ponto Final(Caminho *C);
int Distancia(Caminho *C);
void liberarCaminho(Caminho *C);

#endif
