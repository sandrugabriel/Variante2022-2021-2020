#pragma once
#include "functii.h"

/*Două numere se numesc oglindite dacă fiecare se obține din celălalt, prin parcurgerea cifrelor acestuia
de la dreapta la stânga. Două numere se numesc impar-oglindite dacă numerele obținute din acestea,
prin îndepărtarea tuturor cifrelor lor pare, sunt oglindite.
Subprogramul imog are trei parametri:
• x și y, prin care primește câte un număr natural din intervalul [0,109];
• rez, prin care furnizează valoarea 1 dacă x și y sunt impar-oglindite sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=523 și y=84356, după apel rez=1,
iar dacă x=523 și y=84536 sau x=523 și y=84576 sau x=40 și y=86, după apel rez=0. (10p.)*/
void solutia1() {
	int rez=1;
	imop(523, 84536, rez);
	cout << rez;
}

/*
2. Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[2,n]) și n∙n
numere din intervalul [0,109], elemente ale unui tablou bidimensional cu n linii și n coloane. Programul
transformă tabloul în memorie, interschimbând șirul elementelor situate pe linia a k-a, în stânga diagonalei
principale, parcurse de la stânga la dreapta, cu șirul elementelor situate pe coloana a k-a, deasupra
diagonalei principale, parcurse de sus în jos, ca în exemplu. Elementele tabloului obținut sunt afișate pe
ecran, fiecare linie pe câte o linie a ecranului, cu elementele fiecărei linii separate prin câte un spațiu.
Exemplu: pentru n=5,
k=4 și tabloul
2 4 3 5 6
8 0 9 8 7
2 6 9 0 5
6 1 3 6 9
7 3 9 4 2
se obține tabloul 
2 4 3 6 6
8 0 9 1 7
2 6 9 3 5
5 8 0 6 9
7 3 9 4 2 (10p.)*/
void solutia2() {

	int a[100][100] = {
		{2, 4, 3 ,5 ,6},
		{8 ,0, 9 ,8 ,7 },
		{2, 6, 9, 0 ,5 },
		{6 ,1, 3, 6 ,9 },
		{7, 3, 9, 4, 2 }
	};
	int n = 5, k = 4;

	generare(n, k, a);

}

/*
3. Se consideră șirul 1, 3, 7, 13, 21, 31, 43 ... definit astfel: f0=1, iar fn=fn-1+2n, dacă n≥1 (unde n
este un număr natural).
Se citesc de la tastatură două numere naturale din intervalul [1,109], x și y (x<y), reprezentând doi
termeni aflați pe poziții consecutive în șirul dat, și se cere să se scrie în fișierul text bac.out, separați
prin câte un spațiu, toți termenii șirului mai mici sau egali cu y, în ordine inversă a apariției lor în șir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie și al timpului de executare.
Exemplu: dacă x=21 și y=31, fişierul conţine valorile
31 21 13 7 3 1
*/
void solutia3() {
	afisare(21, 31);
}

