﻿#pragma once
#include "functii.h"


/*1. Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n[1,106]).
Subprogramul returnează suma divizorilor pozitivi ai lui n care nu sunt primi.
Scrieți definiția completă a subprogramului.
Exemplu: pentru n=12 subprogramul returnează 23 (23=1+4+6+12). (10p.)*/
void solutia1() {

	cout << suma(12);

}

/*
2. O sală de spectacole are mai multe rânduri de scaune, toate rândurile având același număr de locuri. O
persoană poate rezerva mai multe locuri, dar cel mult câte unul pe un rând. Configurația sălii este
memorată ca un tablou bidimensional, în care prima coloană corespunde primului rând de scaune, iar
ultima coloană corespunde ultimului rând de scaune. Locurile libere sunt notate cu 0, iar cele rezervate
sunt notate cu numere naturale nenule, astfel încât toate locurile rezervate de o persoană sunt notate
cu același număr, iar cele rezervate de persoane distincte sunt notate cu numere distincte.
Scrieți un program C/C++ care citește de la tastatură numerele naturale din intervalul [2,20], m și n, apoi m∙n
numere naturale din intervalul [0,400], elemente ale tabloului bidimensional cu m linii și n coloane,
reprezentând configurația sălii. Programul verifică dacă există persoane care au rezervat locuri atât pe primul,
cât și pe ultimul rând al sălii, și afișează pe ecran numerele cu care sunt notate aceste locuri, ca în exemplu.
Numerele sunt afișate într-o ordine oarecare, separate prin câte un spațiu, iar dacă nu există
astfel de locuri se afișează pe ecran mesajul nu exista.
Exemplu: pentru m=5, n=4 și tabloul alăturat se afișează pe ecran, nu neapărat în această
ordine, numerele 6 8 (10p.)
3 7 0 0
0 0 5 8
6 2 0 1
0 3 0 6
8 0 6 4*/
void solutia2() {

	int a[100][100] = { 
		{3,7,0,0}, 
		{0,0,5,8} , 
		{6,2,0,1}
	, {0,3,0,6}, 
		{8,0,6,4} };

	generare(5,4,a);

}

/*
3. Două numere naturale sunt numite z-prietene dacă au aceeași cifră a zecilor.
Fișierul bac.in conține un șir de cel mult 106 numere naturale din intervalul [10,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran pozițiile din șir pe care se află termeni precedați de un
număr maxim de valori z-prietene cu ei. Numerele afișate sunt separate prin câte un spațiu. Proiectați
un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele 726 358 98 157 20 49 128 879 659 271
pe ecran se afișează numerele 7 9 (termenii 128, respectiv 659 respectă proprietatea cerută).
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.*/
void solutia3() {

	afisare();
}

