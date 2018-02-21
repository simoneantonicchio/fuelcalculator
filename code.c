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
while((carattere<'0' && carattere!=13 && carattere!=4) || carattere>'9')
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

float leggiNumero()
{
float numero;
int cifra;
int contatore;
numero=0;
cifra=leggiCifra();
for(contatore=0; contatore<3 && cifra>=0; contatore++)
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
{ float eet,endurance;
  int carburante,c;
  c=0;
  printf("Inserisci l'eet (Estimate Enroute Time) usando il punto come separatore ore/minuti:",eet);
  for(c=0;c<5 || eet== 13  ;c++)
  {eet=getche();
   if(eet==44)
   {c=-1;
    printf("\n Attenzione!!Usa il punto come separatore ore/minuti:");
   }
  }
   printf("\nIl carburante consigliato in libre \x8a:%d",carburante);
 
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


