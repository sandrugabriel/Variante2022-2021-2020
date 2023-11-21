﻿#pragma once
#include "functii.h"

/*1. Subprogramul identice are un singur parametru, n, prin care primește un număr natural (n[10,109]).
Subprogramul returnează valoarea 1, dacă numărul n are toate cifrele egale, sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2222, subprogramul returnează valoarea 1, iar dacă n=212, subprogramul
returnează valoarea 0. (10p.)*/
void solutia1() {

	cout << identice(222);

}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,102], m și n, şi
construieşte în memorie un tablou bidimensional cu m linii şi n coloane, numerotate începând cu 1, astfel
încât elementul de pe linia i şi coloana j primeşte ca valoare ultima cifră a produsului ij.
Programul afişează pe ecran elementele tabloului obținut, linie cu linie, fiecare linie a tabloului
pe câte o linie a ecranului, cu valorile aflate pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: dacă m=4 și n=5 se afişează pe ecran tabloul alăturat. (10p.)
1 2 3 4 5
2 4 6 8 0
3 6 9 2 5
4 8 2 6 0*/
void solutia2() {

	generare(4,5);

}

/*
3. Fişierul bac.txt conține numere naturale din intervalul [2,106]: pe prima linie n, iar pe a doua linie
un șir de n numere, separate prin câte un spațiu.
Se cere să se afișeze pe ecran, pentru fiecare număr natural i (i[1,n]), cea mai mare dintre primele
i valori ale șirului aflat în fișier. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat, se afișează pe ecran
4 6 6 7 8 8 8 8 8 9 10 10
12
4 6 3 7 8 1 6 2 7 9 10 8
*/
void solutia3() {
	afisare();
}
