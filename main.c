/*
 *Este programa fue hecho con  el proposito de mostrar el resultado de la suma, resta, multiplicacion, y division de
 * dos numeros dados por el usuario.
 *
 * Autor: Mario Emilio Aguilar Chung
 * Fecha: 8/22/2018
 * Correo: A01411210@itesm.mx
 *
 */
#include <stdio.h>

int main() {
    //Se establecen las variables
    double num1;
    double num2;
    double sum;
    double rest;
    double mult;
    double div;

    //Se le pide al usuario que establezca los dos numeros
    printf("Este programa te ayudara a encontrar los resultados de la suma, resta, multiplicacion y division de dos numeros/n")
    printf("Introduzca un numero:");
    scanf("%lf", &num1);
    printf("Introduzca otro numero:");
    scanf("lf", &num2) ;

    //Se le dan los valores adecuados a las variables correspondientes a cada operacion
    sum = num1+ num2;
    rest = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    //Se muestra el resultado
    printf("El resultado de la suma es: %lf/n", sum);
    printf("El resultado de la resta es: %lf/n", rest);
    printf("El resultado de la multiplicacion es: %lf/n", mult);
    printf("El resultado de la division es: %lf/n", div);
}