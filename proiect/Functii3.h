///@author Grupa3

typedef struct {
    int id;
    char *nume;
    char *locatie;
    int numarCarti;
    Carte *carte;
} Librarie;

void readLibrarie(FILE *inputFile, Librarie *adressLibrarie);

void printLibrarie(FILE *outputFile, Librarie librarie);

