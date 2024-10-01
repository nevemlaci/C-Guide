#include <stdio.h>
#include <stdlib.h>

int main(){
    size_t tomb_meret = 1;
    printf("Mekkora tömböt kérsz?: ");
    scanf("%zu", &tomb_meret);
    printf("\n");
    int* tomb = (int*) malloc(sizeof(int) * tomb_meret);
    //kitöltjük a tömböt csupa 0-val.
    for(size_t i = 0; i < tomb_meret; i++){
        tomb[i] = 0;
    }
    for(size_t i = 0; i < tomb_meret; i++){
        printf("%d\n",tomb[i]);
    }
    free(tomb);
}