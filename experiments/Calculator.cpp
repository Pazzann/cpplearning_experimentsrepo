//
// Created by manto on 10/26/2024.
//

#include "Calculator.h"
#include <cmath>


using calc= custom_shit::Calculator;


calc::Calculator(double init) {
    value = init;
}

double calc::getValue() const {
    return value;
}

calc & calc::add(double number) {
    value += number;
    return *this;
}
calc & calc::subtract(double number) {
    value  -= number;
    return *this;
}

calc &calc::divide(double number) {
    if(number != 0)
        value /= number;

    return *this;
}

calc& calc::multiply(double number) {
    value *= number;
    return *this;
}

calc& calc::cos() {
    value = std::cos(value);
    return *this;
}

