//Fonction pour enlever client
int enleverClient(int idClient, Tab t, int * nbClients) {
    int i, j;
    for (i = 0; i < *nbClients; i++) {
        if (t[i].idClient == idClient) {
            for (j = i; j < *nbClients - 1; j++) {
                t[j] = t[j + 1];
            }
            (*nbClients)--;
            return 1;
        }
    }
    return 0;
}