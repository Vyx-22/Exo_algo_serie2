#include <stdio.h>

float celsius_vers_fahrenheit(float celdius){
    float fahrenheit;
    fahrenheit = (celdius *9 / 5) +32;
    return fahrenheit;
}

float fahrenheit_vers_celsus( float fahrenheit){
    float celsuis;
    celsuis = (fahrenheit -32) * 5 /9;
    return celsuis;
}

int main(void){
    float temperature, temperature_convertie;
    int choix;

    printf("Choisissez la conversion :\n");
    printf("1. Celsius vers Fahrenheit \n");
    printf( "2. Fahrenheit vers Celsius \n");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1 :
        printf("Entrez la température en Celsius : ");
        scanf("%f",&temperature);
        temperature_convertie = celsius_vers_fahrenheit(temperature);
        printf("%f °C = %f °F",temperature,temperature_convertie);
        break;

    case  2 :
        printf("Entrez la température en Fahrenheit : ");
        scanf("%f",&temperature);
        temperature_convertie = fahrenheit_vers_celsus(temperature);
        printf("%f °F = %f °C",temperature,temperature_convertie);
        break;

    default: printf("Choix invalide");
        break;
    }
}