#include <stdio.h>
#include <string.h>
#define N 1000

typedef char Chaine[15];
typedef struct {
    int idClient;
    Chaine nom;
} Client;
typedef Client Tab[N];

//Fonction saisie des données dclient
void saisie(Client * c) {
    printf("\nSaisir l'identifiant du client : ");
    scanf("%d", &c->idClient);
    printf("Saisir le nom du client : ");
    scanf("%s", c->nom);
}
