/*acquisire da tastiera 5 volte due numeri naturali. Si considerino i 
  naturali acquisiti come il dividendo ed il divisore di una divisione. Dopo
  avere acquisito tutti i naturali, visualizzare il quoziente intero ed il resto
  di ciascuna divisione
  */
  

#include <stdio.h> 
/* libreria che contiene tutte quelle funzioni utili alle operazioni di input e output,
stdio è l'abbreviazione di Standard Input Output. Permette di comunicare con i dispositivi
standard di strem di input (tastiera), di output (tastiera, stampante) e di input/output (files);
mi permette di utilizzare le funzioni  scanf() e printf() del programma.
*/
#include <stdlib.h>
#define DIM 5
/*int main (void){
	
	int i, divisore[DIM], dividendo[DIM], quoziente, resto;
	for (i=0; i<DIM; i++){
		scanf("%d/%d", &dividendo[i], &divisore[i]);
	}
	for (i=0; i<DIM; i++){
		quoziente = dividendo[i]/divisore[i];
		resto= dividendo[i]%divisore[i];
		printf("Quoziente e resto di %d/%d: %d e %d \n", dividendo[i], divisore[i], quoziente, resto);
	}*/
	
	/*
	int i, n=0, num[DIM];
	
	printf("inserire un numero ->");
	do{
		scanf("%d, ", &num[n]);
		printf("\n");
		n++;
	
	}while (n<DIM);
	*/
	
 int main(){
  int c;
  while(( c=getchar()) != EOF) 
  putchar(c);
  /* il modello I/O prevede due operazioni base: 
     - scrivere un carattere sul canale di output putchar (ch);
     - leggere un carattere dal canale di input ch=getchar();
  */ 
	system("pause");
	return 0;
}


