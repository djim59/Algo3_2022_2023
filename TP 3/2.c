void remplirTableau(Tab t, int n)
{
    int i;
    srand(time(NULL)); // initialise le random
    for (i = 0; i < n; i++)
        t[i] = rand() % n; //t[i] recoit une valeur aletatoire modulo n
}

void affichage(Tab t, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", t[i]);
    printf("\n");
}