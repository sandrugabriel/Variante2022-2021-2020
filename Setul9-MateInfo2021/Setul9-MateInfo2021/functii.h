#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*
1. Subprogramul divizor are patru parametri:
• a, b și k, prin care primește câte un număr natural (a[0,109], b[a,109], k[1,9]);
• nr, prin care furnizează numărul de valori naturale din intervalul [a,b] care sunt divizibile cu k și au
ultima cifră egală cu k. Scrieți definiția completă a subprogramului.
Exemplu: dacă a=3, b=50 și k=4, în urma velului, nr=3 (pentru numerele 4, 24, 44). (10p.)*/
void divizor(int a, int b, int k, int &nr) {

	nr = 0;

	for (int i = a; i <= b; i++)
		if (i % k == 0 && i % 10 == k) nr++;

}

/*
2. Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și
afișează pe ecran, pe linii separate, toate cuvintele sale care conțin o singură vocală distinctă, ca în exemplu.
Dacă nu există niciun astfel de cuvânt, se afișează pe ecran mesajul nu exista. Se
consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul a plantat cinci lalele visinii sau rosii
se afișează pe ecran, nu nevărat în această ordine, cuvintele alăturate. (10p.)
a
plantat
cinci
visinii*/
void cuv(char s[100]) {

	//char * p, voc[6] = "aeiou";
	//int c = 0, k = 0;
	//p = strtok(s, " ");
	//while (p!=NULL)
	//{
	//	c = 0;

	//	for (int i = 0; i <= 4; i++) {
	//		if (strchr(p, voc[i]) != NULL) {
	//			c++;
	//		}
	//	}

	//	if (c == 1) {
	//		k++;
	//		cout << p << endl;
	//	}

	//	p = strtok(NULL," ");
	//}

}

/*
3. Fișierul numere.txt conține cel mult 105 numere naturale din intervalul [1,109], câte unul pe fiecare
linie. Se cere să se afișeze pe ecran cel mai mare număr care se poate forma cu toate cifrele care var
în numerele din fișier, ca în exemplu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat, se afișează
9988887766333220
263
39628
79
887308


*/
void afisare() {

	ifstream fin("numere.txt");

		int x, v[11] = { 0 };
		while (fin >> x)
		{
			do
			{
				int c = x % 10;
				v[c]++;
				x /= 10;
			} while (x);
		}
		for (int i = 9; i >= 0; i--)
		{
			while (v[i])
			{
				cout << i;
				v[i]--;
			}
		}

}


