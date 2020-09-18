#include <iostream>
#include "MatrixPrinter.h"

int main() {
    MatrixPrinter printer;
    std::vector<std::vector<int>> matriz{{100000,2,3},{1,2,3},{1,2,3}};
    printer.SetColLabels({"Hola", "Cola", "Chola"});
    printer.SetRowLabels({"NO", "si", "tal vez"});
    printer.PrintMatrix<int>(matriz, std::cout);

    return 0;
}