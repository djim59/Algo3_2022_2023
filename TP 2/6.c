int RechercheValeurDichotomique(Tab t, int n ,int i,int v)
{
    int resultat=-1;
    if (i<n)
    {
        if (t[i]==v)
        {
            resultat=i;
        }
        else
        {
            resultat=RechercheValeur(t,n,i+1,v);
        }
    }
    return resultat;
}