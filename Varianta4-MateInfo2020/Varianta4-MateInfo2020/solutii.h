#pragma once
#include "functii.h"


/*1. Două numere a și b sunt numite generatoare ale unui număr natural n dacă a∙b+[a/b]=n, unde s-a notat
cu [c] partea întreagă a numărului real c.
Subprogramul generatoare are un singur parametru, n, prin care primește un număr natural
(n[2,109]). Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea
că sunt generatoare ale lui n și că primul număr din pereche este par. Numerele din fiecare pereche sunt
separate prin simbolul minus (-), iar perechile sunt separate prin câte un spațiu. Dacă nu există astfel de
perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2020 se afișează pe ecran
2-1010 4-505 10-202 20-101 96-21 200-10 606-3 808-2 1010-1 (10p.)*/
void solutia1() {
	generatoare(2020);
}

/*
2. Într-un tablou bidimensional, cu elemente având valori numai în mulţimea {0,1}, numim coloane
„complementare” două coloane cu proprietatea că oricare două elemente ale acestora, aflate pe
aceeaşi linie, sunt diferite.
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din
intervalul [2,20], m şi n, şi elementele unui tablou bidimensional cu m linii şi n
coloane, numere naturale din mulţimea {0,1}. Programul afişează pe ecran numărul
de coloane ale tabloului care sunt „complementare" cu prima coloană a acestuia.
Exemplu: dacă m=3, n=6, pentru tabloul alăturat se afişează pe ecran 3. (10p.)
1 1 0 0 1 0
0 1 1 1 1 1
1 0 0 0 1 0*/
void solutia2() {

	int m = 3, n = 6, a[100][100] = {
		{1, 1 ,0 ,0 ,1 ,0},
		{0, 1 ,1 ,1 ,1 ,1},
		{1, 0 ,0 ,0 ,1, 0}
	};

	generare(m,n,a);
}

/*
3. Fişierul bac.txt conţine, în ordine descrescătoare, cel puţin două şi cel mult 106 numere naturale
din intervalul [0,109], separate prin câte un spaţiu. Se cere să se afişeze pe ecran, în ordine strict
descrescătoare, separate prin câte un spaţiu, numai numerele care apar în fişier de exact două ori.
Dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 100 50 50 50 49 49 36 16 16 12 10 10 9 7 7
pe ecran se afişează, în această ordine, numerele 49 16 10 7
*/
void solutia3() {

	afisare();

}