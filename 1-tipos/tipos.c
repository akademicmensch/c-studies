#include <stdio.h>  /*diretiva que será executada pelo pré-processador*/

/*int * numeros inteiros, ocupa 4 bytes (32 bits)
-> int idade = 25;
*/

/*float * ponto flutuante, ocupa 4 bytes
-> float altura = 1.75;
*/

/*double * ponto flutuante de dupla precisão, ocupa 8 butes
-> double preco = 19.99;
*/


/*char * caracter, ocupa 1 byte
-> char inicial = 'A';
*/


/*short/long * modificadores, podem ser usados com inteiro e flutuante
-> long int salario = 150000; (especifica o tamanho da variavel)
*/


/*unsigned * somente valores positivos
-> unsigned int idade = 25;
*/

/* operadores lógicos
&& - e
|| - ou
!  - negacao
*/


int main(){

    int a = 10;
    int b = 10;
    int soma = a +b;
    int sub = a-b;
    int produto = a*b;
    int divisao = a/b;
    int resto = a%b;

    int igual = a == b; //1 significa verdadeiro, 0 falso.

    float num1, num2, num3, media;
    printf("Digite 3 números: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    media = (num1 + num2 + num3) / 3;

    printf("A média é igual a %f\n", media);
    return 0;
}