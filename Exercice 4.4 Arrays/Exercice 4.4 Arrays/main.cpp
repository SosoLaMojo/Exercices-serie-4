#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

/*EXERCICE 4.4
Créer un programme qui va simuler un combat entre un dragon et 10 cochons (Les cochons sont dans la même équipe et s’attaquent uniquement au dragon).
Cela implique que chaque créature commence avec un certain nombre de points de vie (dragon : 100, cochons : 10).
Ensuite chaque tour le dragons va choisir un cochon au hasard et va lui infliger entre 5 et 20 points de dégâts.
Puis ensuite tous les cochons VIVANT vont attaquer le dragon pour les infliger des dégâts entre 1 et 5.
Si une créature voit sa vie être égale ou plus petite que 0 alors elle meurt.
Il faut donc indiquer à chaque tour:
Le numéro du tour
Les dégâts totaux infligés au dragons
Les dégâts que s’est pris le cochon
Si il y a un mort il faut le dire
Si le dragon est mort ou que tous les cochons le sont il faut indiquer qui a gagné
*/




int main() {

	int dragon;
	int vieDragon = 100;
	int vieCochons = 10;
	int nbrCochons[10];
	int nbrTour = 0;
	int cochonsDegats[] = {1,2,3,4,5};
	int dragonDegats[] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


	while (nbrTour + 1) {


		
		if (vieDragon <= 0) {

			std::cout << "Le dragon est mort \n";
			std::cout << " Les cochons ont gagnés! \n";

		}

		if (vieCochons <= 0) {

			std::cout << "les cochons sont morts! \n";
			std::cout << " Le dragon a gagné! \n";

		}


	}


	system("pause");
	return EXIT_SUCCESS;
}