# Visual Studio
A Visual Studio a Microsoft fejlesztőkörnyezete, beépített devkitekkel, debuggerrel, profilerrel és egyéb finom dolgokkal. Works out of the box, nem bonyolult a setup. Hátránya, hogy Windows rendszeren kívül nem 
létezik a Windowson használható verziója.

## Ajánlott platformok

Windows

## VS Community Edition

A Visual Studio Community Edition teljesen ingyenesen letölthető a <https://visualstudio.microsoft.com/free-developer-offers/> linkről. Fontos, hogy a bal oldali, "Visual Studio Community" opciót válasszuk,
a Visual Studio Code egy teljesen más szoftver.

## VS Enterprise Edition

Egyetemistaként elérhető ingyenes licensz a Visual Studio Enterprise verziójához. Ehhez először, ha még nem tetted meg, a <https://login.bme.hu/admin/username/> oldalon kell beállíts egy Office 365 emailt.
Ebbe az emailbe egyébként Outlook-on keresztül egyszerűen be tudsz lépni. Ezután a <https://azureforeducation.microsoft.com/devtools> oldalon ezzel a fiókkal belépve tudod a VS és más hasznos(pl. Windows) 
aktiváló kulcsokat elérni.

## Telepítés

A Visual Studio Installer program központosítva tud VS verziókat telepíteni és módosítnai. Ezt megnyitva, ha az "Installed" fülön még nincs ott a kívánt verzió(Visual Studio 2022), akkor ezt az "Available" fülről lehet telepíteni.<br>
A felugró ablakból a tárgyhoz a "Desktop Development with C++" Workload-ra lesz csak szükség. Emellett az "Individual components" fülről ajánlott még a "C++ AddressSanitizer" komponens.<br>
<img src="https://github.com/user-attachments/assets/b5a547ff-9a37-4396-9429-590e833325fd" width="300"> <br>
<img src="https://github.com/user-attachments/assets/d873966e-12fa-4b04-b832-a22cf5cb9a49" width="300"> <br>



## Projekt létrehozása

Visual Studioban a fő struktúra a következő: A root egy "solution" amiben több project is lehet. Ez teszi lehetővé azt, hogy komplex programokat akár részenként is használhassunk.<br>
Új projekt létrehozásához indítsuk el a Visual Studiot, majd kattintsunk a "Create a new project" gombra.<br>
Ezután válasszuk az alábbi opciót:<br>
<img src="https://github.com/user-attachments/assets/b9c73e42-fe1f-4f01-a725-49dbc7fba1b0" width="300"> <br>
Ezután adunk egy nevet a projectnek, kiválasztjuk hogy hova kerüljön(egyetem mappa, stb.), valamint, ha nem szeretnénk hogy a project és a solution ugyanabban a mappában legyen(nagyobb projekteknél nem ajánlott), akkor adunk egy külö nevet a solutionnek is. 

## Visual Studio használata C programozáshoz

Az első lépés a Solution Explorer előkeresése. Ha nem találod a Solution Explorert, a "View" menüből előszedheted. A projektünk kinyitása után a "Source Files" -ra jobbkattintás után: Add->New Item->C++ File->Nevezzük `main.c` -nek.

A Visual Studio eredetileg egy C++ IDE, ahhoz, hogy C kódként forduljon a programunk, ahhoz ezt külön be kell állítanunk. Ehhez a Solution Explorerben a projektünkre jobbklikk->Properties. <br>
<img src="https://github.com/user-attachments/assets/755c1144-6319-4626-a2c0-e9477436fd67" height="300"><br>
Ezután a C/C++->All Options->keresésben "Compile As"-> Compile as C Code<br>
![image](https://github.com/user-attachments/assets/fd83e381-6c52-4175-b514-c2de2da1bf95)<br>
Ha ez kész, akkor leokézhatjuk az ablakot.

## scanf, sscanf, stb

A Visual Studio default compilere (MSVC) definiál a scanf és társai függvényeknek ún. "safe" verziókat, és az eredeti függvények használatát letiltja. Ezt a `_CRT_SECURE_NO_WARNINGS` makró definiálásával kapcsolhatjuk ki. Ehhez a Project properties>C/C++>Preprocessor>Preprocessor Definitions -nél a listába a `_CRT_SECURE_NO_WARNINGS` -ot illesszük be (a lista `;` -el választja el az elemeket)
![image](https://github.com/user-attachments/assets/40cb0985-7e2f-4477-800d-76bf01010c88)


## Hello World!

A `main.c` fileba az alábbi kódrészletet illesztve:
```c
#include <stdio.h>

int main(void) {
	printf("Hello, World!");
	return 0;
}
```

Majd az `F5` billenytűt leütve letesztelhetjük, hogy műküdik -e a setupunk.<br>
![image](https://github.com/user-attachments/assets/9a4b20d2-3ff3-46d6-8a4b-2652e25324bc)




