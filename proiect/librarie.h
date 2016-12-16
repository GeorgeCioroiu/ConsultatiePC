///@author Grupa3
#include "carte.h"
typedef struct {
    int id;
    char nume[50];
    char locatie[150];
    int numarCarti;
    Carte *carti;
} Librarie;

void readLibrarie(FILE *inputFile, Librarie *adressLibrarie);

void printLibrarie(FILE *outputFile, Librarie librarie);

