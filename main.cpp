#include <iostream>
#include "MatrixPrinter.h"

int main() {
    MatrixPrinter printer;
    std::vector<std::vector<int>> matriz{{1,2,3},{1,2,3},{1,2,3}};

    printer.PrintMatrix<int>(matriz, std::cout);

    return 0;
}