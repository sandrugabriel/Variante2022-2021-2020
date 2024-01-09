#pragma once
#include "functii.h"

/*1. Un număr este scris în baza de numerație b (b≤10) dacă cifrele sale aparțin intervalului [0,b-1].
Subprogramul baza are un singur parametru, n, prin care primește un număr natural (n[0,109]).
Subprogramul returnează cea mai mică bază din intervalul [2,10] căreia i-ar putea corespunde
scrierea lui n. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=50731, subprogramul returnează numărul 8. (10p.)*/
void solutia1() {
	cout << baza(50731);
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
void solutia2() {
	char s[101] = "grus leucogeranus are 1,40 m inaltime si traieste intre 30 si 40 de ani";
	 ct(s);
}

/*
3. Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere de pe poziții
consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 4 -6 7 2 -1 4 -10 -3 9 2 -2
se afișează pe ecran numărul 12*/
void solutia3() {

	afisare();

}