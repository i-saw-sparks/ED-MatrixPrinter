//
// Created by manie on 18/09/2020.
//

#ifndef ACTIVIDAD1_TYPEINFO_H
#define ACTIVIDAD1_TYPEINFO_H

#include <vector>
#include <string>
#include <limits>

template <typename T>
class TypeInfo {
public:
    TypeInfo();
    static double getTypeSize();
    static double getMinValue();
    static double getMaxValue();
    static std::vector<double> getTypeInfo();
};

template<typename T>
TypeInfo<T>::TypeInfo() {}

template<typename T>
double TypeInfo<T>::getTypeSize() {return sizeof(T) * 8;}

template<typename T>
double TypeInfo<T>::getMinValue() {return std::numeric_limits<T>::min();}

template<typename T>
double TypeInfo<T>::getMaxValue() {return std::numeric_limits<T>::max();}

template<typename T>
std::vector<double> TypeInfo<T>::getTypeInfo() {
    std::vector<double> ret;
    ret.push_back(getTypeSize());
    ret.push_back(getMinValue());
    ret.push_back(getMaxValue());
    return ret;
}


#endif //ACTIVIDAD1_TYPEINFO_H
