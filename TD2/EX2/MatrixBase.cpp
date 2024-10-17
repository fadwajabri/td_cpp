#include "MatrixBase.h"

template <typename T>
MatrixBase<T>::MatrixBase() : rows(0), cols(0) {}

template <typename T>
MatrixBase<T>::MatrixBase(size_t r, size_t c) : rows(r), cols(c), data(r, std::vector<T>(c)) {}

template <typename T>
void MatrixBase<T>::addElement(size_t row, size_t col, const T& element) {
    if (row < rows && col < cols) {
        data[row][col] = element;
    } else {
        std::cerr << "Erreur : indices en dehors des limites.\n";
    }
}

template <typename T>
T MatrixBase<T>::getElement(size_t row, size_t col) const {
    if (row < rows && col < cols) {
        return data[row][col];
    } else {
        std::cerr << "Erreur : indices en dehors des limites.\n";
        return T();  
    }
}


template <typename T>
size_t MatrixBase<T>::getRows() const {
    return rows;
}

template <typename T>
size_t MatrixBase<T>::getCols() const {
    return cols;
}

template <typename T>
void MatrixBase<T>::Display() const {
    for (const auto& row : data) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << "\n";
    }
}

template class MatrixBase<int>;    
template class MatrixBase<double>; 
template class MatrixBase<float>;  