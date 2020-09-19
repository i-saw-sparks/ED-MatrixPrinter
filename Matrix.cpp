//
// Created by manie on 19/09/2020.
//

#include "Matrix.h"


Matrix::Matrix() {}

Matrix::Matrix(int size) {
    this->size = size;
    matrixData = std::vector<std::vector<float>>(size, std::vector<float> (size, 0));
}

std::vector<std::vector<float>> Matrix::getMatrixData() {
    return matrixData;
}

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
    Matrix res(size);
    float temp[size];

    for(int fil = 0; fil < size; fil++){
        for (int col = 0; col < size; col++) {
            float suma = 0;
            for(int i = 0; i<size; i++){
                temp[i]=matrixData[fil][i]*argMat.matrixData[i][col];
            }
            for (int i = 0; i < size; i++) {
                suma = suma + temp[i];
            }
            res.matrixData[fil][col] = suma;
        }
    }

    return res;
}


