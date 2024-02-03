#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Subprogramul pDoi are un singur parametru, n, prin care primește un număr natural (n[1,109]).
Subprogramul returnează cea mai mare valoare din intervalul [1,n], cu proprietatea că este o putere a
lui 2.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=20, subprogramul returnează 16. (10p.)*/
int pDoi(int n) {

	int g = 0, x;

	while (g == 0 && n >= 1)
	{
		x = n;
		while (x % 2 == 0)
		{
			x /= 2;
		}

		if (x == 1)
			g = 1;
		else n--;
	}
	if (g == 1) return n;

}

/*
2. Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
nicio vocală. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă se citește textul: cuvantul ritm poate fi tradus rhythm
se obține textul cuvantul ritm poate fi trads rhythm (10p.)*/
void vocale(char s[100]) {
	/*
	char voc[10]="aeiou";

	int i = strlen(s) - 1;

	while (strchr(voc,s[i]) == 0 && i>=0)
	{
		i--;
	}

	if (i < 0) cout << "nu exista";
	else {
		strcpy(s + i, s + i + 1);
		cout << s;
	}
	*/
}


/*
3. Șirul de mai jos este definit alăturat:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 21, 42, 43, 86.... fn = {
n dacă n≤10
2∙fn-1 dacă n>10 și n impar
1+ fn-1 altfel
Se citește de la tastatură un număr natural x (x[1,109]), termen al șirului dat, și se cere să se scrie
în fișierul bac.out, separați prin câte un spațiu, în ordine strict descrescătoare, toți termenii șirului mai
mici sau egali cu x. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al
timpului de executare.
Exemplu: dacă valoarea citită de la tastatură este 43
se scriu în fișier numerele 43 42 21 20 10 9 8 7 6 5 4 3 2 1
*/
void afisare(int x) {

	ofstream h("bac.out");
	h << x << " ";
	while (x > 1)
	{
		if (x > 10)
			if (x % 2 == 0) x /= 2;
			else x--;
		else x--;
		h << x << " ";
	}

}
