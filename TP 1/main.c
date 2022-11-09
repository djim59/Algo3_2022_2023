int main() {
    Tab t;
    int nbClients = 0;
    int indiceClient;
    int indiceIdMin;
    int indiceIdMax;
    int nbDoublons;
    int idClient;
    Client c;
    saisieClients(t, 3, &nbClients);
    afficherClients(t, nbClients);
    printf("\n Veuillez saisir l'identifiant du client a modifier : ");
    scanf("%d", &idClient);
    if (rechercheClient(idClient, t, nbClients, &indiceClient)) {
        modifierNom(t, nbClients, indiceClient);
    }
    afficherClients(t, nbClients);
    rechercheIdMinMax(t, nbClients, &indiceIdMin, &indiceIdMax);
    printf("\nClient ayant l'identifiant le plus petit : %d %s \n", t[indiceIdMin].idClient, t[indiceIdMin].nom);
    printf("\nClient ayant l'identifiant le plus grand : %d %s \n", t[indiceIdMax].idClient, t[indiceIdMax].nom);
    nbDoublons = afficherDoublons(t, nbClients);
    printf("\nNombre de doublons : %d \n", nbDoublons);
    saisie(&c);
    if (ajouterSansDoublon(c, t, &nbClients)) {
        printf("\nClient ajouter \n");
    } else {
        printf("\nClient non ajouter \n");
    }
    afficherClients(t, nbClients);
    printf("Saisir l'identifiant du client à enlever : ");
    scanf("%d", &idClient);
    if (enleverClient(idClient, t, &nbClients)) {
        printf("\nClient enlever \n");
    } else {
        printf("\nClient non enlever \n");
    }
    afficherClients(t, nbClients);
    return 0;
}
