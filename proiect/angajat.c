#include "angajat.h"
void readAngajat(FILE *inputFile, om *angajat){
    fscanf(inputFile,"%d",((*angajat).idAngajat));
    fscanf(inputFile,"%d",((*angajat).idLibrarie));
    fscanf(inputFile,"%d",((*angajat).salariu));
}

void printAngajat(FILE *outputFile, om angajat) {
    fprintf(outputFile,"%d",angajat.idAngajat);
    fprintf(outputFile,"%d",angajat.idLibrarie);
    fprintf(outputFile,"%d",angajat.salariu);
}
