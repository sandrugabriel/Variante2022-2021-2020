#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul putere are doi parametri, n și p, prin care primește câte un număr natural (n[2,109],
p[0,109]). Subprogramul returnează puterea la care apare numărul p în descompunerea în factori
primi a lui n, dacă p este număr prim, sau valoarea -1 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=80 și p=2, subprogramul returnează numărul 4 (80=245). (10p.)*/
int putere(int n, int p) {

	int d = 2, k = 0;

	while (n != 1)
	{
		k = 0;
		while (n % d == 0)
		{
			k++;
			n /= d;
		}

		if (k != 0 && d == p) return k;
		else
		{
			d++;
		}
	}

	return -1;
}

/*
2. O valoare k polarizează un șir dacă există doi termeni ai șirului care au acea valoare, unul fiind în prima
jumătate a șirului, iar celălalt în a doua jumătate a șirului.
Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [1,20]: n și un șir
de 2∙n numere, elemente ale unui tablou unidimensional, cu proprietatea că atât primele n, cât și
ultimele n sunt distincte. Programul afișează pe ecran valorile care pot polariza șirul citit.
Valorile sunt afișate într-o ordine oarecare, separate prin câte un spațiu, iar dacă nu există astfel de
valori se afișează pe ecran mesajul nepolarizat.
Exemplu: pentru n=4 și tabloul (3,2,6,5,5,1,6,8) se afișează pe ecran, nu neapărat în această
ordine, numerele 5 6 */
void pasteurizat(int v[100], int n) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n; j < n*2; j++) {
			if (v[i] == v[j]) {
				k++;
				cout << v[i] << " ";
			}
		}
	}

	if (k == 0) cout << "nepolarizat";
}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma minimă obținută adunând numere de pe poziții
consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile -4 6 -7 -2 1 -4 10 3 -9 -12 2
se afișează pe ecran numărul -19
*/
void afisare() {

	ifstream f("bac.txt");
	int x = 0, s = 0, smin = 0;
	f >> x;
	s = x;
	smin = x;

	while (f >> x)
	{
		if (s + x < x && s + x < smin)
			s += x;
		else
			if (s < smin) {
				smin = s;
				s = x;
			}
			else s = x;
	}

	if (s < smin) smin = s;

	cout << s;


}
