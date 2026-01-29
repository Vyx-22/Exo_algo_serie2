#include <stdio.h>

int calculer_somme_entier(int nombre_entier){
    int somme,i;
    somme = 0;
    for ( i = 1; i <= nombre_entier; i++)
    {
        somme = somme + i;
    }
    return somme;
}


int main(void){

    int n, resultat;
    printf("Entrez un nombre entier positif : ");
    scanf("%d",&n);

    resultat = calculer_somme_entier(n);
    printf("La somme des %d premiers entiers est : %d",n,resultat);


    return 0;
}