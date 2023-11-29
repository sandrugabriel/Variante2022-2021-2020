#pragma once
#include "functii.h"

/*1. Se citesc numerele naturale a, b și k (ab, k[1,9]) și se cere să se scrie numărul de valori naturale
din intervalul [a,b] care sunt divizibile cu k și au ultima cifră egală cu k. Scrieți, în pseudocod,
algoritmul de rezolvare a problemei enunțate.
Exemplu: pentru a=3, b=50 și k=4 se scrie valoarea 3 (pentru numerele 4, 24, 44). (10p.)*/
void solutia1() {
	int nr;
	divizor(3, 50, 4, nr);
	cout << nr;
}

/*
2. Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n[1,102]), apoi un șir de
n numere naturale din intervalul [0,109], elemente ale unui tablou unidimensional. Programul afișează
pe ecran, pe linii separate, toate numerele din șirul citit care conțin o singură cifră pară distinctă, ca în
exemplu. Dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=6 și tabloul (20,1503705,122,12030,105,1234222)
se afișează pe ecran, nu neapărat în această ordine, numerele alăturate. (10p.)
1503705
122
105*/
void solutia2() {

	int n=6, v[100] = { 20,1503705,122,12030,105,1234222 };
	afisarePare(n,v);
}

/*
3. Fișierul numere.txt conține cel mult 105 numere naturale din intervalul [1,109], câte unul pe fiecare
linie. Se cere să se afișeze pe ecran cel mai mare număr care se poate forma cu toate cifrele care apar
în numerele din fișier, ca în exemplu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat
263
39628
79
887308
, se afișează
9988887766333220
*/
void solutia3() {
	afisare();
}
