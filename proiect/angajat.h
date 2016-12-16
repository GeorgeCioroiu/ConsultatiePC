struct angajati {
    int idAngajat;
    int idLibrarie;
    int salariu;

};
typedef struct angajati om;

void readAngajat(FILE *inputFile, om *angajat);

void printAngajat(FILE *outputFile, om angajat);

int idBestSallary(om v[1000], int nr);
