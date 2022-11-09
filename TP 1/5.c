//Fonction afficher les données du tableau
void afficherClients(Tab t, int nbClients) {
    int i;
    for (i = 0; i < nbClients; i++) {
        printf("\nClient %d : %d %s \n", i, t[i].idClient, t[i].nom);
    }
}