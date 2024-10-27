#include <stdio.h>  /*diretiva que será executada pelo pré-processador*/



int main(){

    int idade;


    printf("Digite a sua idade:");
    scanf("%d", &idade);

    int isPresidentSenator = idade >=35;
    int isDeputy = idade >= 18;

    if(isPresidentSenator){
        printf("Voce pode ser presidente ou senador\n");
        isPresidentSenator = 1;
    }else if(isDeputy){
        printf("Voce pode ser deputado\n");
        isDeputy = 1;
    }else{
        printf("Voce nao pode obter cargo politico eletivo algum\n");
    }

    int opcao = 2;

    switch (opcao)
    {
    case 1:
        printf("Nunca chegara aqui, apenas para fins de entendimento da estrutura");
        break;
    case 2:
        printf("Opcao 2, apenas para fins de entendimento da estrutura\n");
        break;
    default:
        break;
    }

    printf("Imprimir de 0 a 18\n");
    for(int i = 0; i <=18; i++){
        printf("i = %d \n", i);
    }

    printf("Reduzindo a idade digitada a 0\n");
    while(idade > 0){
        printf("idade é: %d \n", idade);
        idade--;
    }

    do
    {
        printf("Idade é zero aqui inicialmente, mas será incrementada em 1 para sair do loop\n");
        idade++;
    } while (idade == 0);
    
   
    return 0;
}

// break e continue -> break quebra a interação e continue apenas pula a atual interação