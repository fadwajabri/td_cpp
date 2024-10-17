#include "searching_algorithm.h"

int searching_algorithm::totalComparisons = 0;
int searching_algorithm::totalSearch = 0;

searching_algorithm::searching_algorithm() : numberComparisons(0) {}
searching_algorithm::~SearchingAlgorithm() {}

double searching_algorithm::averageComparisons() {
    if (totalSearch == 0) {
        return 0.0;
    }
    return static_cast<double>(totalComparisons) / totalSearch;
}

void searching_algorithm::displaySearchResults(std::ostream& os, int result, int target) {
    totalComparisons += numberComparisons;
    totalSearch++;

    os << "Résultat de la recherche pour " << target << " : ";
    if (result != -1) {
        os << "Trouvé à l'indice " << result << " après " << numberComparisons << " comparaisons.\n";
    } else {
        os << "Non trouvé après " << numberComparisons << " comparaisons.\n";
    }

    os << "Nombre total de comparaisons: " << totalComparisons << "\n";
    os << "Nombre total de recherches: " << totalSearch << "\n";
    os << "Comparaisons moyennes par recherche: " << averageComparisons() << "\n";
}
