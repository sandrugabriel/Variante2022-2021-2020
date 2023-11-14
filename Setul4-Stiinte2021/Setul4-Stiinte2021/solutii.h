#pragma once
#include "functii.h"

/*1. Un joc online cu n jetoane poate fi jucat de un grup de k (k≥2) jucători, numai dacă toate cele n jetoane
pot fi distribuite în mod egal celor k jucători.
Subprogramul joc are un singur parametru, n, prin care primește un număr natural (n[2,104]),
reprezentând numărul de jetoane ale unui joc de tipul precizat. Subprogramul returnează numărul
valorilor distincte pe care le poate avea k pentru acest joc.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12, atunci subprogramul returnează numărul 5 (cele 12 jetoane se pot distribui în
mod egal pentru o grupă de 2 jucători, de 3 jucători, de 4 jucători, de 6 jucători sau de 12 jucători).
(10p.)*/
void solutia1() {

	cout << joc(12);

}

/*
2. Scrieţi un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2,102]: n şi cele n
elemente ale unui tablou unidimensional. Programul afișează pe ecran cea mai mare dintre valorile strict
mai mici decât 21 memorate în acesta, sau mesajul nu exista, dacă nu există nicio astfel de valoare.
Exemplu: pentru n=5 și tabloul (6,16,21,4,90) se afișează pe ecran 16. */
void solutia2() {
	int a[100] = { 6,16,21,4,90 };
	strict(3, a);

}

/*
3. Fişierele bac1.txt și bac2.txt conţin numere naturale din intervalul [1,105]: fișierul bac1.txt
conține pe prima linie un număr n1, iar pe a doua linie un șir de n1 numere, iar fișierul bac2.txt
conține pe prima linie un număr n2, iar pe a doua linie un șir de n2 numere. Numerele aflate pe
aceeași linie a unui fișier sunt ordonate crescător și sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran, în ordine crescătoare, separate prin câte un spațiu, numerele divizibile
cu 5 care se găsesc în șirurile aflate în cele două fișiere, ca în exemplu. Dacă nu există niciun astfel de
număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere
al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul
bac1.txt conţine numerele
7
1 2 3 4 7 20 60
iar fişierul bac2.txt
conţine numerele
9
3 5 7 8 9 10 12 20 24
pe ecran se afișează, în această ordine, numerele 5 10 20 20 60.
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.*/
void solutia3() {

	afisare();

}

