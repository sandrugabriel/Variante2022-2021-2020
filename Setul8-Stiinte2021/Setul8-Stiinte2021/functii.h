#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Se citește un număr natural, n (n≥2), și se cere să se scrie numărul din intervalul închis [2,n] care are cei mai
mulți factori primi. Dacă există mai multe numere cu această proprietate, se scrie cel mai mare dintre ele.
Scrieți, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă n=100, se scrie 90. (10p.)*/
int fact(int n) {
	int m = 0;
	int x = 0, d = 0, p = 0, k = 0, maxi = 0;

	maxi = 0;
	for (int i = 2; i <= n; i++) {
		x = i;
		k = 0;
		d = 2;
		while (x > 1)
		{
			p = 0;
			while (x % d == 1)
			{
				p++;
				x = x / d;
			}

			if (p != 0) k++;

			d++;
		}

		if (k >= maxi) {
			m = i;
			maxi = k;
		}
	}

	return n;
}


/*
2. Scrieți un program C/C++ care citește de la tastatură numărul natural n (n[5,50]), cele n elemente
ale unui tablou unidimensional, numere naturale din intervalul [0,102], iar la final două numere
naturale din intervalul [1,n/2), x și y. Programul afișează pe ecran suma numerelor din zona
delimitată de primele x, respectiv de ultimele y elemente ale tabloului, ca în exemplu.
Exemplu: pentru n=9, tabloul (8,6,3,1,4,6,2,4,7), x=2 și y=3, se afișează pe ecran 14. (10p.)*/
int suma(int n, int v[100], int x, int y) {
	int s = 0;
	for (int i = x - 1; i < n-y-1; i++) {

		s += v[i];

	}

	return s;
}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,109].
Se cere să se determine și să se afișeze pe ecran ultimul număr impar din șirul aflat în fișier, sau
mesajul nu exista, dacă nu există un astfel de număr. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 122 1635 628 1413 1647 900 3001 4252
se afișează pe ecran 3001*/
void afisare() {



	ifstream f("bac.txt");

	int b = 0, x;

	while (f >> x)
	{
		if (x % 2 != 0)
				if (b == 0)
					b = x;
				else {
					b = x;
				}
	}
	if (b == 0) cout << "Nu exista";
	else cout << b;




}

