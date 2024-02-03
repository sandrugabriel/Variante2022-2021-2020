#pragma once
#include "functii.h"

/*1. Subprogramul patrate are doi parametri, x și y, prin care primește câte un număr natural
(1≤x≤y≤109). Subprogramul afişează pe ecran o expresie aritmetică reprezentând suma numerelor din
intervalul [x,y] care au proprietatea că sunt pătrate perfecte, urmate de valoarea acestei sume.
Termenii sumei sunt într-o ordine oarecare și sunt separați prin câte un simbol plus (+), iar valoarea
sumei este precedată de simbolul egal (=), ca în exemplu. Dacă nu există niciun astfel de termen, se
afișează pe ecran mesajul nu exista.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=10 și y=50 se poate afișa pe ecran 16+25+36+49=126 (10p.)*/
void solutia1() {

	patrate(10,50);

}

/*
2. Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici și mari ale alfabetului englez
și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de
tipul precizat, pe care îl transformă, astfel încât fiecare cuvânt să aibă prima literă mare, și toate
celelalte litere mici. Textul obținut se afişează pe ecran.
Exemplu: dacă de la tastatură se introduce textul ABIA aSTept sa Merg lA scoala
se obține textul Abia Astept Sa Merg La Scoala (10p.)*/
void solutia2() {

	char s[101] = "ABIA aSTept sa Merg lA scoala";
	litMare(s);
}

/*
3. Fişierul bac.txt conţine un şir crescător de cel mult 106 numere naturale din intervalul [0,109],
separate prin câte un spaţiu. Se cere să se afişeze pe ecran fiecare număr distinct din şir, urmat de
numărul de apariţii ale acestuia în şir. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fişierul bac.txt conține numerele 0 0 0 5 5 5 5 7 7 11 20 20
se afișează 0 3 5 4 7 2 11 1 20 2*/
void solutia3() {

	afisare();
}
