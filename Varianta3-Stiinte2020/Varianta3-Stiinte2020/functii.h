#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*
1. Se citesc două numere naturale nenule, n şi m, și se cere să se scrie numărul valorilor prime care se
regăsesc atât în descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieţi, în pseudocod, algoritmul de rezolvare a problemei enunțate.
Exemplu: dacă n=750 şi m=490, atunci se scrie 2 (750=2353, 490=2572). (10p.)*/
int factori(int n, int m) {

	int nr = 0, d = 2;

	while (n != 1 && m != 1)
	{
		while (n % d == 0 && m % d == 0)
		{
			nr++;
			n /= d;
			m /= d;

		}
		while (n % d == 0)
		{
			n /= d;
		}
		while (m % d == 0)
		{
			m /= d;
		}

		d++;
	}

	return nr;
}


/*
2. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale, n și k, (n∈[2,20],
k∈[1,n]), şi construieşte în memorie un tablou unidimensional cu n elemente, având proprietăţile:
• al k-lea element are valoarea 0;
• conţine, începând cu al k-lea element, de la dreapta la stânga, un şir strict crescător de numere
consecutive, iar începând cu al k-lea element, de la stânga la dreapta, tot un şir strict crescător de
numere consecutive.
Programul afişează pe ecran tabloul construit, cu elementele separate prin câte un spaţiu.
Exemplu: dacă n=10 și k=3 se afişează pe ecran tabloul 2 1 0 1 2 3 4 5 6 7 (10p.)*/
void afisareTablou(int n, int k) {

	int v[100] = {};
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (i < k-1 ) {
			v[i] = k - 1 - i;
		}
		else if(i==k-1) {
			v[i] = 0;
		}
		else
		{
			ct++;
			v[i] = ct;
		}
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";

}

/*
3. Fişierul bac.in conţine un şir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spaţiu. Cel puţin două numere din șir sunt negative.
Se cere să se afişeze pe ecran lungimea maximă a unei secvenţe a şirului care începe şi se încheie cu
câte un număr negativ. O secvenţă este formată din termeni aflaţi pe poziţii consecutive în şir, iar
lungimea secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 12 25 -6 7 80 -75 101 -6 52 -124 87 99 210
pe ecran se afişează 11 (corespunzător secvenţei -6 7 80 -75 101 -6 52 -124).
*/
void afisare() {

	int x = 0;
	int p1 = 0, p2 = 0, nr = 0, ok = 0;

	ifstream f("bac.in");

	while (f >> x)
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
