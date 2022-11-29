void AffichageDesc(Tab t, int n)
{
    if (n>0)
    {
        printf("t[%d] = %d\n",n-1,t[n-1]);
        AffichageDesc(t,n-1);
    }
}
