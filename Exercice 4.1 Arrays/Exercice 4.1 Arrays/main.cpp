#include <iostream>

/*EXERCICE 4.1
Écrire un programme qui demande à l’utilisateur d’entrer 10 entier.
Ensuite il faut afficher la plus petite et la plus grande valeur entrée par l’utilisateur.
*/


int main()
{

	const int taille = 10;
	int entiers[taille];
	int MIN;
	int MAX;
	

	std::cout << "Entrer dix entiers: \n";

	for (int i = 0; i < taille; i++) {

		std::cin >> entiers[i];

	}

	MIN = entiers[0];


	for (int i = 1; i < taille; i++) {



		if (MIN > entiers[i]) {

			MIN = entiers [i];

		}

	}

	MAX = MIN;

	for (int i = 0; i < taille; i++) {

		if (MAX < entiers[i]) {

			MAX = entiers[i];

		}

	}


		std::cout << "Le nombre le plus grand est: " << MAX << "\n";
		std::cout << "Le nombre le plus petit est: " << MIN << "\n";



	system("pause");
	return EXIT_SUCCESS;
}