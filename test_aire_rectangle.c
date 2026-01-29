#include <stdio.h>

float calculer_aire_rectangle(float longueur, float largeur)
{
    float aire;
    aire = longueur * largeur;
    return aire;
}


int main(void){

    float longueur_rectangle, largueur_rectangle, aire_rectangle;
    printf("Entrez la longueur : ");
    scanf("%f",&longueur_rectangle);
    printf("Entrez la largueur : ");
    scanf("%f",&largueur_rectangle);

    aire_rectangle = calculer_aire_rectangle(longueur_rectangle,largueur_rectangle);
    printf("L'aire du rectangle est : %f\n",aire_rectangle);


    return 0;
}