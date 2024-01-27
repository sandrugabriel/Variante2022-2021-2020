#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*1. Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n[2,109]).
Subprogramul returnează suma divizorilor primi ai lui n. Scrieți definiția completă a subprogramului.
Exemplu: pentru n=12 subprogramul returnează 5 (divizorii primi ai lui 12 sunt 2 și 3). (10p.)*/
int suma(int n) {

	int s, d, p;

	s = 0, d = 2;

	while (n!=1)
	{
		p = 0;
		while (n%d==0)
		{
			p++;
			n /= 10;
		}
		if (p != 0) s += d;

		d++;
	}
	
	return s;
}

/*
2. Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[1,n]) și
n∙n numere din intervalul [0,109], elemente ale unui tablou bidimensional cu n linii și n coloane,
numerotate începând de la 1. Programul transformă tabloul în memorie, deplasând circular spre stânga,
cu câte o poziție, toate elementele situate pe linia k, în stânga diagonalei principale, ca în exemplu.
Elementele tabloului obținut sunt afișate pe ecran, fiecare linie pe câte o linie a ecranului, cu elementele
fiecărei linii separate prin câte un spațiu.
Exemplu: pentru n=6, k=4 și tabloul 
1 2 3 4 5 6
6 7 8 9 0 1
2 4 6 8 0 2
1 3 5 7 9 5
6 2 7 4 5 7
3 9 4 8 5 7
se obține tabloul 1 2 3 4 5 6
6 7 8 9 0 1
2 4 6 8 0 2
3 5 1 7 9 5
6 2 7 4 5 7
3 9 4 8 5 7
(10p.)*/
void interschimbare(int n,int k,int a[100][100]) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}



	int x = a[k][1];

	for (int j = 1; j < k - 2; j++)
		a[k][j] = a[k][j + 1];
	a[k][k - 1] = x;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

/*
3. Fișierul bac.in conține un șir de cel mult 106 numere naturale din intervalul [0,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran pozițiile din șir pe care se află termeni precedați de un
număr maxim de valori care au cifra unităților egală cu cifra unităților lor. Numerele afișate sunt separate
prin câte un spațiu. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul bac.in conține numerele 112 12 5 25 88 15 2 19 32 179 35 621
pe ecran se afișează numerele de mai jos (termenii 32, respectiv 35 respectă proprietatea cerută):
9 11*/
	
void afisare() {

	ifstream f("bac.in");

	int x, k=0, maxi=-1;
struct {
		int nrcit, apcf;
}v[10]{};

	while (f>>x)
	{
		k++;
		v[x % 10].apcf++;
		v[x % 10].nrcit = k;
		if (maxi < v[x % 10].apcf)
			maxi = v[x % 10].apcf;
	}

	for (int i = 0; i <= 9; i++) {
		if (maxi == v[i].apcf)
			cout<<v[i].nrcit << " ";
	}

	f.close();
}