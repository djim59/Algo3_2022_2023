#include <stdio.h>
#include <stdlib.h>

int longueur(char *chaine)
{
    int i = 0;
    while (chaine[i] != '\0')
    {
        i++;
    }
    return i;
}

void afficherInverse(char *chaine)
{
    int i = longueur(chaine);
    while (i >= 0)
    {
        printf("%c", chaine[i]);
        i--;
    }
}

int egalite(char *chaine1, char *chaine2)
{
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0')
    {
        if (chaine1[i] != chaine2[i])
        {
            return 0;
        }
        i++;
    }
    if (chaine1[i] == '\0' && chaine2[i] == '\0')
    {
        return 1;
    }
    return 0;
}

int palindrome(char *chaine)
{
    int i = 0;
    int j = longueur(chaine) - 1;
    while (i < j)
    {
        if (chaine[i] != chaine[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char chaine1[20];
    char chaine2[20];
    printf("Entrez une chaine de caractere : \n");
    scanf("%s", chaine1);
    printf("Entrez une seconde chaine de caractere :\n ");
    scanf("%s", chaine2);
    printf("La longueur de la premiere chaine est %d\n", longueur(chaine1));
    printf("La longueur de la deuxieme chaine est %d\n", longueur(chaine2));
    printf("La premiere chaine à l'envers est :\n ");
    afficherInverse(chaine1);
    printf("\n");
    printf("La deuxieme chaine à l'envers est :\n ");
    afficherInverse(chaine2);
    printf("\n");
    if(egalite(chaine1, chaine2) == 1)
    {
        printf("Les deux chaines sont egales\n");
    }
    else
    {
        printf("Les deux chaines ne sont pas egales\n");
    }
    if(palindrome(chaine1) == 1)
    {
        printf("La premiere chaine est un palindrome\n");
    }
    else
    {
        printf("La premiere chaine n'est pas un palindrome\n");
    }
    return 0;
}