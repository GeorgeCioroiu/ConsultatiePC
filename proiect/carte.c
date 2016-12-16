#include <stdio.h>

Carte* ReadCarte(Carte **adressBook){
    printf("id=");          scanf("%d", adressBook->id);
    printf("id Autor=");    scanf("%d", adressBook->idAutor);   fflush(stdin);
    printf("Nume=");        scanf("%s", adressBook->nume);
    printf("An lansare=");  scanf("%d", adressBook->anLansare);
    printf("Pret=");        scanf("%d", adressBook->pret);      fflush(stdin);
    printf("Gen=");         scanf("%s", adressBook->gen);
}

void PrintCarte(Carte *book) {
    printf("id=%d \n", book->id);
    printf("id Autor=%d \n", book->idAutor);
    printf("Nume=%s \n", book->nume);
    printf("An lansare=%d \n", book->anLansare);
    printf("Pret=%d \n", book->pret);
    printf("Gen=%s \n", book->gen);
}
