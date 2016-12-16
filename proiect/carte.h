// Grupa 1

typedef struct CARTE {
    int id;
    int idAutor;
    char *nume;
    int anLansare;
    int pret;
    char *gen;
} Carte;

Carte* ReadCarte(FILE *nameFile, Carte *adressBook);

void PrintCarte(FILE *nameFile, Carte *book);
