#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Se citesc două numere naturale, n și c (c9), și se cere să se scrie numărul obținut din n, prin eliminarea
din acesta a tuturor cifrelor egale cu c, sau -1 dacă toate cifrele lui n sunt egale cu c. Cifrele nule
nesemnificative sunt ignorate, ca în exemplu.
Scrieți, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă n=50752 sau n=72 și c=5 se scrie 72, dacă n=500 și c=5 se scrie 0, iar dacă n=55 și
c=5 se scrie -1. (10p.)*/
void numar(int n, int c, int& m) {

	int p = 1;
	m = 0;

	while (n != 0)
	{
		if (n % 10 != c) {
			m = (n % 10) * p + m;
			p *= 10;
		}
		n /= 10;


	}
	if (m == 0) m = 1;

}
/*
2. Scrieți un program C/C++ care citește de la tastatură două numere naturale, n și k (n∈[3,20],
k∈[2,n)), și construiește în memorie un tablou unidimensional cu n elemente, având proprietățile:
• al k-lea element are valoarea 0;
• tabloul conține, începând cu prima poziție, până la al k-lea element inclusiv, de la stânga la dreapta,
un șir strict descrescător de numere consecutive, iar începând cu al k-lea element, până la ultima
poziție, de la stânga la dreapta, un șir strict crescător de numere consecutive.
Programul afișează pe ecran elementele tabloului construit, separate prin câte un spațiu.
Exemplu: dacă n=10 și k=3 se obține tabloul (2,1,0,1,2,3,4,5,6,7). (10p.)*/
void geneare(int n , int k) {
	int a[100]{};
	int aux = k, ct = 0;
	for (int i = 0; i < n; i++) {
		if (k - 1 > i) {
			aux--;
			a[i] = aux;
		}
		else if (i == k - 1) a[i] = 0;
		else
		{
			ct++;
			a[i] = ct;
		}
	}


	for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
	}

}


/*
3. Fișierul bac.in conține un șir de cel puțin trei și cel mult 105 numere întregi nenule din intervalul
[-109,109], dintre care două sunt negative, iar restul pozitive. Numerele sunt separate prin câte un
spațiu. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar lungimea secvenței
este egală cu numărul de termeni ai acesteia.
Se cere să se afișeze pe ecran lungimea unei secvențe din șirul aflat în fișier care conține o singură
valoare negativă și un număr maxim de valori pozitive. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 15 21 -61 9 870 -23 11 5 8
pe ecran se afișează 6 (corespunzător secvenței 9 870 -23 11 5 8).
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia*/
void afisare() {

	ifstream f("bac.in");

	int n = 0, x = 0, a = 0, b = 0, c = 0, p1 = 0, p2 = 0, p3 = 0;

	while (f >> x)
	{
		n++;
		if (x < 0)
			if (p1 == 0)
				p1 = n;
			else
				if (p2 == 0) p2 = n;
				else p3 = n;
	}

	a = p2 - 1;
	b = p3 - p1 - 1;
	c = n - p2;

	if (a > b && a > c) cout << a;
	else if (b > a && b > c) cout << b;
	else cout << c;
	f.close();

}

