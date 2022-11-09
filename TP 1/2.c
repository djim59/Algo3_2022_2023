//Fonction ajouter un client dans le tableau
void ajouter(Client c, Tab t, int * nbClients) {
    if (*nbClients < N) {
        t[*nbClients] = c;
        (*nbClients)++;
    }
}
