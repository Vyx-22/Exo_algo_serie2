#include <stdio.h>

int calculer_PGCD(int nombre1, int nombre2){
    int a, b, reste;
    a = nombre1;
    b = nombre2;

    while (b != 0)
    {
        reste = (a % b );
        a = b;
        b = reste;
    }

    return a;
}

int main(void){
    int premier, deuxieme, pgcd;

    printf("Entrez le premier nombre : ");
    scanf("%d",&premier);
    printf("Entrez le deuxième nombre : ");
    scanf("%d",&deuxieme);

    pgcd = calculer_PGCD(premier,deuxieme);
    printf("Le PGCD de %d et %d est : %d",premier,deuxieme,pgcd);

    
}