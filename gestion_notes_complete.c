#include <stdio.h>
#include <stdbool.h>

int est_note_valide(float note)
{
    return (note >= 0) && (note <= 20);
}
 
float saisir_notes_tableau( float notes[],int nombre_notes){
    int indice;

    for ( indice = 1; indice <= nombre_notes; indice++)
    {
        do
        {
        printf("Entrez la note %d : ",indice);
        scanf("%f",&notes[indice]);
        if (! est_note_valide(notes[indice]))
        {
            printf("Note invalide. Recommencez\n");
        }
        
        } while (est_note_valide(notes[indice]) == 0);
    
    }
    return notes[indice];
}

float calcule_moyenne(float notes[], int nombre_notes){
    float somme;
    int indice;

    somme = 0;
    for (indice = 1; indice <= nombre_notes; indice++)
    {
        somme = somme + notes[indice];
    }
    return somme / nombre_notes;
}

float trouve_note_maximale(float notes[], int nombre_notes){
    float maximun;
    int indice;
     
    maximun = notes[1];
    for ( indice = 2; indice <= nombre_notes; indice++)
    {
        if (notes[indice] > maximun)
        {
            maximun = notes[indice];
        }
        
    }
    return maximun;

}

float trouve_note_minimale(float notes[], int nombre_notes){
    float minimum;
    int indice;
     
    minimum = notes[1];
    for ( indice = 2; indice <= nombre_notes; indice++)
    {
        if (notes[indice] < minimum)
        {
            minimum = notes[indice];
        }
        
    }
    return minimum;

}

int compter_notes_superieur_seuil(float notes[], int nombre_notes, float seuil){

    int compteur, indice;

    compteur = 0;
    for ( indice = 1; indice <= nombre_notes; indice++)
    {
        if (notes[indice] >= seuil)
        {
            compteur = compteur + 1;
        }
        
    }
    return compteur;
}

int main(void){
    float notes_etudiants[20];
    int nombre_etudiants;
    float moyenne, note_max, note_min;
    int nombre_admis;

    printf("Combien d'étudiants ? ");
    scanf("%d",&nombre_etudiants);
    
    if (nombre_etudiants > 0 && nombre_etudiants <= 20)
    {
        notes_etudiants[20] = saisir_notes_tableau(notes_etudiants, nombre_etudiants);

        moyenne = calcule_moyenne(notes_etudiants,nombre_etudiants),
        note_max = trouve_note_maximale(notes_etudiants, nombre_etudiants);
        note_min = trouve_note_minimale(notes_etudiants,nombre_etudiants);
        nombre_admis = compter_notes_superieur_seuil(notes_etudiants,nombre_etudiants,10);

        printf("=== Statistiques ===\n");
        printf("Moyenne : %.2f\n",moyenne);
        printf("Note maximale : %.2f\n",note_max);
        printf("Note minimale : %.2f\n",note_min);
        printf("Nombre d'admis : %d\n",nombre_admis);
    } 
    else
    {
        printf("Nombre d'étudiants invalide");
    }

    return 0;
}