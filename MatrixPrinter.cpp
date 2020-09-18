//
// Created by manie on 17/09/2020.
//

#include "MatrixPrinter.h"

MatrixPrinter::MatrixPrinter() {}

MatrixPrinter::MatrixPrinter(std::vector<std::string> rowLabels, std::vector<std::string> colLabels) {
    this->rowLabels = rowLabels;
    this->colLabels = colLabels;
}

void MatrixPrinter::AddColLabel(std::string data) {
    this->colLabels.push_back(data);
}

void MatrixPrinter::AddRowLabel(std::string data) {
    this->rowLabels.push_back(data);
}

void MatrixPrinter::SetColLabels(std::vector<std::string> colLabels) {
    this->colLabels = colLabels;
}

void MatrixPrinter::SetRowLabels(std::vector<std::string> rowLabels) {
    this->rowLabels = rowLabels;
}



