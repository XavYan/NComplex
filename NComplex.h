//
// Created by xavyan on 1/6/20.
//

#ifndef SEMANA1_NCOMPLEX_H
#define SEMANA1_NCOMPLEX_H

#include <iostream>
#include <cmath>

const float PI = 3.1415;

struct NPolarComplex {
    float module_;
    float argument_;
};

float gradesToRadian (float grades);

class NComplex {
private:
    float real_;
    float imaginary_;

public:
    explicit NComplex(float real = 0, float imaginary = 0);
    NComplex(const NComplex& complex);

    ~NComplex();

    float real() const;
    float imaginary() const;

    void setReal (float real);
    void setImaginary (float imaginary);

    // To manipulate polar states
    static NPolarComplex toPolar (const NComplex& complex);
    static NComplex toBinary (const NPolarComplex& polar);

    // This methods can be used to flow operators
    void write (std::ostream& os) const;
    void read (std::istream& is);

    // Add operators here (Definitions in NComplex.cpp)

    // Addition (+)

    // Subtraction (-)

    // Multiplication (*)

    // Division (/)

    // Add-equal (+=)

    // Equality (==)

    // Inequality (!=)

};

// Add flow operators here

#endif //SEMANA1_NCOMPLEX_H
