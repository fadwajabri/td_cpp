#include "MatrixNumerical.h"
template <typename T>


MatrixNumerical<T>::MatrixNumerical() : MatrixBase<T>() {}


template <typename T>
MatrixNumerical<T>::MatrixNumerical(size_t r, size_t c) : MatrixBase<T>(r, c) {}

template class MatrixNumerical<int>;      
template class MatrixNumerical<double>;   
template class MatrixNumerical<float>; 