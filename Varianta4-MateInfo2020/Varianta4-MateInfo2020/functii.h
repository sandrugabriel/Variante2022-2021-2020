#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Două numere a și b sunt numite generatoare ale unui număr natural n dacă a∙b+[a/b]=n, unde s-a notat
cu [c] partea întreagă a numărului real c.
Subprogramul generatoare are un singur parametru, n, prin care primește un număr natural
(n[2,109]). Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea
că sunt generatoare ale lui n și că primul număr din pereche este par. Numerele din fiecare pereche sunt
separate prin simbolul minus (-), iar perechile sunt separate prin câte un spațiu. Dacă nu există astfel de
perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2020 se afișează pe ecran
2-1010 4-505 10-202 20-101 96-21 200-10 606-3 808-2 1010-1 (10p.)*/
void generatoare(int n) {
	int a, b,k = 0;

	for (int a = 2; a <= n / 2; a += 2) {
		for (int b = 1; b <= n; b++) {
			if (a != b && a * b + a / b == n) {
				k++;
				cout << a << "-" << b << " ";
			}
		}
	}

	if (k == 0) cout << "nu exista";
}

/*
2. Într-un tablou bidimensional, cu elemente având valori numai în mulţimea {0,1}, numim coloane
„complementare” două coloane cu proprietatea că oricare două elemente ale acestora, aflate pe
aceeaşi linie, sunt diferite.
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din
intervalul [2,20], m şi n, şi elementele unui tablou bidimensional cu m linii şi n
coloane, numere naturale din mulţimea {0,1}. Programul afişează pe ecran numărul
de coloane ale tabloului care sunt „complementare" cu prima coloană a acestuia.
Exemplu: dacă m=3, n=6, pentru tabloul alăturat se afişează pe ecran 3. (10p.)
1 1 0 0 1 0
0 1 1 1 1 1
1 0 0 0 1 0*/
void generare(int m, int n, int a[100][100]) {
	int ok = 0,ct=0;
	for (int j = 1; j < n; j++) {
		ok = 1;
		for (int i = 0; i < m; i++) {
			if (a[i][j] == a[i][0])ok = 0;
		}
		if (ok == 1) ct++;
	}

	cout << ct++;
}

/*
3. Fişierul bac.txt conţine, în ordine descrescătoare, cel puţin două şi cel mult 106 numere naturale
din intervalul [0,109], separate prin câte un spaţiu. Se cere să se afişeze pe ecran, în ordine strict
descrescătoare, separate prin câte un spaţiu, numai numerele care apar în fişier de exact două ori.
Dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 100 50 50 50 49 49 36 16 16 12 10 10 9 7 7
pe ecran se afişează, în această ordine, numerele 49 16 10 7
*/
void afisare() {

	ifstream f("bac.txt");

	int k = 0, ok = 0;
	int x = 0, y = 0;

	f >> x;
	k = 1;

	while (f >> y)
	{
		if (x == y) k++;

		else if (k == 2) {
			ok = 1;
			cout << x << " ";
			k = 1;
		}
		else

			k = 1;
		x = y;
	}
	if (k == 2)
		cout << x;
}