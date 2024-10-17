#include <iostream>
#include "MatrixNumerical.h"

int main() {
    MatrixNumerical<int> matrix(3, 3);
    matrix.addElement(0, 0, 1);
    matrix.addElement(0, 1, 2);
    matrix.addElement(0, 2, 3);
    matrix.addElement(1, 0, 4);
    matrix.addElement(1, 1, 5);
    matrix.addElement(1, 2, 6);
    matrix.addElement(2, 0, 7);
    matrix.addElement(2, 1, 8);
    matrix.addElement(2, 2, 9);

    std::cout << "Matrice :\n";
    matrix.Display();

    int element = matrix.getElement(1, 1);
    std::cout << "Élément à la position (1, 1) : " << element << "\n";


    matrix.addElement(3, 3, 10);

    return 0;
}
