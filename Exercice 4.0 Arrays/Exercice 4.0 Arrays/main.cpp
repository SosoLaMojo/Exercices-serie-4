#include <iostream>

/*EXERCICE 4.0
Demander à l’utilisateur d’entrer 10 entier compris entre -infini et +infini 
puis une fois les 10 entier rentrer, indiquer tout ceux qui sont supérieur à 0
*/


int main()
{

	const int taille = 10;
	int entiers[taille];
	int indice_nbr_max = 0;

	std::cout << "Entrer dix entiers compris entre -infini et +infini \n";

	for (int i = 0; i < taille; i++) {

		std::cin >> entiers[i];

	}

	for (int i = 0; i < taille; i++ ) {

		if (entiers[indice_nbr_max] > entiers[i]) {

			indice_nbr_max = i;

		}

	}

	std::cout << " Le nombre le plus grand est: " <<entiers[indice_nbr_max] << "\n";

	system("pause");
	return EXIT_SUCCESS;
}