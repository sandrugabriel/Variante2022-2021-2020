﻿#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*1. Subprogramul factori are doi parametri, n și m, prin care primește câte un număr natural din intervalul
[1,109]. Subprogramul returnează numărul valorilor prime care apar la aceeași putere atât în
descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=16500 și m=10780, atunci subprogramul returnează 2 (16500=2235311,
10780=2257211). (10p.)
*/
int factori(int n, int m) {

	int p1, p2, d=2, k = 0;

	while (n!=1 && m!=1)
	{
		p1 = 0;
		while (n%d==0)
		{
			p1++;
			n /= d;
		}

		p2 = 0;
		while (m%d==0)
		{
			p2++;
			m /= d;
		}

		if (p1 == p2 && p1 != 0) {
			k++;
		}
		d++;
	}

	return k;
}
 
/*
2. Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[2,20]), și construiește
în memorie un tablou bidimensional cu n linii și n coloane, astfel încât fiecare linie a sa are proprietățile:
• elementul situat pe diagonala secundară are valoarea n;
• începând de la diagonala secundară, spre stânga, elementele formează un șir strict descrescător de
numere consecutive, iar începând de la diagonala secundară, spre dreapta, elementele formează tot
un șir strict descrescător de numere consecutive.
Programul afișează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu elementele aflate pe aceeași linie separate prin câte un spațiu.
Exemplu: dacă n=5 se afișează pe ecran tabloul alăturat. (10p.)
1 2 3 4 5
2 3 4 5 4
3 4 5 4 3
4 5 4 3 2
5 4 3 2 1
*/
void generare(int n, int a[100][100]) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i + j <= n + 1) {
				a[i][j] = i + j - 1;
			}
			else {
				a[i][j] = a[i][j - 1] - 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

/*
3. Fișierul bac.in conține un șir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spațiu. Cel puțin un număr din șir este pozitiv.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe a șirului care fie începe, fie se încheie
cu un număr pozitiv. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar lungimea
secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele -15 -7 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20
pe ecran se afișează 11 (corespunzător secvenței 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20).
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.*/
void poziti() {

	int n=0, x, p1=0, p2=0;

	ifstream f("bac.in");

	while (f>>x)
	{
		n++;
		if (x > 0 && p1 == 0)
			p1 = n;
		else if (x > 0) p2 = n;
	}

	if (p2 != 0) {
		if (n - p1 + 1 > p2) {
			cout << n - p1 + 1;
		}
		else {
			cout << p2;
		}
	}

	if (p2 == 0) {
		if (p1 > n / 2)
			cout << p1;

		else {
			cout << n - p1 + 1;
		}
	}
}