int NombreClientsFichier(char *Fichier1){
FILE *f;
client c;
int nb = 0;
f = fopen(Fichier1, "r");
while (fscanf(f, "%d %s", &c.id, c.nom, c.tel) != EOF) {
nb++;
}
fclose(f);
return nb;
}