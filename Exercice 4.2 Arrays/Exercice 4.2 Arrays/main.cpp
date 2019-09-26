#include<iostream>
#include<vector>

/* EXERCICE 4.2
Créer un programme qui demande à l’utilisateur d’entrer un entier n et donner le nième terme de la suite de fibonacci.
Cette fois-ci, le programme doit utiliser un tableau pour calculer tout les termes déjà calculer.
*/

unsigned int fib(int n) {

	unsigned int fib1 = 0;
	unsigned int fib2 = 1;
	unsigned int nbr;
	unsigned int resultat;

	std::vector <unsigned int> fibonacci;

	if (n == 1) {

		fibonacci.push_back(fib1);

	}

	else if (n == 2) {

		fibonacci.push_back(fib2);

	}

	else {

		for (int i = 2; i < n; ++i) {

			nbr = fib1 + fib2;

			fibonacci.push_back(nbr);

			fib1 = fib2;
			fib2 = nbr;

		}

	}
	
	resultat = fibonacci.back();

	return resultat;

}

int main()
{

	unsigned int n;
	unsigned int fibo;

	std::cout << "Entrer le nombre de termes de fibonacci: \n";
	std::cin >> n;

	fibo = fib(n);

	std::cout << "Le terme de fibonacci est: " << n << "\n";

	system("pause");
	return EXIT_SUCCESS;
}