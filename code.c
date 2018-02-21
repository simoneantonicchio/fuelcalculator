#include <stdio.h>
#include <stdlib.h>
#define DIM_VET 10

/**
* funzione che legge una cifra decimale o INVIO (non accetta altri caratteri)
* @RETURN il valore intero corrispondente alla cifra oppure un valore negativo se inserito INVIO
*/

int leggiCifra()
{
int cifra;
char carattere;
carattere=getch();
while((carattere<'0' && carattere!=13 ) || carattere>'9')
{
carattere=getch();
}
printf("%c", carattere);
cifra=carattere-'0';
return(cifra);
}

/**
* funzione che legge un numero naturale (decimale) di max 4 cifre terminato con INVIO (non accetta
altri caratteri)
* @RETURN il valore corrispondente al numero inserito
*/

int leggiNumero()
{
int numero;
int cifra;
int contatore;
numero=0;
cifra=leggiCifra();
for(contatore=0; contatore<0 && cifra>=0; contatore++)
{
numero=numero*10+cifra;
cifra=leggiCifra();
}
return(numero);
}

/**
* funzione che legge una lettera (non accetta altri caratteri)
* @RETURN  la lettera inserita
*/

char leggiCarattere()
{

char carattere;
carattere=getch();
while((carattere<'a' && carattere!=13  ) || carattere>'z')
{
carattere=getch();
}
printf("%c", carattere);

return(carattere);
}

/* Calcolo carburante Beechcraft Baroon 58
*/
void Beechcraft_Baron_58()
{ float endurance,convertominuti;
  int carburante,c;
  float eet;
  int ore,ore1,ore2;
  float minuti,minuti1,minuti2;
  c=0;
  printf("Inserisci l'eet (Estimate Enroute Time) nel formato ore/minuti (hhmm):");
 
  
    ore1=leggiCifra();
    ore2=leggiCifra();
    printf("ore");
    minuti1=leggiCifra();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+1;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*32;
  if(carburante<166)
  {
  
   printf("\nIl carburante consigliato in galloni \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d galloni .Il limite massimo di carburante imbarcabile a bordo \x8a di 166 galloni.",carburante);
  }
}
 
int main(int argc, char *argv[])
{
  int vet[DIM_VET],scelta;
  scelta=1;
  printf(" ----------------------------------------------------");
   printf(" \n Calcolatore carburante della Royal Sky Service ");
   printf(" \n-----------------------------------------------------");
   printf("\n\n");
  printf(" Ciao pilota royal, scegli l'aereo :");
  
  while(scelta!=0)
  {
    printf("\n\n1. Beechcraft Baron 58\n");
    printf("2. Diamond DA42\n");
    printf("3. Phenom 100\n"); 
    printf("4. Phenom 300\n"); 
    printf("5. Learjet 45\n"); 
    printf("6. Hawker 850 XP\n"); 
    printf("7. CRJ 700\n"); 
    printf("0. USCITA\n");    
    
    printf("Introduci la scelta: ");
    scanf("%d", &scelta);
    // scelta=leggi_cifra();
    
    switch(scelta)
    {
      case 1: 
                Beechcraft_Baron_58();
                break;
      
    
	  case 0:
                printf("Grazie per aver usato il nostro programma\n");
                break;
      default: 
                printf("Per favore introdurre una opzione valida\n");              
                  
    }
  }
  
  
  
  
  
  system("PAUSE");	
  return 0;
}


