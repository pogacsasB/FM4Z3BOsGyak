#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fajl = fopen("pogacsas.txt","w");

    fprintf(fajl, "Nev: Pogacsas Benedek\nSzak: Mernokinformatikus\nNeptun-kod: FM4Z3B");

    fclose(fajl);
    return 0;
}
