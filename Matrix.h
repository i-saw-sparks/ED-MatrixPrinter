//
// Created by manie on 18/09/2020.
//

#ifndef ACTIVIDAD1_MATRIX_H
#define ACTIVIDAD1_MATRIX_H

#include <vector>

class Matrix {
protected:
    std::vector<std::vector<float>> matrixData;
public:
    Matrix();
    std::vector<std::vector<float>> getMatrixData();
    Matrix operator+(const Matrix &);
    Matrix operator*(const Matrix &);

};


Matrix Matrix::operator+(const Matrix &argMat) {
    Matrix res;
    for (int i = 0; i < matrixData.size(); ++i) {
        std::vector<float> vec;
        for (int j = 0; j < matrixData.size(); ++j) {
            vec.push_back(matrixData[i][j] + argMat.matrixData[i][j]);
        }
        res.matrixData.push_back(vec);
    }
    return res;
}

Matrix Matrix::operator*(const Matrix &argMat) {
    Matrix res;
    for (int i = 0; i < matrixData.size(); ++i) {
        std::vector<float> vec;
        for (int j = 0; j < matrixData.size(); ++j) {
            vec.push_back(matrixData[i][j] * argMat.matrixData[i][j]);
        }
        res.matrixData.push_back(vec);
    }
    return res;
}


std::vector<std::vector<float>> Matrix::getMatrixData() {
    return matrixData;
}

Matrix::Matrix() {

}


#endif //ACTIVIDAD1_MATRIX_H
