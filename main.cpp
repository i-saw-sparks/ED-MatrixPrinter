#include <iostream>
#include "MatrixPrinter.h"
#include "TypeInfo.h"
#include "RandomMatrix.h"

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
                std::cout << std::defaultfloat;
                std::cout << std::setprecision(6);

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

            case 2: {
                int m_size = 0;
                std::cout << std::fixed;
                std::cout << std::setprecision(2);

                do {
                    std::cout << "A continuacion, se generaran dos matrices cuadradas aleatorias, "
                                 "se mostrara su contenido asi como el de la suma de amabas y su multiplicacion. "
                                 "De que tama" << char(164) << "o gustas que sean las matrices? (3 - 10)" << std::endl<< std::endl;
                    std::cin>>m_size;
                }while (m_size < 3 || m_size > 10);

                RandomMatrix rmt1(m_size);
                RandomMatrix rmt2(m_size);
                printer.SetRowLabels(std::vector<std::string>());
                printer.SetColLabels(std::vector<std::string>() = {"     "});
                std::vector<std::vector<float>> mtz;

                std::cout<<"Matriz 1";
                mtz = rmt1.getMatrixData();
                printer.PrintMatrix(mtz, std::cout);

                std::cout<<std::endl<<"Matriz 2";
                mtz = rmt2.getMatrixData();
                printer.PrintMatrix(mtz, std::cout);

                std::cout<<std::endl<<"Suma de matrices";
                mtz = (rmt1 + rmt2).getMatrixData();
                printer.PrintMatrix(mtz, std::cout);

                printer.SetColLabels(std::vector<std::string>() = {"       "});
                std::cout<<std::endl<<"Multiplicacion de matrices";
                mtz = (rmt1 * rmt2).getMatrixData();
                printer.PrintMatrix(mtz, std::cout);
                break;
            }

            default: {
                std::cout << std::endl << "Opcion no valida" << std::endl;
                break;
            }
        }

        std::cout<<std::endl<<"Quieres salir de la ejecucion?"<<std::endl<<"1 - Si"<<std::endl<<"0 - No"<<std::endl;
        std::cin>>stop;

    }while(!stop);
    return 0;
}