int main ()
{

Tab t1 = {4,2,8,0,7,3,1,5,9,6};

Tab t2 = {8,6,3,1,2,7,0,4,9,5};
    printf("La somme des entiers du tableau t1 est %d\n",somme(t1,N,0));
affichage(t1,N,0);
    printf("La somme des entiers du tableau t1 est %d\n",somme2(t1,N));

    printf("Il y a %d entiers superieurs a 8 dans le tableau t1\n",ValeurSup(t1,N,8));

    AffichageDesc(t1,N);

    printf("Il y a %d entiers superieurs a 8 dans le tableau t1\n",ValeurSup(t1,N,8));

    printf("La valeur 8 se situe a l'indice %d dans le tableau\n",RechercheValeur(t1,N,0,8));

    printf("La valeur 8 se situe a l'indice %d dans le tableau\n",RechercheValeurDichotomique(t2,N,0,8));

    return 0;
}
