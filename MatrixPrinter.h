//
// Created by manie on 17/09/2020.
//

#ifndef ACTIVIDAD1_MATRIXPRINTER_H
#define ACTIVIDAD1_MATRIXPRINTER_H

#include <vector>
#include <string>
#include <ostream>
#include <iomanip>
class MatrixPrinter {
private:
    std::vector<std::string> colLabels;
    std::vector<std::string> rowLabels;

public:
    MatrixPrinter();
    MatrixPrinter(std::vector<std::string>, std::vector<std::string>);

    void AddColLabel(std::string);
    void AddRowLabel(std::string);
    void SetColLabels(std::vector<std::string>);
    void SetRowLabels(std::vector<std::string>);

    template <typename T>
    void PrintMatrix(std::vector<std::vector<T>> &, std::ostream &) const;
};

template <typename T>
void MatrixPrinter::PrintMatrix(std::vector<std::vector<T>> &matrix, std::ostream &os) const {
    std::vector<std::string> colLabelsTemp = colLabels;
    std::vector<std::string> rowLabelsTemp = rowLabels;

    if(matrix.size() > colLabelsTemp.size()){
        int res = matrix.size() - colLabelsTemp.size();
        for (int i = 0; i < res; ++i) {
            colLabelsTemp.push_back(" ");
        }
    }

    for (auto x: matrix) {
        if(x.size() > rowLabelsTemp.size()){
            int res = x.size() - rowLabelsTemp.size();
            for (int i = 0; i < res; ++i) {
                rowLabelsTemp.push_back(" ");
            }
        }
    }

    os<<std::setw(10)<<" ";
    for(auto x : colLabelsTemp){
        os<<std::setw(10)<<x;
    }
    os<<std::endl;
    int i = 0;
    for(auto x : matrix){
        os<<std::setw(10)<<rowLabelsTemp[i];
        for(auto y : x) {
            os << std::setw(10) << y << std::setw(10);
        }
        os<<std::endl;
        i++;
    }
}


#endif //ACTIVIDAD1_MATRIXPRINTER_H
