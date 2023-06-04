#include <stdio.h>



int main(){
    float imc = 0.0;
    float mult = 0.0;
    int idade = 0;
    float altura = 0.0;
    int peso = 0;
    char nome[50] = "";
   
    printf("Digite a idade:\n");
    scanf("%d", &idade);
   
    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o peso:\n");
    scanf("%d", &peso);

    printf("Digite o nome:\n");
    scanf("%s", nome);
       
    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("peso: %.d.\n", peso);
    printf("Nome: %s.\n", nome);
    mult = altura * altura;
    imc =  peso / mult;
   
    printf("IMC: %.2f.\n", imc);

}