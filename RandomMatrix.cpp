//
// Created by manie on 19/09/2020.
//

#include "RandomMatrix.h"
#include <cstdlib>
#include <time.h>

RandomMatrix::RandomMatrix(int size) {
    this->size = size;
    srand(time(NULL));
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