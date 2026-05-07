#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Definindo Vari�veis
    int a = 18;

    //Conectivo L�gico E (AND) , Se UMA COMPARACAO for FALSA, N�o entra no bloco
    if(a > 5 && a > 15){
        printf("\n A variavel 'a' esta entre 5 e 15 ");
    }

    //Conectivo L�gico OU (OR) , Se UMA COMPARACAO for VERDADEIRA, j� entra no bloco
    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 ou 15 ");
    }

    //Misturando Conectivos
    if( (a > 5 && a < 15) || a == 20 ){
        printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20 ");
    }


}

