#include <stdio.h>
#define N 10

typedef int Tab[N];

int somme(Tab t, int n , int i)
{
    int resultat=0;
    printf("Calcul de la somme a partir de l'indice %d : \n",i+1);
    if (i<n)
    {
        printf("\t appel du calcul de la somme a partir de l'indice %d :\n",i+1);
        resultat =t[i]+somme(t,n,i+1);
        printf("\t addition avec t[%d]\n",i);
    }
    printf("\t Somme a partir de l'indice %d = %d\n\n",i,resultat);
    return resultat;

}
void affichage(Tab t, int n, int i)
{
        if (i<n)
        {
            printf("t[%d] = %d\n",i,t[i]);
            affichage(t,n,i+1);
        }
}