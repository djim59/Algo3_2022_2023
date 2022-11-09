//Fonction recherche IDMin IDMax
void rechercheIdMinMax(Tab t, int nbClients, int * indiceIdMin, int * indiceIdMax) {
    int i;
    int idMin = t[0].idClient;
    int idMax = t[0].idClient;
    for (i = 0; i < nbClients; i++) {
        if (t[i].idClient < idMin) {
            idMin = t[i].idClient;
            *indiceIdMin = i;
        }
        if (t[i].idClient > idMax) {
            idMax = t[i].idClient;
            *indiceIdMax = i;
        }
    }
}