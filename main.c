#include <stdio.h>
#include <stdlib.h>

int rechteckAufgabe();
int aufgabe2();
int aufgabe3();
int aufgabe4();
int aufgabe5();
int aufgabe6();
int aufgabe7();

int main(void) {

  //rechteckAufgabe();
  //aufgabe2();
  //aufgabe3();
  //aufgabe4();
  //aufgabe5();
  //aufgabe6();
  aufgabe7();

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

  }else{

    printf("%d liegt nicht im Intervall [%d, %d]",zahl, intervallgrenze1, intervallgrenze2);


  }

  return 0;
}

//Uebung 2 Aufgabe 6
int aufgabe6(){

  int value = 0;
  printf("Bitte geben Sie eine Zahl ein: ");
  scanf("%d", &value);

  int digit0 = (value / 1000) % 10;   // 1
  int digit1 = (value / 100) % 10;    // 2
  int digit2 = (value / 10) % 10;     // 3
  int digit3 = (value / 1) % 10;      // 4

  //tausender
  switch(digit0){

    case 1: printf("eintausend"); break;
    case 2: printf("zweitausend"); break;
    case 3: printf("dreitausend"); break;
    case 4: printf("viertausend"); break;
    case 5: printf("fünftausend"); break;
    case 6: printf("sechstausend"); break;
    case 7: printf("siebentausend"); break;
    case 8: printf("achttausend"); break;
    case 9: printf("neuntausend"); break;
  }



  //hunderter
  switch(digit1){

    case 1: printf("einhundert"); break;
    case 2: printf("zweihundert"); break;
    case 3: printf("dreihundert"); break;
    case 4: printf("vierhundert"); break;
    case 5: printf("fünfhundert"); break;
    case 6: printf("sechshundert"); break;
    case 7: printf("siebenhundert"); break;
    case 8: printf("achthundert"); break;
    case 9: printf("neunhundert"); break;
  }

  

  //zehner und einer 11-19
  if(digit2 == 1){
    switch(digit3){
    case 0: printf("zehn"); break;
    case 1: printf("elf"); break;
    case 2: printf("zwölf"); break;
    case 3: printf("dreizehn"); break;
    case 4: printf("vierzehn"); break;
    case 5: printf("fünfzehn"); break;
    case 6: printf("sechzehn"); break;
    case 7: printf("siebzehn"); break;
    case 8: printf("achtzehn"); break;
    case 9: printf("neunzehn"); break;
    }
  }

  
  
  //einer eins bis neun
  if(digit2 == 0){
  switch(digit3){

    case 1: printf("eins"); break;
    case 2: printf("zwei"); break;
    case 3: printf("drei"); break;
    case 4: printf("vier"); break;
    case 5: printf("fünf"); break;
    case 6: printf("sechs"); break;
    case 7: printf("sieben"); break;
    case 8: printf("acht"); break;
    case 9: printf("neun"); break;
  }
  }

  //zehner 10-90
  if(digit2 != 0 && digit2!= 1){
    switch(digit3){

    case 1: printf("einund"); break;
    case 2: printf("zweiund"); break;
    case 3: printf("dreiund"); break;
    case 4: printf("vierund"); break;
    case 5: printf("fünfund"); break;
    case 6: printf("sechsund"); break;
    case 7: printf("siebenund"); break;
    case 8: printf("achtund"); break;
    case 9: printf("neunund"); break;
  }


    switch(digit2){

    case 1: printf("zehn"); break;
    case 2: printf("zwanzig"); break;
    case 3: printf("dreißig"); break;
    case 4: printf("vierzig"); break;
    case 5: printf("fünfzig"); break;
    case 6: printf("sechzig"); break;
    case 7: printf("siebzig"); break;
    case 8: printf("achtzig"); break;
    case 9: printf("neunzig"); break;
    }
  }

  



  return 0;
}

//Uebung 2 Aufageb 7
int aufgabe7(){

  
}
