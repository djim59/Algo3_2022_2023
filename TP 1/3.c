//Fonction saisie et ajout d'un client
int saisieClients(Tab t, int p, int * nbClients) {
    int i;
    Client c;
    for (i = 0; i < p; i++) {
        saisie(&c);
        ajouter(c, t, nbClients);
    }
    return 1;
}
