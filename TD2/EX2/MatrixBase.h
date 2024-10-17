#ifndef MATRIXBASE_H
#define MATRIXBASE_H
#include <vector>
#include <iostream>
#include <cstddef>


template <typename T>
class MatrixBase{
    public:
        MatrixBase();
        MatrixBase(size_t , size_t);
        void addElement(size_t, size_t, T);
        T getElement(size_t , size_t ) const;
        size_t getRows() const;
        size_t getCols() const;
        void Display() const;
    protected:
  
    size_t rows;  
    size_t cols; 
    std::vector<std::vector<T>> data;
};
#endif

