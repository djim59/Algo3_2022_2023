void TriRapide(Tab t, int n)
{
    int i, j, pivot, tmp;
    if (n < 2)
        return;
    pivot = t[n / 2];
    for (i = 0, j = n - 1;; i++, j--)
    {
        while (t[i] < pivot)
            i++;
        while (t[j] > pivot)
            j--;
        if (i >= j)
            break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    TriRapide(t, i);
    TriRapide(t + i, n - i);
}