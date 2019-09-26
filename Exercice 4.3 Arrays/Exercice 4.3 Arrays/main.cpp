#include<iostream>
#include<list>

/*EXERCICE 4.3
Vous avez les tableaux:
A: {4, 6, 19, 32, 104, 109}
B: {3, 8, 9, 10, 55, 105, 110}
C: {1, 5, 6}
Vous devez mettre le tableau B dans le tableau A tout en gardant l’ordre du plus petit au plus grand.
Puis en prenant le tableau C comme des index, supprimer les éléments aux indexs données.
*/

void DisplayList(std::list<int> l) {
	for (auto testB = l.begin(); testB != --l.end(); testB++) { // Boucle qui parcours mon tableau B
		std::cout << *testB << " ";
 	}
}

int main() 
{
	std::list <int> A = {4, 6, 19, 32, 104, 109};
	std::list <int> B = {3, 8, 9, 10, 55, 105, 110};
	std::list <int> C = {1, 5, 6};

	// Boucle qui lit B
	for (auto testB = B.begin(); testB != --B.end(); testB++) {

		int previous = *testB; // Previous valeur début de tableau = valeur du pointeur B
		auto nectIt = testB; // nectIt Pointeur de l'element suivant = pointeur B
		nectIt++; // Prochaine valeur du tableau
		int next = *nectIt; // next = valeur du pointeur suivant

		for (auto testA = A.begin(); testA != A.end(); ++testA) { // Boucle qui parcours mon tableau A

			int testValue = *testA; // Valeur du pointeur A

			if (testValue >= previous && testValue < next) { // valeur test plus grand ou egal ET  valeur test plus petit que le prochain element de mon tabeau

				std::cout << testValue << " est compris entre " << previous << " " << next << "\n";
				B.insert(nectIt, testValue); // inserer valeurs tableau A dans le tableau B AVANT
			}
		}

		std::cout << previous << " " << next << "\n";

		testB = --nectIt; // repositionnement du pointeur au bon endroit du tableau, parce que on change le tableau B.
	}

	DisplayList(B);





	system("pause");
	return EXIT_SUCCESS;
}