
#include "ComplexNumber.h"

/**
 * Constructor
 */
ComplexNumber::ComplexNumber (int real, int imaginary) {
    this->setReal(real);
    this->setImaginary(imaginary);
}

int ComplexNumber::getReal () const {
    return real;
}

int ComplexNumber::getImaginary () const {
    return imaginary;
}

void ComplexNumber::setReal (int real) {
    this->real = real;
}

void ComplexNumber::setImaginary (int imaginary) {
    this->imaginary = imaginary;
}

/**
 * toString()
 */
string ComplexNumber::toString () const {
    return std::to_string(real) + "+ i" + std::to_string(imaginary);
}

/**
 * Override "+" operator
 */
ComplexNumber* ComplexNumber::operator + (const ComplexNumber& c) const {
    return new ComplexNumber(
         this->real + c.getReal(),
         this->imaginary + c.getImaginary()
     );
}

/**
 * Override "-" operator
 */
ComplexNumber* ComplexNumber::operator - (const ComplexNumber& c) const {
    return new ComplexNumber(
        this->real - c.getReal(),
        this->imaginary - c.getImaginary()
    );
}

/**
 * Override "*" operator
 */
ComplexNumber* ComplexNumber::operator * (const ComplexNumber& c) const {
    
    int real1 = this->real;
    int real2 = c.getReal();
    int imaginary1 = this->imaginary;
    int imaginary2 = c.getImaginary();
    
    return new ComplexNumber(
        real1 * real2 - imaginary1 * imaginary2,
        real1 * imaginary2 + real2 * imaginary1
    );
}


/**
 * Override "==" operator
 */
bool ComplexNumber::operator == (const ComplexNumber& c) const {
    return this->real == c.real && this->imaginary == c.imaginary;
}
