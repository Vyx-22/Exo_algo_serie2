#include <stdio.h>

int est_note_valide(float note)
{
    return (note >= 0) && (note <= 20);
}

float saisir_note_valide(){
    float note;

    do
    {
       printf("Entrez une note (entre 0 et 20) : ");
       scanf("%f",&note);
       if (! est_note_valide(note))
       {
        printf("Erreur : la note doit être entre 0 et 20\n");
       }
       
    } while (est_note_valide(note) == 0);
    return note;
    
}
float Calculer_moyenne_tableau(int taille, float notes[taille]){

    int i;
    float somme, moyenne;

    
    //Calcul de la somme
    somme = 0;
    for (i = 1; i <= taille; i++)
    {
       somme = somme + notes[i];
    }

    //Calcul de la moyenne
    moyenne = somme /taille;

    return moyenne;
}

int main(void){
    float note[5];
    int indice;
    float moyenne_notes;

    for ( indice = 1; indice <= 5; indice++)
    {
        printf("Note de l'étudiant %d\n",indice);
        note[indice] = saisir_note_valide();
    }


    moyenne_notes = Calculer_moyenne_tableau(5,note);
    printf("Moyenne de la classe : %f ",moyenne_notes);


    return 0;
}