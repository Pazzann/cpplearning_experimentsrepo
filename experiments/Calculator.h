//
// Created by manto on 10/26/2024.
//

#ifndef TEST_CALCULATOR_H
#define TEST_CALCULATOR_H

namespace custom_shit {

    class Calculator {
    private:

        double value = 0;

    public:

        explicit Calculator(double init = 0);

        double getValue() const;


        Calculator& add(double number);
        Calculator& subtract(double number);
        Calculator& multiply(double number);
        Calculator& divide(double number);
        Calculator& cos();
    };

} // custom_shit

#endif //TEST_CALCULATOR_H
