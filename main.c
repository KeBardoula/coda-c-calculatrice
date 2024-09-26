#include <stdlib.h>
#include <stdio.h>

int main(){
	/* codes */
	int nb1;
	int nb2;
	char operateur;

	/* Choix de l'opérateur */
	printf("Bonjour ! Choisissez un opérateur parmi : +, -, *, /, %% : \n");
	scanf("%s", operateur);

	/* Choix du premier nombre */
	printf("Choisissez un premier nombre entier : \n");
	scanf("%d", &nb1);
	/* Choix du second nombre */
	printf("Choisissez votre second nombre : \n");
	scanf("%d", &nb2);

	exit(0);
}