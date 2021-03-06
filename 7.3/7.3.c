#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct guarda_ponto
{
    int x,y;
}Ponto;

Ponto PreenchePonto()
{
    int x,y;
    Ponto p;

    printf("x: ");
    scanf("%d",&x);
    p.x = x;

    printf("y: ");
    scanf("%d",&y);
    p.y = y;

    return p;
}

void PreencheVetor(Ponto vec[])
{
    int i;
    Ponto valor;

    for(i=0;i<10;i++)
    {
        printf("Ponto %d: \n",(i+1));
        valor =  PreenchePonto();
        vec[i] = valor;
        printf("\n");
    }
}

Ponto Distancia(Ponto vec[])
{
    int i;
    double maior = 0;
    double conta;
    Ponto distante;
    for(i = 0;i<10;i++)
    {
        conta = 0;
        conta = sqrt(pow(vec[i].x,2) + pow(vec[i].y,2));
        if (conta >maior){
            maior = conta;
            distante.x = vec[i].x;
            distante.y = vec[i].y;
        }
    }
    //printf("O ponto mais distante de (0,0) eh: (%d,%d).\n",distante.x,distante.y);
    return(distante);
}

int main()
{
    int i = 0;
    Ponto vetor[10]; // char vetor[10*(sizeof(Ponto))];
    Ponto p1,distante;

    //p1 = PreenchePonto();
    //printf("p1: (%d,%d)\n",p1.x,p1.y);

    PreencheVetor(vetor);
    for(i=0;i<10;i++)
    {
        printf("valor %d: (%d,%d)\n",(i+1),vetor[i].x,vetor[i].y);
    }
    distante = Distancia(vetor);
    
    printf("O ponto mais distante de (0,0) eh: (%d,%d).\n",distante.x,distante.y);

    return 0;
}
