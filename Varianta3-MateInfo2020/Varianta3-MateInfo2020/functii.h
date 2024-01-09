#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul factori are doi parametri, n şi m, prin care primește câte un număr natural din intervalul
[1,109]. Subprogramul returnează numărul valorilor prime care se regăsesc atât în descompunerea în
factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=750 şi m=490, atunci subprogramul returnează 2 (750=2353, 490=2572). (10p.)*/
int factori(int n, int m) {

	int nr = 0, d = 2;

	while (n!=1 && m!=1)
	{
		while (n%d ==0 && m%d==0)
		{
			nr++;
			n /= d;
			m /= d;

		}
		while (n%d==0)
		{
			n /= d;
		}
		while (m%d==0)
		{
			m /= d;
		}

	d++;
	}

	return nr;
}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n∈[2,20]), şi construieşte
în memorie un tablou bidimensional cu n linii şi n coloane, având proprietăţile:
• toate elementele situate pe diagonala secundară sunt nule;
• fiecare linie conţine, începând cu diagonala secundară, de la dreapta la stânga, un şir strict crescător
de numere consecutive, iar începând cu diagonala secundară, de la stânga la dreapta, tot un şir strict
crescător de numere consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu elementele aflate pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: dacă n=5 se afişează pe ecran tabloul alăturat. (10p.)
4 3 2 1 0
3 2 1 0 1
2 1 0 1 2
1 0 1 2 3
0 1 2 3 4*/
void generare(int n) {

	int x = n - 1;
	int a[100][100]{};
	for (int i = 1; i <= n; i++) {
		a[i][1] = x;
		for (int j = 2; j <= n; j++) {
			if (i + j == n + 1)
				a[i][j] = 0;
			else if (i + j < n + 1)
				a[i][j] = a[i][j - 1] - 1;
			else a[i][j] = a[i][j - 1] + 1;
		}
		x = x - 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

}

/*
3. Fişierul bac.in conţine un şir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spaţiu. Cel puţin un număr din șir este negativ.
Se cere să se afişeze pe ecran lungimea maximă a unei secvenţe a şirului care fie începe, fie se încheie
cu un număr negativ. O secvenţă este formată din termeni aflaţi pe poziţii consecutive în şir, iar
lungimea secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 12 25 -6 7 80 -75 101 -6 52 -124 87 99 210
pe ecran se afişează 11 (corespunzător secvenţei -6 7 80 -75 101 -6 52 -124 87 99 210).*/
void afisare() {

	int x = 0;
	int p1 = 0, p2 = 0, nr = 0, ok = 0;

	ifstream f("bac.in");

	while (f>>x)
	{
		nr++;
		if (x < 0 && ok == 0) {
			p1 = nr; ok = 1;
		}
		else if (x < 0 && ok == 1) {
			p2 = nr;
		}
	}

	if (nr - p1 + 1 > p2) cout << nr - p1 + 1;
	else cout << p2;

}
