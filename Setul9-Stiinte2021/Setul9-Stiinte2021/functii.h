﻿#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Se citesc numerele naturale a, b și k (ab, k[1,9]) și se cere să se scrie numărul de valori naturale
din intervalul [a,b] care sunt divizibile cu k și au ultima cifră egală cu k. Scrieți, în pseudocod,
algoritmul de rezolvare a problemei enunțate.
Exemplu: pentru a=3, b=50 și k=4 se scrie valoarea 3 (pentru numerele 4, 24, 44). (10p.)*/
void divizor(int a, int b, int k, int& nr) {

	nr = 0;

	for (int i = a; i <= b; i++)
		if (i % k == 0 && i % 10 == k) nr++;

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
void afisarePare(int n, int v[100]) {

	for (int i = 0; i < n; i++) {
		int aux = v[i];
		int ct = 0;
		int a1 = -1;
		int semn = 0;
		while (aux!=NULL)
		{
			if (aux % 10 % 2 == 0) {
				if (a1 != -1) {
					if (a1 != aux % 10) {
						ct++;
					}

				}else 
				a1 = aux % 10;
			}

			aux /= 10;
		}

		if (ct == 0) {
			cout << v[i] << endl;
		}
	}


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
void afisare() {

	ifstream fin("numere.txt");

	int x, v[11] = { 0 };
	while (fin >> x)
	{
		do
		{
			int c = x % 10;
			v[c]++;
			x /= 10;
		} while (x);
	}
	for (int i = 9; i >= 0; i--)
	{
		while (v[i])
		{
			cout << i;
			v[i]--;
		}
	}

}

