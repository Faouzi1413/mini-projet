#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define taille 100

char titre[taille][20];
char auteur[taille][20];
float prix[taille];
int quantite[taille];
char recherche[20];

int i, n , j , choix , found =0;

int main()
{
    //step 1

    printf ("veuillez entrer quantite des livre \n");
    scanf ("%d", &n);




    for (i = 0 ; i < n ; i ++)
    {
        printf ("les donnes du livre %d \n", i+1);
        printf ("\n le titre : ");
        scanf("%s", titre[i]);
        printf ("\nauteur :");
        scanf("%s", auteur[i]);
        printf ("\nprix :");
        scanf ("%f",&prix[i]);


    }

    //step 2

    printf ("veuillez entrer votre choix :\n");
    printf ("1 = pour affiche la liste des livre \n");
    printf ("2 = pour recherche to find a book \n");
    printf ("quitter un programme entrer autre nombre :\n");
    scanf ("%d", &choix);



    switch (choix) {
        case  1 :

        printf ("la liste des livres est :\n");

        for (i = 0 ; i < n ; i++){
            printf ("livre :%d\n", i+1);
            printf ("titre : %s \n", titre[i]);
            printf ("auteur : %s\n", auteur[i]);
            printf ("prix : %.2f\n" , prix[i]);

        }
        break ;

        case 2 :

            printf ("veuillez entrer le titre de livre  :\n");
            scanf ("%s",recherche);

            for (i = 0 ; i < n ; i ++ )
            {
                j = 0;

                while (recherche[j] == titre[i][j] && titre[i][j] != '\0' && recherche[j] != '\0')
                {
                    j ++ ;
                }
                if ( titre[i][j] == '\0' && recherche[j] == '\0')
                {
                    printf ("titre : %s \n", titre[i]);
                    printf ("auteur : %s \n", auteur[i]);
                    printf ("prix : %.2f \n", prix[i]);

                    found = 1 ;

                    break ;
                }
            }
               if (found == 0)
                printf ("ce livre n'est trouve pas !\n");

             break ;


        default :
            break ;


    }













    return 0;
}
