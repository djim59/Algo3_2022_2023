int somme2(Tab t, int n)
{
    int resultat=0;
    if (n>0)
    {
        resultat=t[n-1]+somme2(t,n-1);
    }
    return resultat;
}