#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

/*EXERCICE 4.4
Cr�er un programme qui va simuler un combat entre un dragon et 10 cochons (Les cochons sont dans la m�me �quipe et s�attaquent uniquement au dragon).
Cela implique que chaque cr�ature commence avec un certain nombre de points de vie (dragon : 100, cochons : 10).
Ensuite chaque tour le dragons va choisir un cochon au hasard et va lui infliger entre 5 et 20 points de d�g�ts.
Puis ensuite tous les cochons VIVANT vont attaquer le dragon pour les infliger des d�g�ts entre 1 et 5.
Si une cr�ature voit sa vie �tre �gale ou plus petite que 0 alors elle meurt.
Il faut donc indiquer � chaque tour:
Le num�ro du tour
Les d�g�ts totaux inflig�s au dragons
Les d�g�ts que s�est pris le cochon
Si il y a un mort il faut le dire
Si le dragon est mort ou que tous les cochons le sont il faut indiquer qui a gagn�
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
			std::cout << " Les cochons ont gagn�s! \n";

		}

		if (vieCochons <= 0) {

			std::cout << "les cochons sont morts! \n";
			std::cout << " Le dragon a gagn�! \n";

		}


	}


	system("pause");
	return EXIT_SUCCESS;
}