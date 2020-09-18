//
// Created by manie on 17/09/2020.
//

#ifndef ACTIVIDAD1_MATRIXPRINTER_H
#define ACTIVIDAD1_MATRIXPRINTER_H

#include <vector>
#include <string>
#include <ostream>
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
    for(auto x : matrix){
        for(auto y : x){
            os<<y<<" ";
        }
        os<<std::endl;
    }
}


#endif //ACTIVIDAD1_MATRIXPRINTER_H
