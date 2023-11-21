#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*1. Subprogramul numar are trei parametri:
• n și c, prin care primește câte un număr natural (n[0,109], c[0,9]);
• m, prin care furnizează numărul obținut din n, prin eliminarea din acesta a tuturor cifrelor egale cu c, sau
-1 dacă toate cifrele lui n sunt egale cu c. Cifrele nule nesemnificative sunt ignorate, ca în exemplu.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=50752 sau n=72 și c=5, după apel m=72, dacă n=500 și c=5, după apel m=0, iar
dacă n=55 și c=5, după apel m=-1. (10p.)*/
void numar(int n, int c, int&m) {

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
2. Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[3,20]), și construiește
în memorie un tablou bidimensional cu n linii și n coloane, având proprietățile:
• toate elementele situate pe diagonala secundară sunt nule;
• prima linie conține un șir strict descrescător de numere consecutive, iar ultima linie conține un șir strict
crescător de numere consecutive;
• fiecare dintre celelalte linii conține, începând cu prima poziție, până la diagonala secundară inclusiv, de la
stânga la dreapta, un șir strict descrescător de numere consecutive, iar începând de la diagonala secundară,
inclusiv, până la ultima poziție, de la stânga la dreapta, un șir strict crescător de numere consecutive.
Programul afișează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu elementele aflate pe aceeași linie separate prin câte un spațiu.
Exemplu: dacă n=4 se afișează pe ecran tabloul alăturat. (10p.)
3 2 1 0
2 1 0 1
1 0 1 2
0 1 2 3*/
void geneare(int n) {
	int a[100][100]{};
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i + j <= n + 1)
				a[i][j] = n + 1 - i - j;
			else
				a[i][j] = a[i][j - 1] + 1;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

}

/*
3. Fișierul bac.in conține un șir de cel puțin patru și cel mult 105 numere întregi nenule din intervalul
[-109,109], dintre care trei sunt negative, iar restul pozitive. Numerele sunt separate prin câte un
spațiu. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar lungimea secvenței
este egală cu numărul de termeni ai acesteia.
Se cere să se afișeze pe ecran lungimea unei secvențe din șirul aflat în fișier care conține o singură
valoare negativă și un număr maxim de valori pozitive. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 15 21 -61 9 870 -23 11 5 8 -81 5 14
pe ecran se afișează 6 (corespunzător secvențelor 9 870 -23 11 5 8 sau 11 5 8 -81 5 14).*/
void afisare() {

	ifstream f("bac.in");

	int n=0, x=0, a=0, b=0, c=0, p1=0, p2=0, p3=0;

	while (f>>x)
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


