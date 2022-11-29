int main(int argc, char const *argv[])
{
    double temps_debut, temps_fin;
    int i;
    double moyenne1 = 0, moyenne2 = 0;
    Tab t1, t2;
    remplirTableau(t1, N);
    CopieTableau(t1, t2, N);
    printf("Tableau initial :\n");
    affichage(t1, N);
    printf("Tableau trié par sélection :\n");
    temps_debut=(double)clock();
    TriParMin(t1, N);
    temps_fin = (double)clock();
    affichage(t1, N);
    printf("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut));
    printf("Tableau trié par rapide :\n");
    temps_debut=(double)clock();
    TriRapide(t2, N);
    temps_fin = (double)clock();
    affichage(t2, N);
    printf("\nDuree de traitement : %f ms\n", 1000*(temps_fin - temps_debut));
    for(i=0; i<10; i++){
        remplirTableau(t1, N);
        CopieTableau(t1, t2, N);
        temps_debut=(double)clock();
        TriParMin(t1, N);
        temps_fin = (double)clock();
        moyenne1 += 1000*(temps_fin - temps_debut);
        temps_debut=(double)clock();
        TriRapide(t2, N);
        temps_fin = (double)clock();
        moyenne2 += 1000*(temps_fin - temps_debut);
    }
    printf("\nDuree de traitement moyen de TriParMin : %f ms\n", moyenne1/10);
    printf("\nDuree de traitement moyen de TriRapide : %f ms\n", moyenne2/10);
    return 0;
}
