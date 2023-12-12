#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Un număr y este numit frate mai mare al unui număr x dacă x și y au același număr de cifre și fiecare cifră
a lui y se poate obține din cifra aflată pe aceeași poziție în x adunând la aceasta valoarea 1.
Subprogramul frate are doi parametri:
• x, prin care primește un număr natural (x[0,109]);
• y, prin care furnizează fratele mai mare al lui x, sau -1, dacă nu se poate obține un astfel de număr.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=1027, după apel y=2138, iar dacă x=9027, după apel y=-1. (10p.)*/
void frate(int x, int &y) {

	int p = 1;

	y = 0;

	while (x!=0 && y!=-1)
	{
		if (x % 10 < 9) {
			y = (x % 10 + 1) * p + y;
			p *= 10;
		}
		else y = -1;
		x /= 10;
	}

}

/*
2. Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[1,n]) și n∙n
numere din intervalul [0,109], elemente ale unui tablou bidimensional cu n linii și n coloane. Programul
transformă tabloul în memorie, deplasând circular spre dreapta, cu câte o poziție, toate elementele situate pe
linia a k-a, în stânga diagonalei secundare, ca în exemplu. Elementele tabloului obținut sunt afișate pe ecran,
fiecare linie pe câte o linie a ecranului, cu elementele fiecărei linii separate prin câte un spațiu.
Exemplu: pentru n=5, k=2 și tabloul 2 3 4 5 6
2 4 6 8 0
7 8 9 0 1
3 5 7 9 1
7 3 8 5 6
se obține tabloul 2 3 4 5 6
6 2 4 8 0
7 8 9 0 1
3 5 7 9 1
7 3 8 5 6 (10p.)*/
void generare(int n, int k, int a[21][21]) {

	int x = a[k][n - k];

	for (int j = n - k; j >= 2; j--) {
		a[k][j] = a[k][j - 1];
	}
	a[k][1] = x;

	cout << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

/*
3. Fișierul bac.txt conține un șir de cel mult 105 numere naturale din intervalul [1,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran cea mai mare poziție pe care ar putea-o ocupa primul
termen al șirului aflat în fișier în șirul format cu aceleași valori, ordonat descrescător. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține numerele 15 7 15 17 6 4 21
se afișează pe ecran 4 (15 se află pe a treia și pe a patra poziție în șirul 21, 17, 15, 15, 7, 6, 4).*/
void afisare() {

	int x, y, k=1;

	ifstream f("bac.txt");

	f >> x;

	while (f>>y)
	{
		if (y >= x) k++;
	}

	cout << k;
}

