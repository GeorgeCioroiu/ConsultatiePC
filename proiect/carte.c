#include <stdio.h>

Carte* ReadCarte(FILE *nameFile, Carte *adressBook){
    fscanf(nameFile, "%d", &adressBook->id);
    fscanf(nameFile, "%d", &adressBook->idAutor);   fscanf(nameFile, "%s");
    fscanf(nameFile, "%s", &adressBook->nume);
    fscanf(nameFile, "%d", &adressBook->anLansare);
    fscanf(nameFile, "%d", &adressBook->pret);      fscanf(nameFile, "%s");
    fscanf(nameFile, "%s", &adressBook->gen);
    return adressBook;
}

void PrintCarte(FILE *nameFile, Carte *book) {
    fprintf(nameFile, "id=%d \n", book->id);
    fprintf(nameFile, "id Autor=%d \n", book->idAutor);
    fprintf(nameFile, "Nume=%s \n", book->nume);
    fprintf(nameFile, "An lansare=%d \n", book->anLansare);
    fprintf(nameFile, "Pret=%d \n", book->pret);
    fprintf(nameFile, "Gen=%s \n", book->gen);
}

int ValoareCarti(Carte book[], int numarCarti) {
    int i, sumaStock=0;
    for (i=0;i<numarCarti;i++) {
        sumaStock +=  book[i]->pret;
    }
    return sumaStock;
}
