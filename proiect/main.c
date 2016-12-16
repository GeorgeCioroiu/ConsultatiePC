#include <stdio.h>
#include <stdlib.h>
#include "angajat.h"

int main()
{  //citit mai multre carti si afisati-;e e ecran
    int n, i;
    Carte v[10];
    freopen("test-angajati.txt", "rt", stdin);
    scanf("%d", &n);
    for(i=0; i<n; i++)
        readAngajat(stdin, &v[i]);

    for(i=0; i<n; i++)
        printAngajat(stdout, v[i]);
    return 0;
}
