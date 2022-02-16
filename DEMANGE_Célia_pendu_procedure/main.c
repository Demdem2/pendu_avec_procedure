#include <stdio.h>
#include <stdlib.h>
#include <string.h>

                                        //Prototypes

//Proc�dure
void dessin_pendu ();
void condition_victoire ();
void bonne_ou_mauvaise_lettre ();
void affichage_lettre ();


     //DEBUT main

int main() {
//Variables
    int n_nbltr = 0; //Variable du nombre de lettres dans le mot
    int n_vie = 10; //Variable du nombre de vies du joueur, initialis�e � 10
    int n_mot[100]; //Nombre max de lettres du mot
    int n_win = 0; //Variable d�finissant la condition de victoire
    char s_mot[100]; //Chaine de caract�res entr�e par l'utilisateur, notre mot � deviner
    char c_ltrchoix; //Caract�re simple, lettre que l'utilisateur va entrer pour deviner le mot

//DEBUT

    for (int i = 0; i <= 100; i++) {
        n_mot[i] = 0;
    } //Initialisation du tableau du mot, on met toutes les valeurs � 0 pour "faux"


//Initialisation et Instructions
    printf("Veuillez entrer le mot a deviner, en majuscules\n"); //On demande � l'utilisateur le mot � faire deviner, � entrer en majuscules
    scanf(" %s", s_mot); //On lit la r�ponse de l'utilisateur � l'instruction pr�c�dente et on stocke sa r�ponse dans une chaine de caract�res
    n_nbltr = strlen(s_mot); //On affecte une valeur � la variable de la longueur de notre mot � l'aide d'une commande qui va compter le nombre de caract�res
    system("cls"); //On efface l'�cran pour que la personne devant deviner ne puisse pas voir la r�ponse

//Jeu
    while ((n_vie > 0 && n_win != 1)) { //Boucle while du jeu, interrompue si l'une des deux conditions est fausse

        system("cls"); //On efface l'�cran � chaque nouvelle r�p�tition de la boucle

        void dessin_pendu ();


        printf("\n");

        int n_nbaffiche = 0; //On initialise une variable qui va se voir affecter le nombre de lettres trouv�es

        void affichage_lettre ();


        printf("Veuillez entrer une lettre majuscule:\n"); //On demande au joueur d'entrer une lettre
        scanf(" %c", &c_ltrchoix); //On affecte cette lettre � une variable

        int n_trouve = 0; //On initialise une variable qui permettra de dire si notre lettre est la bonne ou non

        void bonne_ou_mauvaise_lettre ();


    }
    system("cls"); //On efface l'�cran pour afficher un message de victoire ou de d�faite

    void condition_victoire ();

    system("pause>nul");
    return 0;
    //FIN
}
                                                    //FIN main

                                                    //Procedure

/*************************************************************************************************************************************************
BUT: Dessiner le pendu lorsqu'on perd une vie

ENTREE: le nombre de vie

SORTIE: l'avanc� du dessin du pendu

Description:
Cette proc�dure affiche l'avanc� de la vie du joueur gr�ce au dessin du pendu

*************************************************************************************************************************************************/

