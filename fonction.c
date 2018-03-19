#include <stdio.h>
#include <stdlib.h>

int cannibales(){
	int valeur;	
	printf("Combien de cannibales voulez-vous faire traverser ? ");
	scanf("%d",&valeur);
	return valeur;
}

int missionnaires(){
	int valeur;	
	printf("Combien de missionaires voulez-vous faire traverser ? ");
	scanf("%d",&valeur);
	return valeur;
}

int tourJeu(int nbMis, int nbCan){

	int calculMis, calculCan, nbCanA = 0, nbMisA = 0;

	while(1){

		calculMis = 0;
		calculCan = 0;
	
		printf("La barque est sur la rive de départ\n");
		printf("- rive de départ : %d missionnaire(s) et %d cannibale(s)\n",nbMis,nbCan);
		printf("- rive d'arrivée : %d missionnaire(s) et %d cannibale(s)\n",nbMisA,nbCanA);

		do{
		calculMis = missionnaires;
		calculCan = cannibales;
		}while((calculMis > nbMis) || (calculCan > nbCan));

		printf("On fais traverser %d missionaire(s) et %d cannibale(s)\n", calculMis, calculCan);
	
		nbMis -= calculMis;
		nbCan -= calculCan;

		nbMisA += calculMis;
		nbCanA += calculCan;

		printf("La barque est sur la rive d'arrivée\n");
		printf("- rive de départ : %d missionnaire(s) et %d cannibale(s)\n",nbMis,nbCan);
		printf("- rive d'arrivée : %d missionnaire(s) et %d cannibale(s)\n",nbMisA,nbCanA);
	
		if(nbCan > nbMis) {
			printf("Les cannibales mangent les missionaires sur la rive de départ\n Vous avez perdu la partie.");
			return 0;
		}

		if(nbCanA > nbMisA) {
			printf("Les cannibales mangent les missionaires sur la rive d'arrivée\n Vous avez perdu la partie.");
			return 0;
		}
		
		if(nbCanA == nbMisA){
			printf("Les cannibales et les missionaires sont passés\n Vous avez gagné !");
			return 1;	
		}	
	}
}

int main(){
	return 0;
}
