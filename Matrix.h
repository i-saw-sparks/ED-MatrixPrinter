//
// Created by manie on 18/09/2020.
//

#ifndef ACTIVIDAD1_MATRIX_H
#define ACTIVIDAD1_MATRIX_H

#include <vector>

class Matrix {

protected:
    int size;
    std::vector<std::vector<float>> matrixData;
public:
    Matrix();
    Matrix(int n);
    std::vector<std::vector<float>> getMatrixData();
    Matrix operator+(const Matrix &);
    Matrix operator*(const Matrix &);

};


#endif //ACTIVIDAD1_MATRIX_H
