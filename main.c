#include <stdlib.h>
#include <stdio.h>

int main(){
	/* codes */
	int nb1;
	int nb2;
	char operateur;

	int resultat;

	/* Choix de l'opérateur */
	printf("Bonjour ! Choisissez un opérateur parmi : +, -, *, /, %% : \n");
	scanf("%s", &operateur);

	/* Choix du premier nombre */
	printf("Choisissez un premier nombre entier : \n");
	scanf("%d", &nb1);
	/* Choix du second nombre */
	printf("Choisissez votre second nombre : \n");
	scanf("%d", &nb2);

	if (operateur == '+'){
		printf("addition\n");
		resultat = nb1 + nb2;
	} else if (operateur == '-'){
		printf("soustraction\n");
		resultat = nb1 - nb2;
	} else if (operateur == '*'){
		printf("multiplication\n");
		resultat = nb1 * nb2;
	} else if (operateur == '/'){
		printf("division\n");
		resultat = nb1 / nb2;
	} else if (operateur == '%'){
		printf("modulo\n");
		resultat = nb1 % nb2;
	} else {
		printf("L'opérateur n'est pas reconnu !\n");
	}

	exit(0);
}