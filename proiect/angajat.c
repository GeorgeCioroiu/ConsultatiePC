#include "angajat.h"
void readAngajat(om *angajat){

    scanf("%d",((*angajat).idAngajat));
    scanf("%d",((*angajat).idLibrarie));
    scanf("%d",((*angajat).salariu));
}

void printAngajat(om angajat) {
    printf("%d",angajat.idAngajat);
    printf("%d",angajat.idLibrarie);
    printf("%d",angajat.salariu);
}
