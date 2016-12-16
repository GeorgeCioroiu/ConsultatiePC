#include "angajat.h"
void readAngajat(FILE *inputFile, om *angajat){

    fscanf("%d",((*angajat).idAngajat));
    fscanf("%d",((*angajat).idLibrarie));
    fscanf("%d",((*angajat).salariu));
}
void printAngajat(FILE *outputFile, om angajat) {
    fprintf("%d",angajat.idAngajat);
    fprintf("%d",angajat.idLibrarie);
    fprintf("%d",angajat.salariu);
}
