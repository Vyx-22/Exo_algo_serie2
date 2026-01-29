#include <stdio.h>

float calcule_moyenne_tableau(float tableau[], int taille){

    float somme, moyenne;
     int indice;

     somme =0;
     for ( indice = 1; indice <= taille; indice++)
     {
        somme = somme + tableau[indice];
     }
     moyenne = somme / taille;
     return moyenne;
}

int compter_superieur_moyenne(float tableau[], int taille, float moyenne){

    int compteur, indice;
    compteur = 0;
    for (indice = 1; indice <= taille; indice++)
    {
        if (tableau[indice] > moyenne)
        {
            compteur = compteur +1;
        }
        
    }
    return compteur;
}

int main(void){
    float valeurs[10];
    float moyenne_valeurs;
    int nombre_superieurs_moyenne;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Entrez la valeur %d : ",i);
        scanf("%f",&valeurs[i]);
    }
    
    moyenne_valeurs = calcule_moyenne_tableau(valeurs, 10);
    printf("Moyenne : %f\n",moyenne_valeurs);

    nombre_superieurs_moyenne = compter_superieur_moyenne(valeurs, 10, moyenne_valeurs);
    printf("Nombre d'éléments supérieurs à la moyenne : %d\n",nombre_superieurs_moyenne);

    printf("Éléments supérieurs à la moyenne :");
    for (i = 1; i <= 10; i++)
    {
        if (valeurs[i] > moyenne_valeurs)
        {
            printf("%f\n",valeurs[i]);
        }
        
    }
    
}