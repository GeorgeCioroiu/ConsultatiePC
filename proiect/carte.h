// Grupa 1

typedef struct CARTE {
    int id;
    int idAutor;
    char *nume;
    int anLansare;
    int pret;
    char *gen;
} Carte;

void ReadCarte(char *nume);

void PrintCarte(char *nume);
