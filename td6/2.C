void ajouteClientFichier(Client c, char *Fichier1){
    FILE *f = fopen(Fichier1, "a");
    if (f == NULL)
    {
        printf("Erreur d'ouverture du fichier %s",Fichier1);
        exit(1);
    }
    fprintf(f,"%d %s %s",c.id,c.nom,c.tel);
    fclose(f);
}