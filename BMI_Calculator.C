
// [EUA] Program created for educational use only
// EXAMPLE OF FUNCTIONALITY:
// INFORM YOUR WEIGHT: 70
// INFORM YOUR HEIGHT: 1.64
// YOUR BMI IS: 26.03

// [BR] Programa criado apenas para uso didático
// EXEMPLO DE FUNCIONALIDADE:
// INFORME O SEU PESO: 70
// INFORME A SUA ALTURA: 1.64
// SEU IMC É: 26.03

#include<stdio.h>
#include<stdlib.h>


int main (){

    float BMI;
    float HEIGHT;
    int WEIGHT;

// [EUA] Gets the weight value as input
// [BR] Obtem o valor de peso como entrada

        printf("INFORM YOUR WEIGHT: ");
    scanf("%i",&WEIGHT);

// [EUA] Gets the height value as input
// [BR] Obtem o valor de altura como entrada

        printf("INFORM YOUR HEIGHT: ");
    scanf("%f",&HEIGHT);

// [EUA] Calculate: weight/(height*height)
// [BR] Faz o calculo de: peso/(altura*altura)

    BMI = WEIGHT/(HEIGHT*HEIGHT);
        printf("YOUR BMI IS: %0.2f",BMI);


    return 0;
}
