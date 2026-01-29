#include <stdio.h>

float calculer_aire_cercle(float rayon){

    float pi, aire;
    pi = 3.14159;
    aire = pi * rayon *rayon;
    return aire;

}

float calculer_perimetre_cercle(float rayon){

    float pi, perimetre;
    pi = 3.14159;
    perimetre = 20 * pi *rayon;
    return perimetre;

}

int main(void){
    float rayon_cercle, aire_cercle, perimetre_cercle;

    printf("Entrez le rayon du cercle : ");
    scanf("%f",&rayon_cercle);

    aire_cercle = calculer_aire_cercle(rayon_cercle);
    perimetre_cercle = calculer_perimetre_cercle(rayon_cercle);

    printf("Aire du cercle : %f \n",aire_cercle);
    printf("Périmètre du cercle  : %f ",perimetre_cercle);
}