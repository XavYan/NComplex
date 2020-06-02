//
// Created by xavyan on 1/6/20.
//

#include "NComplex.h"

float gradesToRadian(float grades) {
    return grades * PI / 180;
}

NComplex::NComplex(float real, float imaginary) {
    real_ = real;
    imaginary_ = imaginary;
}

NComplex::NComplex(const NComplex &complex) {
    real_ = complex.real_;
    imaginary_ = complex.imaginary_;
}

NComplex::~NComplex() = default;

float NComplex::real() const {
    return real_;
}

float NComplex::imaginary() const {
    return imaginary_;
}

void NComplex::setReal(float real) {
    real_ = real;
}

void NComplex::setImaginary(float imaginary) {
    imaginary_ = imaginary;
}

void NComplex::write(std::ostream &os) const {
    os << real_ << " + " << imaginary_ << "i";
}

void NComplex::read(std::istream &is) {
    is >> real_;
    is >> imaginary_;
}

NPolarComplex NComplex::toPolar(const NComplex& complex) {
    NPolarComplex result{};
    result.module_ = sqrt(pow(complex.real_, 2) + pow(complex.imaginary_, 2));
    result.argument_ = complex.real_ == 0 ? gradesToRadian(90) : atan(complex.imaginary_/complex.real_);
    return result;
}

NComplex NComplex::toBinary(const NPolarComplex &polar) {
    return NComplex(polar.module_ * cos(polar.argument_), polar.module_ * sin(polar.argument_));
}
