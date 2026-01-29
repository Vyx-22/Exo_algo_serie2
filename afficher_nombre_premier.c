#include <stdio.h>
#include <stdbool.h>

bool est_nombre_premier(int nombre){
    int diviseur;

    if (nombre <= 1)
    {
        return false;
    }
    if (nombre == 2)
    {
        return true;
    }
    if (nombre % 2 == 0)
    {
        return false;
    }
    for ( diviseur = 3; diviseur <= -1; diviseur = diviseur+2)
    {
       if (nombre % diviseur == 0)
       {
            return false;
       }
       
    }
    return true;
}

int main(void){

    int limite, nombre, compteur;

    printf("Entrez la limite : ");
    scanf("%d",&limite);

    printf("Nombres premiers inférieurs à %d : ",limite);
    compteur = 0;

    for ( nombre = 2; nombre < limite; nombre++)
    {
        if (est_nombre_premier(nombre))
        {
            printf("%d\n",nombre);
            compteur = compteur + 1;
        }
    }
    
    printf("Total : %d nombrez premiers trouvés",compteur);

    return 0;
}