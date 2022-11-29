int ValeurSup(Tab t, int n, int v)
{
    int resultat=0;
    if (n>0)
    {
        if (t[n-1]>v)
        {
            resultat=1+ValeurSup(t,n-1,v);
        }
        else
        {
            resultat=ValeurSup(t,n-1,v);
        }
    }
    return resultat;
}