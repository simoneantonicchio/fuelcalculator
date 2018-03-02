#include <stdio.h>
#include <stdlib.h>



/**
* funzione che legge una cifra decimale o INVIO (non accetta altri caratteri)
* @RETURN il valore intero corrispondente alla cifra oppure un valore negativo se inserito INVIO
*/

int leggiCifra()
{
int cifra;
char carattere;
carattere=getch();
while((carattere<'0' && carattere!=13  ) || carattere>'9')
{
carattere=getch();
}
printf("%c", carattere);
cifra=carattere-'0';
return(cifra);
}

int leggiCifra_minuti()
{
int cifra;
char carattere;
carattere=getch();
while((carattere<'0' && carattere!=13  ) || carattere>'5')
{
carattere=getch();
}
printf("%c", carattere);
cifra=carattere-'0';
return(cifra);
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
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
 
/* Calcolo carburante Diamond Da42
*/
void Da42()
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*15;
  if(carburante<75)
  {
  
   printf("\nIl carburante consigliato in galloni \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d galloni .Il limite massimo di carburante imbarcabile a bordo \x8a di 75 galloni.",carburante);
  }
}
  
 /* Calcolo carburante Phenom 100
*/
void Phenom_100()
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*1000;
  if(carburante<2800)
  {
  
   printf("\nIl carburante consigliato in libbre \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d libbre. Il limite massimo di carburante imbarcabile a bordo \x8a di 2800 libbre.",carburante);
  }
}

/* Calcolo carburante Phenom 300
*/
void Phenom_300()
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*1200;
  if(carburante<5350)
  {
  
   printf("\nIl carburante consigliato in libbre \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d libbre. Il limite massimo di carburante imbarcabile a bordo \x8a di 5350 libbre.",carburante);
  }
}

/* Calcolo carburante Learjet 45
*/
void Learjet_45()
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*1200;
  if(carburante<6000)
  {
  
   printf("\nIl carburante consigliato in libbre \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d libbre. Il limite massimo di carburante imbarcabile a bordo \x8a di 6000 libbre.",carburante);
  }
}

/* Calcolo carburante Hawker 850
*/
void Hawker_850()
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*2000;
  if(carburante<10000)
  {
  
   printf("\nIl carburante consigliato in libbre \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d libbre. Il limite massimo di carburante imbarcabile a bordo \x8a di 10000 libbre.",carburante);
  }
}
  
  /* Calcolo carburante CRJ 700
*/
void CRJ_700()
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
    minuti1=leggiCifra_minuti();
    minuti2=leggiCifra();
    printf("minuti");
  ore=ore1*10+ore2;
  minuti=minuti1*10+minuti2;
  convertominuti=(minuti/100);
  eet=ore+convertominuti;
  endurance=eet+0.4;
  printf("\nEndurance:%.2f ore",endurance);
  carburante=endurance*3400;
  if(carburante<11500)
  {
  
   printf("\nIl carburante consigliato in libbre \x8a:%d",carburante);
  }
  else
  { printf("\nAttenzione! Avresti caricato a bordo %d libbre. Il limite massimo di carburante imbarcabile a bordo \x8a di 11500 libbre.",carburante);
  }
}
  
int main(int argc, char *argv[])
{
  int scelta;
  scelta=1;
  printf(" ----------------------------------------------------");
   printf(" \n Calcolatore carburante della Royal Sky Service ");
   printf(" \n-----------------------------------------------------");
   printf("\n\n");
   /* password*/
   char buffer[256] = {0};
    char password[] = "Password";
    char c;
    int pos = 0;
    
    printf("%s", "Ciao pilota inserisci la password per continuare: ");
    do {
        c = getch();
        
        if( isprint(c) ) 
        {
            buffer[ pos++ ] = c;
            printf("%c", c);
        }
        else if( c == 8 && pos )
        {
            buffer[ pos-- ] = '\0';
            printf("%s", "\b \b");
        }
    } while( c != 13 );
    
    if( !strcmp(buffer, password) )
    { 
	
        printf("\n%s\n", "Logged on succesfully!");
        //se la password coincide..
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
      case 2: 
                Da42();
                break;
      case 3: 
      			Phenom_100();
      			break;
      case 4: 
      			Phenom_300();
      			break;
      			
      case 5:   Learjet_45();
	            break;	
		
	  case 6:   Hawker_850();
	            break;
			
	  case 7:   CRJ_700();
	            break;				
									
	  case 0:
                printf("Grazie per aver usato il nostro programma\n");
                break;
      default: 
                printf("Per favore introdurre una opzione valida\n");              
                  
    }
  
  
  }
}
    else
        printf("\n%s\n", "Incorrect login!");

 
 
  
 
  	
 
  
  
  
  
  system("PAUSE");	
  return 0;
}


