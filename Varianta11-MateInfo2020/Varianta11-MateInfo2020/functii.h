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
		if((int)sqrt(i) == sqrt(i))
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
2. Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici și mari ale alfabetului englez
și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de
tipul precizat, pe care îl transformă, astfel încât fiecare cuvânt să aibă prima literă mare, și toate
celelalte litere mici. Textul obținut se afişează pe ecran.
Exemplu: dacă de la tastatură se introduce textul ABIA aSTept sa Merg lA scoala
se obține textul Abia Astept Sa Merg La Scoala (10p.)*/
void litMare(char s[101]) {

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (int i = 1; i <= strlen(s) - 1; i++) {
		if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == ' ')
			s[i] = s[i] - 32;
		else if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ')
			s[i] = s[i + 32];
	}

	cout << s;
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

	while (f>>y)
	{
		if (x == y) k++;
		else
		{
			cout << x << " " << k<<" ";
			k = 1;
		}
		x = y;
	}
	cout << y << " " << k;


}
