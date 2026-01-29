#include <stdio.h>
#include <stdbool.h>


int est_divisible( int dividende, int diviseur)
{

    if (diviseur == 0)
    {
        return false;
    }
    
    return (dividende % diviseur == 0);
}
int main(void){

    int nombre1, nombre2;
    printf("Entrez le premier nombre : ");
    scanf("%d",&nombre1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d",&nombre2);

    if (est_divisible(nombre1, nombre2))
    {
        printf("%d est divisible par %d\n",nombre1,nombre2);
    }
    else
    {
        printf("%d n'est pas divisible par %d\n",nombre1,nombre2);
    }
    

    return 0;
}