/*Fazer um programa que receba duas notas N1, N2 e o percentual de Frequência de um aluno e 
verifique a situação do aluno: (Aprovado –Reprovado –Prova Final)*/

#include <stdio.h>

int main ()
{
float n1, n2, freq, media;

printf("Informe sua Nota da N1: ");
scanf("%f",&n1);
printf("Informe sua Nota da N2: ");
scanf("%f",&n2);
printf("Informe sua frequencia de presenca: ");
scanf("%f",&freq);
media = (n1 + n2) / 2;

if (media >= 7.0 && freq >= 75) {
    printf("\nParabens!!! esta Aprovado");
    printf("\nSua media e: %.2f", media);
}
else if (media >= 5.0 && freq >= 75) {
    printf("\nTera que fazer a Prova Final");
    printf("\nSua media e: %.2f", media);
} 
else {
    printf("\nReprovado");
    printf("Sua media e: %.2f", media);
}


return 0;
}