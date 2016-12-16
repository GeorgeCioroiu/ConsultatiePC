#include <stdio.h>
#include <stdlib.h>

int main()
{  //citit mai multre carti si afisati-;e e ecran
    int n, i;
    Carte v[10];
    freopen("test.txt", "rt", stdin);
    scanf("%d", &n);
    for(i=0; i<n; i++)
        ReadCarte(stdin, &v[i]);

    for(i=0; i<n; i++)
        PrintCarte(stdout, &v[i]);
    return 0;
}
