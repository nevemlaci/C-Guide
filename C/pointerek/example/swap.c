#include <stdio.h>

void int_swap(int* a, int* b) { //két db int* -ot veszünk paraméterként
    int tmp = *a; //a dereferencia(*) operátor a pointer által mutatott memóriát adja vissza, ez esetben az 'a' pointer mögötti egész számot
    *a = *b; //*a -> az a mögötti egész = *b -> b mögötti egész
    *b = tmp; //*b -> b mögötti egész = tmp, *a régi értéke.
}

int main(void){
    int szam1 = 5;
    int szam2 = 10;
    printf("szam1:%d, szam2:%d\n", szam1, szam2); //szam1:5, szam2:10
    int_swap(&szam1, &szam2);
    printf("szam1:%d, szam2:%d\n", szam1, szam2); //szam1:10, szam2:5
}