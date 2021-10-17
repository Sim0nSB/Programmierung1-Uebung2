#include <stdio.h>
#include <stdlib.h>

int rechteckAufgabe();
int aufgabe2();
int aufgabe3();
int aufgabe4();
int aufgabe5();
int aufgabe6();

int main(void) {

  //rechteckAufgabe();
  //aufgabe2();
  //aufgabe3();
  //aufgabe4();
  //aufgabe5();
  aufgabe6();

  return 0;
}


//Uebung 2 Aufgabe 1 (rechteckAufgabe)
int rechteckAufgabe(){

  int laenge = 0;
	int breite = 0;
	int flaeche = 0;
	int umfang = 0;

	// Eingabe:

  printf("Bitte geben Sie eine Länge ein: ");
  scanf("%d", &laenge);

  printf("Bitte geben Sie eine Breite ein: ");
  scanf("%d", &breite);


	// Berechnung:
  umfang = (2*laenge)+(2*breite);
  flaeche = laenge*breite;

	// Ausgabe:
  printf("-------------------------------------\n");
  printf("Länge des Rechtecks: %d\n" "Breite des Rechtecks: %d\n" "Umfang:  %d\n" "Fläche:  %d\n", laenge, breite, umfang, flaeche);

  return 0;
}

//Uebung 2 Aufgabe 2
int aufgabe2(){

   int zahl;
  
  printf("Geben Sie eine ganze Zahl ein:  ");
  scanf("%d", &zahl);

  if(zahl % 3 == 0){

    printf("%d ist durch 3 teilbar", zahl);

  }else{

    printf("%d ist nicht durch 3 teilbar", zahl);

  }

  return 0;
}

//Uebung 2 Aufgabe 3
int aufgabe3(){

  int zahl1,zahl2;

  printf("Geben Sie eine ganze Zahl ein:  ");
  scanf("%d",&zahl1);
  printf("Geben Sie eine ganze Zahl ein:  ");
  scanf("%d",&zahl2);
  printf("----------------------------------\n");

  if(zahl1 == zahl2){

    printf("Die Zahlen sind gleich groß");

  }else if(zahl1 < zahl2){

    printf("%d ist größer als %d", zahl2, zahl1);

  }else{

    printf("%d ist größer als %d", zahl1, zahl2);

  }

  return 0;
}

//Uebung 2 Aufgabe 4
int aufgabe4(){

  int zahl1,zahl2;

  printf("Eingabe der ersten Zahl:  ");
  scanf("%d",&zahl1);
  printf("Eingabe der zweiten Zahl:  ");
  scanf("%d",&zahl2);
  printf("----------------------------\n");

  if(zahl2 == 0){

    printf("Division durch 0 ist nicht möglich");

  }else if(zahl1 % zahl2 == 0){

    printf("%d ist durch %d teilbar", zahl1, zahl2);

  }else{

    printf("%d ist nicht durch %d teilbar", zahl1, zahl2);

  }

  return 0;
}

//Uebung 2 Aufgabe 5
int aufgabe5(){

  int intervallgrenze1,intervallgrenze2,zahl;
  printf("Eingabe der ersten Intervallsgrenze:  ");
  scanf("%d", &intervallgrenze1);
  printf("Eingabe der zweiten Intervallsgrenze:  ");
  scanf("%d", &intervallgrenze2);
  printf("Eingabe der zu prüfenden Zahl:  ");
  scanf("%d", &zahl);
  printf("---------------------------------------\n");

  if(intervallgrenze1 == intervallgrenze2){

    printf("Das Intervall ist zu klein");

  }else if(intervallgrenze2 < intervallgrenze1){

    int temp = intervallgrenze2;
    intervallgrenze2 = intervallgrenze1;
    intervallgrenze1 = temp;

  }

  if(zahl>intervallgrenze1 && zahl<intervallgrenze2){

    printf("%d liegt im Intervall [%d, %d]",zahl, intervallgrenze1, intervallgrenze2);

  }else if(zahl<intervallgrenze1 && zahl>intervallgrenze2){

    printf("%d liegt nicht im Intervall [%d, %d]",zahl, intervallgrenze1, intervallgrenze2);


  }

  return 0;
}

//Uebung 2 Aufgabe 5
int aufgabe6(){

  return 0;
}