void dessin_pendu (){

    switch (n_vie) {

            case 10 : //Le joueur a 10 vies
                printf("\n");
                break;
            case 9 : //Le joueur a 9 vies
                printf("_|__\n"); //Le joueur perd une vie, on construit la potence
                break;
            case 8 : //Le joueur a 8 vies
                printf(" " "|\n"); //Le joueur perd une vie, on construit la potence
                printf("_|__\n");
                break;
            case 7 : //Le joueur a 7 vies
                printf(" " "|\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|\n");
                printf("_|__\n");
                break;
            case 6 : //Le joueur a 6 vies
                printf(" " "|\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|\n");
                printf(" " "|\n");
                printf("_|__\n");
                break;
            case 5 : //Le joueur a 5 vies
                printf(" " "|\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf("_|__\n");
                break;
            case 4 : //Le joueur a 4 vies
                printf("____________\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf("_|__\n");
                break;
            case 3 : //Le joueur a 3 vies
                printf("____________\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|" " " " " " " " " " " " " " " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf("_|__\n");
                break;
            case 2 : //Le joueur a 2 vies
                printf("____________\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|" " " " " " " " " " " " " " " "|\n");
                printf(" " "|" " " " " " " " " " " " " " " "O\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf("_|__\n");
                break;
            case 1 : //Le joueur a 1 vie
                printf("____________\n"); //Le joueur perd une vie, on construit la potence
                printf(" " "|" " " " " " " " " " " " " " " "|\n");
                printf(" " "|" " " " " " " " " " " " " " " "O\n");
                printf(" " "|" " " " " " " " " " "" " "/" "|" "\\\n");
                printf(" " "|\n");
                printf(" " "|\n");
                printf("_|__\n");
                break;
        }
}

/*************************************************************************************************************************************************
BUT: Exprimer la victoire ou la d�faite du joueur

ENTREE: le nombre de vie

SORTIE: afficher la victoire ou la d�faite aux joueurs

Description:
Cette proc�dure affiche la victoire ou la d�faite aux joueurs par un message
*************************************************************************************************************************************************/

void condition_victoire (){

    //Conditions de D�faite ou de Victoire

    if(n_vie==0){ //Si le joueur n'a plus de vies, donc si la condition n'est plus vraie, on affiche la suite, � savoir la potence compl�te, accompagn�e d'un message de Game Over
        printf("_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_" "_\n");
        printf(" " "|" " " " " " " " " " " " " " " "|\n");
        printf(" " "|" " " " " " " " " " " " " " " "O\n");
        printf(" " "|" " " " " " " " " " "" " "/" "|" "\\\n");
        printf(" " "|" " " " " " " " " " " " " "/" " " "\\\n");
        printf(" " "|\n");
        printf("_|__\n");
        printf("\n Vous avez perdu. Le mot a deviner etait: %s", s_mot); //Le message de Game Over, on affiche �galement le mot � deviner

    } else if (n_win == 1) { //Sinon, ici on contredit l'autre condition en ayant la variable qui vaut 1...
        printf("Le mot etait bien: %s\n\nFelicitations, vous avez gagne !", s_mot); //...et on affiche le mot ainsi qu'un message de f�licitations
    }

}

/*************************************************************************************************************************************************
BUT: Dire si la lettre ins�r�e est la bonne

ENTREE: une lettre

SORTIE: bonne ou mauvaise lettre

Description:
Cette proc�dure permet de v�rifier si les lettres ins�r�es par l'utilisateur se trouvent dans le mot cach�. Celle qui ne sont pas pr�sente dans le mot previennent le
programme que le joueur perd une vie.
*************************************************************************************************************************************************/

void bonne_ou_mauvaise_lettre (){




     for (int i = 0; i < n_nbltr; i++) {
            if(c_ltrchoix == s_mot[i]) { //On teste si notre lettre entr�e est pr�sente dans la chaine de caract�res
                n_mot[i] = 1; //Si oui, on affecte 1 � la position de la lettre...
                n_trouve = 1; //...et on affecte �galement 1 � la variable initialis�e pr�c�demment, pour dire que la lettre est la bonne
            }
        }

    if(n_trouve == 0){ //Si l'affectation n'est pas �gale � 1, c'est donc faux
            n_vie=n_vie - 1; //Alors on enl�ve une vie au joueur
    }

}

/*************************************************************************************************************************************************
BUT: afficher la lettre

ENTREE: /

SORTIE: afficher la lettre au bon emplacement ou non

Description:
Cette proc�dure permet de placer les lettres trouv�es par l'utilisateur au bon endroit. Sinon,un tiret y est plac� pour montrer l'erreur
*************************************************************************************************************************************************/

void affichage_lettre (){

    for (int i = 0; i < n_nbltr; i++) {
                if (n_mot[i]==1){ //Ici le 1 d�finit le "vrai" dans notre jeu. 1: On a trouv� le caract�re, 0: On n'a pas trouv� le caract�re.
                    printf("%c ", s_mot[i]); //On affiche la lettre trouv�e � sa place
                    n_nbaffiche++; //On incr�mente pour chaque lettre trouv�e cette variable
                } else {
                    printf("_ "); //Autrement, si on n'a pas trouv�, on garde un vide, symbolis� par un tiret
                }
    }

    printf("\n\n");

    if(n_nbaffiche==n_nbltr){ //Condition de victoire, si notre nombre de caract�res affich�s (et donc trouv�s) est �gal au nombre de caract�res dans le mot
        n_win=1; //On sort de notre while
        break;
    }
}

