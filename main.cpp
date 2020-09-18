#include <iostream>
#include "MatrixPrinter.h"
#include "TypeInfo.h"

int main() {
    bool stop = false;
    MatrixPrinter printer;
    do {
        int opc = 0;
        std::cout<<"\tMENU"<<std::endl<<std::endl
        <<"1 - Tama"<<char(164)<<"o y rango de los datos primitivos"<<std::endl
        <<"2 - Ejemplo de uso de Tipo de dato Estructurado"<<std::endl
        <<"3 - Salir"<<std::endl<<std::endl;
        std::cin>>opc;

        switch(opc){
            case 1: {
                std::vector<std::vector<double>> matriz{
                        TypeInfo<signed char>::getTypeInfo(),
                        TypeInfo<unsigned char>::getTypeInfo(),
                        TypeInfo<signed short int>::getTypeInfo(),
                        TypeInfo<unsigned short int>::getTypeInfo(),
                        TypeInfo<signed long int>::getTypeInfo(),
                        TypeInfo<unsigned long int>::getTypeInfo(),
                        TypeInfo<float>::getTypeInfo(),
                        TypeInfo<double>::getTypeInfo()
                };

                printer.SetColLabels({"Tipo de dato",
                                      "Bits",
                                      "Valor Minimo",
                                      "Valor maximo"});

                printer.SetRowLabels({"Caracter con signo",
                                      "Caracter sin signo",
                                      "Entero corto con signo",
                                      "Entero corto sin signo",
                                      "Entero largo con signo",
                                      "Entero largo sin signo",
                                      "Real de precision simple",
                                      "Real de doble presicion"});

                printer.PrintMatrix(matriz, std::cout);
                break;
            }

            default: {
                std::cout << std::endl << "Opcion no valida" << std::endl;
                break;
            }
        }

        stop = true;

    }while(!stop);
    return 0;
}