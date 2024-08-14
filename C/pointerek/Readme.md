## Pointer

A C nyelv egy sajátossága, hogy a memóriát általános változókon kívül pointerekkel is elérhetjük.<br>
Egy pointer gyakorlatilag felfogható egy memóriacímként, valamint más, változó metaadatokként.

Egy változóra pointert az "address-of" operátorral: & (Ampersand, And jel, gyakorlatvezetőknél néha "At" jel) kaphatunk.
A pointer önmaga egy típus. Pl. egy változónak lehet int pointer a típusa. Ezt a következőképp jelöljük: `int* p;`
```c
#include <stdio.h>

int main(void){
    int a = 5;
    int* pa = &a; // pa nevű változó típusa int*, értéke az a-ra mutató pointer

    printf("a value:%d\na address:%p\n", a, pa); //a %p format specifier a pointer által mutatott címet írja ki.
    return 0;
}
```

## Mire jó egy pointer?

Tegyük fel, hogy egy egyszerű függvényt szeretnénk megvalósítani: `int_swap()`<br>
Az egyetlen dolga, hogy megcserél két egész számot két változóban. 
Első próbálkozásunk talán a következő lenne:
```c
void int_swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}
```
Ezzel azonban van egy kis probléma. Amikor a függvényt meghívjuk, a változók bemásolódnak az `a` és `b` paraméterekbe, viszont így amikor a paramétereket változtatjuk, az eredeti változók nem változnak meg.<br>
Ekkor használhatjuk a pointereket, hiszen ezek gyakorlatilag memóriacímek. Ebben a rövid kódrészletben megismerjük a pointer által mutatott memória elérésének módját is.
```c
void int_swap(int* a, int* b) { //két db int* -ot veszünk paraméterként
    int tmp = *a; //a dereferencia(*) operátor a pointer által mutatott memóriát adja vissza, ez esetben az 'a' pointer mögötti egész számot
    *a = *b; //*a -> az a mögötti egész = *b -> b mögötti egész
    *b = tmp; //*b -> b mögötti egész = tmp, *a régi értéke.
}
```

A fenti példából azt láthatjuk, hogy mindenképp szükdégünk van pointerekre, ha azt szeretnénk, hogy a függvényünk megváltoztassa a paraméterként kapott értékeket.

pl:
```c
#include <stdio.h>

int main(void){
    int szam1 = 5;
    int szam2 = 10;
    printf("szam1:%d, szam2:%d\n", szam1, szam2); //szam1:5, szam2:10
    int_swap(&szam1, &szam2);
    printf("szam1:%d, szam2:%d\n", szam1, szam2); //szam1:10, szam2:5
}
```
Kimenet:<br>
![alt text](image.png)
