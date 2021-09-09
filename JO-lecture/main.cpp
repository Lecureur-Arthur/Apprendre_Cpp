#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    if (!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau
        cout << "+" << setfill('-') << setw(20) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << setfill(' ') << endl;
        do
        {
    //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau
                cout << "|" << setw(19) << left << pays << "|" << setw(9) << right << nbOr << "|" << setw(9)  << nbArgent << "|" << setw(9)  << nbBronze << "|" << endl;
            }
        } while (!leFichier.eof());
        // A compléter, affichage de la dernière ligne du tableau.
        cout << "+" << setfill('-') << setw(20) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << setfill(' ') << endl;
    }
    return 0;
}
