#include <stdio.h>
/*
Acima de 40,0. Obesidade. grau III. ...
Entre 35,0 e 39,9. Obesidade. grau II. ...
Entre 30,0 e 34,9. Obesidade grau I. Sinal de alerta! ...
Entre 25,0 e 29,9. Sobrepeso. ...
Entre 18,6 e 24,9. Normal. ...
18,5 ou menos. Abaixo do normal.

*/


int main(){
    float imc = 0.0;
    float mult = 0.0;
    int idade = 0;
    float altura = 0.0;
    float peso = 0;
    char nome[50] = "";
   
    printf("Digite a idade:\n");
    scanf("%i", &idade);
   
    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o peso:\n");
    scanf("%f", &peso);

    printf("Digite o nome:\n");
    scanf("%s", nome);
       
    printf("Dados informados:\n");
    printf("Idade: %i anos \n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("peso: %.2f.\n", peso);
    printf("Nome: %s.\n", nome);
    mult = altura * altura;
    imc =  peso / mult;
   
    printf("IMC: %.2f.\n", imc);
    if(imc > 25 && imc < 29.9 ){
        printf("IMC: %.2f.  Entre 25,0 e 29,9. Sobrepeso. .\n", imc);
    }
    if(imc > 30 && imc < 34.9 ){
        printf("IMC: %.2f. Entre 30,0 e 34,9. Obesidade grau I. Sinal de alerta! ... .\n", imc);
    }
     if(imc > 35 && imc < 39.9 ){
        printf("IMC: %.2f.Entre 35,0 e 39,9. Obesidade. grau II. ... .\n", imc);
    }
}