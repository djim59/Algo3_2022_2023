//Fonction recherche d'un client
int rechercheClient(int idClient, Tab t, int nbClients, int * indiceClient) {
    int i;
    for (i = 0; i < nbClients; i++) {
        if (t[i].idClient == idClient) {
            *indiceClient = i;
            return 1;
        }
    }
    return 0;
}