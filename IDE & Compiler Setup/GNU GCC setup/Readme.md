## Ajánlott platformok

Linux, *MacOS*

## GCC

A GCC a GNU Compiler Collection rövidítése. Szabadon elérhető C, C++, Pascal, Objective C, Java, Fortran és Ada fordító, elsősorban Linux és BSD – tehát POSIX – rendszerekre. Létezik Windowsra kiadott binary is, viszont a beállítása elég szenvedős.

## Gyors setup Linuxon és MacOS-en, package managerek segítségével:

APT: 
```
sudo apt update
sudo apt install build-essential
```

Pacman:
```
sudo pacman -S base-devel
```

MacOS brew:
```
brew install gcc
```

## Hello World

Készítsünk valahol a fájlrendszerben egy új könyvtárat. `mkdir helloworld` `cd helloworld`
Majd létrehozunk egy `main.c` filet: `touch main.c`
Ezután ebbe a fileba illesszük be a következő kódot(pl. VIM, NeoVIM, VSCode segítségével):
```c
#include <stdio.h>

int main(void) {
	printf("Hello, World!\n");
	return 0;
}
```
Majd a `gcc main.c -o helloworld` paranccsal fordítjuk és buildeljük a programot, és a `./helloworld` paranccsal pedig elindítjuk.
Ha mindent jól csináltunk, a kimenetnek valami ilyesminek kell lennie:
![image](https://github.com/user-attachments/assets/9618017e-cbbf-4788-930e-54197fb5d835)
