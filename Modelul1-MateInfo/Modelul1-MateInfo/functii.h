#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

/*1. Pentru grădina publică a orașului se dorește proiectarea unui mozaic de formă dreptunghiulară, format
din plăcuțe dreptunghiulare de ceramică. Furnizorul dispune de trei tipuri de plăcuțe și de suficient de multe
plăcuțe din fiecare tip, astfel încât să fie posibilă realizarea oricărui model. Modelul proiectat este constituit
din trei benzi suprapuse, fiecare bandă fiind formată din plăcuțe întregi, de același tip, montate unele după
altele; oricare două benzi diferite sunt formate din plăcuțe de tipuri diferite.
Subprogramul mozaic are trei parametri, x, y și z, prin care primește trei numere naturale din intervalul
[10,200], reprezentând lungimea, exprimată în milimetri, a unei plăcuțe de primul tip, de al doilea tip,
respectiv de al treilea tip. Subprogramul returnează un număr natural, reprezentând lungimea minimă,
exprimată în milimetri, a unui mozaic care să respecte modelul proiectat.
Scrieți definiția completă a subprogramului.
Exemplu: pentru x=30, y=40, z=20, subprogramul returnează valoarea 120
(mozaicul are trei benzi, fiecare de lungime 120 mm: prima formată din 4 plăcuțe
de câte 30 mm, a doua formată din 3 plăcuțe de câte 40 mm, iar a treia formată
din 6 plăcuțe de câte 20 mm). */
int mozaic(int x, int y, int z) {
		if (z * 6 == y * 3 == x * 4) return z * 6;
}


/*Un text are cel mult 100 de caractere și este format din cuvinte, numere naturale şi spaţii. Textul conține
cel puțin un număr, iar cuvintele sunt formate numai din litere mici ale alfabetului englez. Cuvintele şi
numerele sunt separate prin câte un spaţiu, ca în exemplu.
Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul precizat şi afişează pe ecran un
număr natural k, dacă toate numerele care intră în componența sa au câte k cifre, sau mesajul NU, în caz
contrar.
Exemplu: pentru textul la zoo sunt 100 de cocori si 120 de pasari flamingo
sau pentru textul la zoo sunt 100 de cocori
se afişează 3
iar pentru textul la zoo sunt 100 de cocori si 10 pasari flamingo
se afişează NU*/
void text(char s[100]) {
	int i, n, k, nr, ok;
	/*char* cuv = strtok(s, " ");
	k = -1; ok = 1;
	while (cuv)
		if (cuv[0] >= '0' && cuv[0] <= '9')
		{
			if (k == -1)
				k = strlen(cuv);
			else if (k != strlen(cuv))
				ok = 0;
		}
	cuv = strtok(NULL, " ");
	if (ok) cout << k;
	else cout << "NU";*/
}

/*Numim secvență par-încadrată a unui șir de numere naturale un subșir al acestuia, format din termeni
aflați pe poziții consecutive în șirul dat, subșir care începe și se termină cu aceeași valoare, pară.
Lungimea secvenței este egală cu numărul de termeni ai acesteia.
Fișierul bac.txt conține un șir de cel puțin două și cel mult 106 numere naturale din intervalul [0, 9].
Numerele sunt separate prin câte un spațiu, iar în șir există cel puțin doi termeni pari egali.
Se cere să se determine secvențele par-încadrate din acest șir care au lungime maximă și să se afișeze
pe prima linie a ecranului lungimea maximă determinată, iar pe următoarea linie, pentru fiecare astfel de
secvenţă, valoarea primului său termen. Numerele de pe a doua linie sunt afişate în ordine strict
crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
*/
void sectiunePara() {

	ifstream f("bac.txt");
	int v[10] = {0}, s[10] = {0}, i, x, Maxl = -0, p = 0;

	while (f >> x) {
		p++;
		if (x % 2 == 0) {

			if (v[x] == 0) {
				v[x] = p;
			}
			s[x] = p;
		}
	}
	for (i = 0; i <= 8; i = i + 2) {

		if (s[i] - v[i] > Maxl) {

			Maxl = s[i] - v[i];
		}
	}
	cout << Maxl + 1 << endl;

	for (i = 0; i <= 8; i = i + 2) {

		if (s[i] - v[i] == Maxl)
			cout << i << " ";
	}
}
