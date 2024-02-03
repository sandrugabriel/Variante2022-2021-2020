#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



/*1. Subprogramul patrate are doi parametri, x și y, prin care primește câte un număr natural
(1≤x≤y≤109). Subprogramul afişează pe ecran o expresie aritmetică reprezentând suma numerelor din
intervalul [x,y] care au proprietatea că sunt pătrate perfecte, urmate de valoarea acestei sume.
Termenii sumei sunt într-o ordine oarecare și sunt separați prin câte un simbol plus (+), iar valoarea
sumei este precedată de simbolul egal (=), ca în exemplu. Dacă nu există niciun astfel de termen, se
afișează pe ecran mesajul nu exista.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=10 și y=50 se poate afișa pe ecran 16+25+36+49=126 (10p.)*/
void patrate(int x, int y) {

	int s = 0;

	for (int i = x; i <= y; i++) {
		if ((int)sqrt(i) == sqrt(i))
			if (s == 0) {
				cout << i;
				s += i;
			}
			else {
				cout << "+" << i;
				s += i;
			}
	}

	if (s != 0) cout << "=" << s;
	else cout << "nu exista";


}

/*
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,102]) și cele n
elemente ale unui tablou unidimensional, numere naturale din intervalul [102,899]. Programul
transformă tabloul în memorie, înlocuind prima cifră a fiecărui număr cu cifra consecutivă, ca în
exemplu. Elementele tabloului obținut sunt afișate pe ecran, separate prin câte un spațiu.
Exemplu: pentru n=6 și tabloul (178,899,476,660,409,312) se obține tabloul
(278,999,576,760,509,412) */
void inlocuire(int n, int v[100]) {

	for (int i = 0; i < n; i++) {
		int n = v[i];
		int t=0,p=1;
		while (n != 0)
		{
			if (n / 10 != 0) {
				t = t + (n % 10) * p;
				p *= 10;
			}
			else {
				t = t + ((n % 10) + 1) * p;

			}

			n /= 10;
		}
		v[i] = t;
		cout << v[i] << endl;
	}

}

/*
3. Fişierul bac.txt conţine un şir crescător de cel mult 106 numere naturale din intervalul [0,109],
separate prin câte un spaţiu. Se cere să se afişeze pe ecran fiecare număr distinct din şir, urmat de
numărul de apariţii ale acestuia în şir. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fişierul bac.txt conține numerele 0 0 0 5 5 5 5 7 7 11 20 20
se afișează 0 3 5 4 7 2 11 1 20 2*/
void afisare() {

	ifstream f("bac.txt");

	int x, y, k;

	f >> x;
	k = 1;

	while (f >> y)
	{
		if (x == y) k++;
		else
		{
			cout << x << " " << k << " ";
			k = 1;
		}
		x = y;
	}
	cout << y << " " << k;


}
