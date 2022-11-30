void afficheClientsFichier(char *Fichier1){
    FILE *f ;
    Client c;
    f = fopen(Fichier1, "r");
    if (f == NULL)
    {
        printf("Erreur le fichier n'existe pas %s", Fichier1);
        exit(1);
    }
    while (fscanf(f, "%d %s %s ", &c.id, c.nom, c.tel) != EOF)
    {
        printf("%d %s %s ", c.id, c.nom, c.tel);
    }
    fclose(f);
}