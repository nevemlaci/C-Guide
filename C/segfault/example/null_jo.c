#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* f = fopen("file.txt", "r");
    if(f == NULL){
        printf("Hiba a file megnyitasa kozben!\n");
        return 1;
    }
    char szoveg[50];
    fgets(szoveg, 49, f); //oké, de mi van ha nem nyílt meg a file??
    //Hát semmi, mert fent lekezeltük a hibát.
    return 0;
}