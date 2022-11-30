void triClientsFichier(char *Fichier1)
{
    FILE *f 
    client c;
    int i = 0;
    f = fopen(Fichier1, "r");
    if (f == NULL)
    {
        printf("Erreur d'ouverture du fichier %s", Fichier1);
        exit(1);
    }
    Client *clients = (nombreClientsFichier(Fichier1) * sizeof(Client));
    while (fscanf(f, "%d %s %s ", &c.id, c.nom, c.tel) != EOF)
    {
        clients[i] = c;
        i++;
    }
    fclose(f);
    for (int i = 0; i < nombreClientsFichier(Fichier1); i++)
    {
        for (int j = i + 1; j < nombreClientsFichier(Fichier1); j++)
        {
            if (strcmp(clients[i].nom, clients[j].nom) > 0)
            {
                Client tmp = clients[i];
                clients[i] = clients[j];
                clients[j] = tmp;
            }
        }
    }
    f = fopen(Fichier1, "w");
    if (f == NULL)
    {
        printf("Erreur d'ouverture du fichier %s", Fichier1);
        exit(1);
    }
    for (int i = 0; i < nombreClientsFichier(Fichier1); i++)
    {
        fprintf(f, "%d %s %s ", clients[i].id, clients[i].nom, clients[i].tel);
    }
    fclose(f);
}
