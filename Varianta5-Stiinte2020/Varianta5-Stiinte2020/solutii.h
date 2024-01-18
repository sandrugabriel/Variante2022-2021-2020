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
2. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n [2,20]), şi cele n
elemente ale unui tablou unidimensional, numere naturale din intervalul [0,109). Programul afişează
pe ecran numărul de valori care sunt divizibile cu 20.
Exemplu: pentru n=10 și tabloul (10, 200, 25, 40, 50, 80,400,120,100,5)
se afișează pe ecran 6 */
void solutia2() {
	int v[100] = { 10, 200, 25, 40, 50, 80,400,120,100,5 };
	cout<<divivibil20(v,10);
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