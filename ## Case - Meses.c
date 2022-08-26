#include <stdio.h>

void main(){
int valora=0, valorb=0, total=0, contador=0;

printf("Informe o valor para realizar a tabuada: ");
scanf("%d", &valora);


    for(valorb=0;valorb<=10;valorb++){
    
    //while(valorb<=10){
        
        total=valora*valorb;
        printf("%d X %d = %d\n", valora, valorb, total);
       
       // valorb++;
    }

/*
    do{
            total=valora*valorb;
            printf("%d X %d = %d\n", valora, valorb, total);
        valorb++;
    }while(valorb<=10);
*/

}