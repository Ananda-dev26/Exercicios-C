/*Fazer um programa que receba o peso e a altura de uma pessoa e calcule o seu IMC Índice de 
Massa Corporal.  IMC=peso/(altura X altura) Verifique se o indivíduo está no peso ideal. 
IMC>=18.5 e IMC<25
• Menor que 18,5: Magreza (abaixo do peso)
• Entre 18,5 e 24,9: Peso normal (saudável)
• Entre 25,0 e 29,9: Sobrepeso (pré-obesidade)
• Entre 30,0 e 34,9: Obesidade Grau I
• Entre 35,0 e 39,9: Obesidade Grau II
• Maior ou igual a 40,0: Obesidade Grau III (obesidade grave ou*/

#include <stdio.h>

int main ()
{
float peso, altura, imc;

printf("Informe seu peso: ");
scanf("%f",&peso);
printf("Informe sua altura: ");
scanf("%f",&altura);
imc = peso / (altura * altura);

if (imc < 18.5) {
    printf("Voce esta abaixo do peso!");
} 
else if (imc >= 18.5 && imc < 25) {
    printf("Voce esta no peso ideal!");
} 
else if (imc >= 25 && imc < 30) {
    printf("Voce esta com sobrepeso!");
} 
else if (imc >= 30 && imc < 35) {
    printf("Voce esta com obesidade Grau 1");
}
else if (imc >= 35 && imc < 40) {
    printf("Voce esta com obesidade Grau 2");
} 
else {
    printf("Voce esta com obesidade Grau 3 que e grave");
}
return 0;
}