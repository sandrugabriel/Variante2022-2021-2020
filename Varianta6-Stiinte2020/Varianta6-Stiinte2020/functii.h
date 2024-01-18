#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul prodprim are doi parametri:
• n, prin care primește un număr natural (n[2,109]);
• p, prin care furnizează produsul divizorilor primi ai lui n.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2000, în urma apelului p=10, deoarece 2000=2453. (10p.)*/
void prodprim(int n, int& p) {

	int d = 2, k = 0;
	p = 1;
	while (n > 1)
	{
		k = 0;
		while (n % d == 0)
		{
			n /= d;
			k++;
		}

		if (k != 0) p *= d;
		d++;
	}
}

/*
2. Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]) și cele n
elemente ale unui tablou unidimensional, numere naturale din intervalul [1,109]. Elementele tabloului
sunt numerotate începând cu 1. Programul afișează pe ecran toate elementele tabloului cu proprietatea
că sunt strict mai mici decât valoarea cu care sunt numerotate. Numerele afișate sunt separate prin câte
un spațiu, iar dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista.
Exemplu: pentru n=8 și tabloul (2,2,1,9,4,16,4,3)
se afișează pe ecran, nu neapărat în această ordine, numerele 1 4 4 3*/
void strictMici(int v[100], int n) {
	
	int k = 1;

	for (int i = 0; i < n; i++) {
		if (v[i] < k) cout << v[i] << " ";
		k++;
	}

}


/*
3. Se citesc de la tastatură două numere naturale din intervalul [1,81], p1 și p2, și se cere scrierea în
fișierul bac.out a tuturor numerelor naturale cu exact 7 cifre, pentru care produsul primelor două cifre
este egal cu p1, cele trei cifre din mijloc sunt egale între ele, iar produsul ultimelor două cifre este egal
cu p2. Numerele apar în fișier în ordine strict descrescătoare, fiecare pe câte o linie. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă p1=12, iar p2=8, atunci 2633324 și 3400018 sunt două dintre cele 160 de numere cu
proprietatea cerută (2∙6=3∙4=12 și 2∙4=1∙8=8).*/
void afisare(int p1, int p2) {

	int c1 = 0, c2 = 0, c3 = 0, c6 = 0, c7 = 0, x = 0, y = 0, z = 0, nr = 0;
	ofstream f("bac.out");

	for (int c1 = 9; c1 >= 1; c1--) {
		for (int c2 = 9; c2 >= 1; c2--) {
			if (c1 * c2 == p1) {
				x = c1 * 10 + c2;
				for (int c3 = 9; c3 >= 0; c3--) {
					y = c3 * 100 + c3 * 10 + c3;
					for (int c6 = 9; c6 >= 1; c6--) {
						for (int c7 = 9; c7 >= 1; c7--) {
							if (c6 * c7 == p2) {
								z = c6 * 10 + c7;
								nr = x * 100000 + y * 100 + z;
								f << nr << endl;
							}
						}
					}
				}
			}
		}
	}

}
