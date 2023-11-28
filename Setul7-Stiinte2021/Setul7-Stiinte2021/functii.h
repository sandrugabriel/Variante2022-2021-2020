#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul afisare are trei parametri:
• x și y, prin care primește câte un număr natural din intervalul [0,106] (xy);
• k, prin care primește un număr natural (k[2,102]).
Subprogramul afișează pe ecran, în ordine strict crescătoare, numerele din intervalul [x,y], în secvențe de
câte k, cu excepția ultimei secvențe care poate conține mai puțin de k numere. Fiecare secvență se încheie
cu câte un simbol *, iar numerele și simbolurile sunt separate prin câte un spațiu, ca în exemplu.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=11, y=21 și k=4 se afișează pe ecran numerele de mai jos, în acest format.
11 12 13 14 * 15 16 17 18 * 19 20 21 * (10p.)*/
void afisare(int x, int y, int k) {

	int c = 0;

	for (int i = x; i <= y; i++) {
		c++;
		if (c % k != 0)
			cout << i << " ";
		else cout << i << " *";
	}

	if (c % k != 0) cout << "*";

}

/*
Scrieți un program C/C++ care citește de la tastatură numărul natural n (n[5,50]), cele n elemente
ale unui tablou unidimensional, numere naturale din intervalul [0,102], iar la final două numere
naturale din intervalul [1,n/2), x și y. Programul afișează pe ecran suma numerelor din zona
delimitată de primele x, respectiv de ultimele y elemente ale tabloului, ca în exemplu.
Exemplu: pentru n=9, tabloul (8,6,3,1,4,6,2,4,7), x=2 și y=3, se afișează pe ecran 14. (*/
int sum(int n, int v[100], int x, int y) {
	int s = 0;
	for (int i = x - 1; i < n - y - 1; i++) {
		s += v[i];
	}

	return s;
}

/*
3. Fișierul bac.txt conține cel mult 106 cifre, separate prin câte un spațiu.
Se cere să se afișeze pe ecran, separate prin câte un spațiu, toate cifrele pare care apar în fișier sau
mesajul nu exista, dacă nu există astfel de cifre. Proiectați un algoritm eficient din punctul de vedere
al timpului de executare.
Exemplu: dacă fișierul conține cifrele 3 3 0 8 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3
pe ecran se afișează, de exemplu în ordine crescătoare, cifrele 0 0 2 2 2 2 8
*/
void sub3() {

	ifstream f("bac.txt");

	int v[10]{}, x;
	int ok = 0;
	while (f >> x)
	{
		v[x]++;
	}

	for (int i = 0; i <= 8; i += 2)
		if (v[i] != 0) {
			for (int j = 1; j <= v[i]; j++)
				cout << i << " ";
			ok = 1;
		}

	f.close();

	if (ok == 0) cout << "nu exista";

}



