// Grupa 1
#include<stdio.h>
typedef struct CARTE {
    int id;
    int idAutor;
    char *nume;
    int anLansare;
    int pret;
    char *gen;
} Carte;

void ReadCarte(FILE *nameFile, Carte *adressBook);

void PrintCarte(FILE *nameFile, Carte book);

int ValoareCarti(Carte book[], int numarCarti);
