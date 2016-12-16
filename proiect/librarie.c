///@author Grupa3

#include "librarie.h"

void readLibrarie(FILE *inputFile, Librarie *adressLibrarie) {
    int i;
    fscanf(inputFile, "%d", &((*adressLibrarie).id));
    gets((*adressLibrarie).nume);
    gets((*adressLibrarie).locatie);
    fscanf(inputFile, "%d", &((*adressLibrarie).numarCarti));
    (*adressLibrarie).carte = (Carte *)malloc(numarCarti * sizeof(Carte));
    for (i = 0; i < numarCarti; i++) {
        ReadCarte(&(adressLibrarie)->carte);
    }
}

void printLibrarie(FILE *outputFile, Librarie librarie) {
    int i;
    fprintf(outputFile, "%d", (*adressLibrarie).id);
    puts((*adressLibrarie).nume);
    puts((*adressLibrarie).locatie);
    fprintf(outputFile, "%d", (*adressLibrarie).numarCarti);
    for (i = 0; i < numarCarti; i++) {
        PrintCarte(&(adressLibrarie)->carte);
    }
}


