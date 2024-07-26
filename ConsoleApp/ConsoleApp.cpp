#include <iostream>

using namespace std;

float getPercentage (int total, float value) {
    return value / total * 100;
}

int main()
{
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, candidate4 = 0, candidate5 = 0;
    int count;

    do {
        cout << "Eliga una opcion del 1 al 5: ";
        cin >> count;

        switch (count) {
        case 0: 
            cout << "Saliendo del programa...\n";
            break;
        case 1:
            candidate1 += 1;
            break;
        case 2:
            candidate2 += 1;
            break;
        case 3:
            candidate3 += 1;
            break;
        case 4:
            candidate4 += 1;
            break;
        case 5:
            candidate5 += 1;
            break;
        default:
            cout << count << " no es una opcion valida\n";
            break;
        }
        
    } while (count != 0);

    float totalVotes = candidate1 + candidate2 + candidate3 + candidate4 + candidate5;

    cout << "Total de votos " << totalVotes << "\n";

    cout << "Candidato 1: " << getPercentage(totalVotes, candidate1) << "% \n";
    cout << "Candidato 2: " << getPercentage(totalVotes, candidate2) << "% \n";
    cout << "Candidato 3: " << getPercentage(totalVotes, candidate3) << "% \n";
    cout << "Candidato 4: " << getPercentage(totalVotes, candidate4) << "% \n";
    cout << "Candidato 5: " << getPercentage(totalVotes, candidate5) << "% \n";

    return 0;
}
