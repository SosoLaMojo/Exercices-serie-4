#include <iostream>
#include <math.h> 
#include <time.h>
#include <array>

/*EXERCICE 4.5
Créer le jeu du mastermind. Donc au début le programme doit choisir une combinaison de 4 pions en les
choisissant au hasard parmis 6 couleurs disponible (bleu, orange, jaune, rouge, noir, vert).
Ensuite chaque tour le joueur peut entrer une nouvelle combinaisons.
Le programme doit ensuite indiquer le nombre de couleurs correcte placée
au bon endroit et aussi indiquer les couleurs correctes mais pas au bon endroit.
*/


int main() {

	int i;
	
	srand(time(NULL));

	enum class Couleurs {

		Bleu,
		Orange,
		Jaune,
		Rouge,
		Noir,
		Vert

	};

	std::array<Couleurs, 4> couleursOrdi;



	for (int i = 0; i < 4; i++) {

		int choixOrdi = (rand() % 6);

		switch (choixOrdi) {

		case 0: 
			couleursOrdi[i] = Couleurs::Bleu;
			std::cout << "Bleu";
			break;

		case 1:
			couleursOrdi[i] = Couleurs::Orange;
			std::cout << "Orange";
			break;

		case 2: 
			couleursOrdi[i] = Couleurs::Jaune;
			std::cout << "Jaune";
			break;

		case 3: 
			couleursOrdi[i] = Couleurs::Rouge;
			std::cout << "Rouge";
			break;

		case 4: 
			couleursOrdi[i] = Couleurs::Noir;
			std::cout << "Noir";
			break;

		case 5: 
			couleursOrdi[i] = Couleurs::Vert;
			std::cout << "Vert";
			break;
		}

		std::cout << choixOrdi;

	}

	// Declaration tableau couleurs utilisateur au nombre de 4
	int choixUtilisateur[4];

	// Compteur de tours
	int compteurTour = 0;
	const int nbrTour = 12;

	while (compteurTour < nbrTour) {

		compteurTour++;

		std::cout << " Le tour en cours est: " << compteurTour << "\n";

		// Choix de couleurs de l'utilisateur
		for (int i = 0; i < 4; i++) {
			std::cout << "Couleurs " << i << " : \n";
			std::cin >> choixUtilisateur[i];
		}

	}

	system("pause");
	return EXIT_SUCCESS;
}