#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* f = fopen("file.txt", "r");
    char szoveg[50];
    fgets(szoveg, 49, f); //oké, de mi van ha nem nyílt meg a file??
    return 0;
}