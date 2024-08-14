#include <stdio.h>

typedef struct{
    int x, y;
    int w, h;
    double rotation;
    unsigned int hp;
    unsigned int ammo;
}Jatekos;

//mozgatja a jatekost x es y mennyiseggel az x es y iranyban
void jatekos_mozgat(Jatekos* jatekos, int x, int y){
    jatekos->x += x; // ugyanaz mint (*jatekos).x += x
    jatekos->y += y; // ugyanaz mint (*jatekos).y += y
}

int main(void){
    printf("Jatekos merete: %zu\n", sizeof(Jatekos)); // 32
    printf("Jatekos pointer merete: %zu\n", sizeof(Jatekos*)); // 8
    return 0;
}