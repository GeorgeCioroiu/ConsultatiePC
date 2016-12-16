///@author Grupa3

typedef struct {
    int id;
    char nume[50];
    char locatie[150];
    int numarCarti;
    Carte *carte;
} Librarie;

void readLibrarie(FILE *inputFile, Librarie *adressLibrarie);

void printLibrarie(FILE *outputFile, Librarie librarie);

