//
// Created by manie on 18/09/2020.
//

#ifndef ACTIVIDAD1_RANDOMMATRIX_H
#define ACTIVIDAD1_RANDOMMATRIX_H

#include "Matrix.h"
#include <stdlib.h>


class RandomMatrix : public Matrix{
public:
    RandomMatrix(int);
};

RandomMatrix::RandomMatrix(int size) {
    for (int i = 0; i < size; ++i) {
        std::vector<float> col;
        for (int j = 0; j < size; ++j) {
            float temp;
            do{
                temp = rand() % 20001 + (-10000);
            }while(temp<-10000 || temp > 10000);
            col.push_back( temp/100.f);
        }
        matrixData.push_back(col);
    }
}


#endif //ACTIVIDAD1_RANDOMMATRIX_H
