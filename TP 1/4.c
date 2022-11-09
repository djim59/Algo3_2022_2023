//Fonction modifier nom du client
void modifierNom(Tab t, int nbClients, int i) {
    if (i < nbClients) {
        printf("Veuillez saisir le nouveau nom du client : ");
        scanf("%s", t[i].nom);
    }
}
