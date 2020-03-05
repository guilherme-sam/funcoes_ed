/*6) Escreva uma função que recebe um inteiro (1, 2 ou 3) que representa um mês do
primeiro trimestre. A função deve exibir o mês representado ou a mensagem “valor
inválido” caso o valor seja diferente de 1, 2 e 3.*/

#include <stdio.h>
#include<stdlib.h>


void v_mes (int i){
    int x = i ; 

    if ( x > 3 || x < 1){
        printf (" valor inválido  ");
        return 0 ;
    }
    else 
        return x;

}

void case_mes (int i ){
    
    switch ( i ){ // posso usar o proprio x 
    case 1:  printf(" janeiro ")
        return 1; //verdade
    case 2:  printf(" fevereiro ")
        return 1; //verdade
    case 3:  printf(" marco ")
        return 1; //verdade


        
    
    default:
        printf ("valor inválido") ; 
        return 0 ; // mentira
        
    }

}