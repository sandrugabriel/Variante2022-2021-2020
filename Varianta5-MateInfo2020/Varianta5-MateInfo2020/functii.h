#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Un număr este scris în baza de numerație b (b≤10) dacă cifrele sale aparțin intervalului [0,b-1].
Subprogramul baza are un singur parametru, n, prin care primește un număr natural (n[0,109]).
Subprogramul returnează cea mai mică bază din intervalul [2,10] căreia i-ar putea corespunde
scrierea lui n. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=50731, subprogramul returnează numărul 8. (10p.)*/
int baza(int n) {

	int max = 0;

	while (n!=0)
	{
		if (n % 10 > max)
			max = n % 10;
		n /= 10;
	}

	return max + 1;
}

/*
2. Un text cu cel mult 100 de caractere conține cuvinte și numere, separate prin câte un spațiu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez, iar numerele sunt reale, pozitive, cu partea
zecimală și partea întreagă separate prin simbolul virgulă, sau numai cu partea întreagă, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și afișează pe ecran
numărul de valori întregi din text.
Exemplu: pentru textul
grus leucogeranus are 1,40 m inaltime si traieste intre 30 si 40 de ani
se afișează pe ecran 2 (10p.)*/
void ct(char s[101]) {

	/*char* p;

	int k = 0;

	p = strtok(s, " ");

	while (p!=NULL)
	{
		if (strchr("123456789", p[0]) != NULL)
			if (strchr(p, ',') == NULL) k++;

		p = strtok(NULL, " ");
	}

	cout << k;*/
}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere de pe poziții
consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 4 -6 7 2 -1 4 -10 -3 9 2 -2
se afișează pe ecran numărul 12*/
void afisare() {

	int nr = 0, s = 0, smax = 0, ok = 1;

	ifstream f("bac.txt");

	while (f>>nr)
	{
		if (s + nr >= nr && ok == 1 && s + nr >= smax) {
			s += nr;
		}
		else
		{
			ok = 0;
			if (s > smax)smax = s;
		}

		if (ok == 0) {
			s = nr;
			ok = 1;
		}
	}

	if (s > smax)smax = s;

	cout << smax;
}