///@author Grupa3

#include "librarie.h"

void readLibrarie(FILE *inputFile, Librarie *adressLibrarie) {
    int i;
    fscanf(inputFile, "%d", &((*adressLibrarie).id));
    gets((*adressLibrarie).nume);
    gets((*adressLibrarie).locatie);
    fscanf(inputFile, "%d", &((*adressLibrarie).numarCarti));
   (*adressLibrarie).carti = (Carte *)malloc((*adressLibrarie).numarCarti * sizeof(Carte));
    for (i = 0; i < (*adressLibrarie).numarCarti; i++) {
        ReadCarte(inputFile, &(adressLibrarie)->carti[i]);
    }
}

void printLibrarie(FILE *outputFile, Librarie librarie) {
    int i;
    fprintf(outputFile, "%d", (librarie).id);
    puts((librarie).nume);
    puts((librarie).locatie);
    fprintf(outputFile, "%d", (librarie).numarCarti);
    for (i = 0; i < (librarie).numarCarti; i++) {
        PrintCarte(outputFile,  (librarie).carti[i]);
    }
}


