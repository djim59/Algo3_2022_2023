int main()
{
    char Fichier1[30];
    printf("Nom du fichier : ");
    scanf("%s", Fichier1);
    Client c;
    printf("l'Id : ");
    scanf("%d", &c.id);
    printf("Le Nom : ");
    scanf("%s", c.nom);
    printf("Le numéro de Tel : ");
    scanf("%s", c.tel);
    ajouteClientFichier(c, Fichier1);
    afficheClientsFichier(Fichier1);
    printf(" %d ", nombreClientsFichier(Fichier1));
    triClientsFichier(Fichier1);
    afficheClientsFichier(Fichier1);
    char nomClient[15];
    printf("Nom du client a rechercher : ");
    scanf("%s", Fichier1);
    appartientClientFichier(Fichier1, nomClient);
    return 0;
    
}