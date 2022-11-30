void appartientClientFichier(char *nomClient, char *Fichier1){
    FILE *f = fopen(Fichier1, "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier %s", Fichier1);
        exit(1);
    }
    Client c;
    int trouve = 0;
    while (fscanf(f, "%d %s ", &c.id, c.nom) != EOF) {
        if (strcmp(c.nom, nomClient) == 0) {
            printf("%d %s ", c.id, c.nom, c.tel);
            trouve = 1;
        }
    }
    if (trouve == 0) {
        printf("Client introuvable");
    }
    fclose(f);
}