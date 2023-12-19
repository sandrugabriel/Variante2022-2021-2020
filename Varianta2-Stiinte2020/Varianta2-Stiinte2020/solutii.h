#pragma once
#include "functii.h"

/*1. Două numere distincte a și b sunt numite d-fii ai unui număr natural n dacă a∙b=n.
Subprogramul fii are un singur parametru, n, prin care primește un număr natural (n[1,109]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea că sunt d-fii ai
lui n. Fiecare pereche este afișată încadrată între paranteze rotunde, numerele din pereche fiind afișate în
ordine strict descrescătoare, separate printr-un spațiu. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, (12 1)(6 2)(4 3)
iar dacă n=16 se afișează pe ecran (16 1)(8 2) (10p.)*/
void solutia1() {

	fii(12);
}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n[2,102]), apoi cele n
elemente ale unui tablou unidimensional, numere întregi din intervalul [-102,102], dintre care cel puțin
unul este pozitiv și cel puțin unul este negativ. Programul transformă în memorie tabloul, eliminând din
componenţa sa toate numerele negative, apoi afişează pe ecran elementele tabloului obţinut.
Exemplu: pentru n=10 și taboul (2,5,2,4,-3,4,-2,-7,-2,9)
se obține taboul (2,5,2,4,4,9)*/
void solutia2() {
	int v[100] = { 2,5,2,4,-3,4,-2,-7,-2,9 },n=10;
	naturale(v,n);
}

/*
3. Fişierul bac.in conţine un şir de numere naturale distincte, din intervalul [1,109]. Numerele din şir
sunt separate prin câte un spaţiu şi cel puţin trei dintre ele au penultima cifră 2 și ultima cifră 0.
Se cere să se afișeze pe ecran cele mai mari trei numere din şir cu proprietatea că au penultima cifră 2
și ultima cifră 0. Numerele determinate sunt afişate în ordine crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 9731 50 112 20 8 16 8520 3 2520 1520
pe ecran se vor afişa, în această ordine, numerele: 1520 2520 8520*/
void solutia3() {

	afisare();

}