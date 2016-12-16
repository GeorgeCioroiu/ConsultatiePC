#include "angajat.h"
#include <stdio.h>

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

int idBestSallary(om v[1000], int nr){
    int max=0,i,id;
    for(i=0;i<nr;i++)
    {
        if(v[i].salariu>max) {
            max=v[i].salariu;
            id=v[i].idAngajat;
        }
    }
    return id;
}
