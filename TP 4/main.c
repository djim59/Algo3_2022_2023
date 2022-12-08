int main(){
    Client c;
    printf("id du client : ");
    scanf("%d", &c.id);
    printf("nom du client : ");
    scanf("%s", c.nom);
    AjoutClientFichier(c,"client.txt");
    AfficherClients("client.txt");
    printf("\n nombre de clients : %d", nombreClientsFichier("client.txt"));
    printf("\n nom du client rechercher : ");
    char nomClient[10];
    scanf("%s", nomClient);
    appartientClientFichier(nomClient, "client.txt");
    return 0;
}
