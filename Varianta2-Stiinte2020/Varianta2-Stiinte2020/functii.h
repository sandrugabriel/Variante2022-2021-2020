#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Două numere distincte a și b sunt numite d-fii ai unui număr natural n dacă a∙b=n.
Subprogramul fii are un singur parametru, n, prin care primește un număr natural (n[1,109]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea că sunt d-fii ai
lui n. Fiecare pereche este afișată încadrată între paranteze rotunde, numerele din pereche fiind afișate în
ordine strict descrescătoare, separate printr-un spațiu. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, (12 1)(6 2)(4 3)
iar dacă n=16 se afișează pe ecran (16 1)(8 2) (10p.)*/
void fii(int n) {

	for (int i = n; i >= 1; i--)
		for (int j = 1; j <= n; j++)
			if (i > j && i * j == n)
				cout << "(" << i << " " << j << ")";

}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n[2,102]), apoi cele n
elemente ale unui tablou unidimensional, numere întregi din intervalul [-102,102], dintre care cel puțin
unul este pozitiv și cel puțin unul este negativ. Programul transformă în memorie tabloul, eliminând din
componenţa sa toate numerele negative, apoi afişează pe ecran elementele tabloului obţinut.
Exemplu: pentru n=10 și taboul (2,5,2,4,-3,4,-2,-7,-2,9)
se obține taboul (2,5,2,4,4,9)*/
void stergere(int v[100], int &n, int poz) {

	for (int i = poz; i < n - 1; i++) {
		v[i] = v[i + 1];
	}
	n--;
}
void naturale(int v[100], int &n) {

	for (int i = 0; i < n; i++) {
		if (v[i] < 0) {
			stergere(v, n, i);

		}
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

/*
3. Fişierul bac.in conţine un şir de numere naturale distincte, din intervalul [1,109]. Numerele din şir
sunt separate prin câte un spaţiu şi cel puţin trei dintre ele au penultima cifră 2 și ultima cifră 0.
Se cere să se afișeze pe ecran cele mai mari trei numere din şir cu proprietatea că au penultima cifră 2
și ultima cifră 0. Numerele determinate sunt afişate în ordine crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 9731 50 112 20 8 16 8520 3 2520 1520
pe ecran se vor afişa, în această ordine, numerele: 1520 2520 8520*/
void afisare() {

	ifstream f("bac.in");
	int x, max1 = 0, max2 = 0, max3 = 0;
	while (f >> x)
		if (x % 10 == 0 && x / 10 % 10 == 2)
			if (x > max3) {
				max1 = max2;
				max2 = max3;
				max3 = x;
			}
			else if (x > max2) {
				max1 = max2;
				max2 = x;
			}
			else if (x > max1)
				max1 = x;
	cout << max1 << " " << max2 << " " << max3;


}
