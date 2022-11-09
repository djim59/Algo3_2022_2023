//Fonction affiche doublon

int afficherDoublons(Tab t, int nbClients) {
    int i, j;
    int nbDoublons = 0;
    for (i = 0; i < nbClients; i++) {
        for (j = i + 1; j < nbClients; j++) {
            if (t[i].idClient == t[j].idClient && strcmp(t[i].nom, t[j].nom) == 0) {
                printf("\nDoublon : %d %s \n", t[i].idClient, t[i].nom);
                nbDoublons++;
            }
        }
    }
    return nbDoublons;
}