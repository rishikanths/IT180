
#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>
#include <string>

using std::string;

class ComplexNumber {
    
protected:
    
    int real;
    int imaginary;
    
public:
    
    ComplexNumber (int real, int imaginary);
    
    int getReal () const;
    
    int getImaginary () const;
    
    void setReal (int real);
    
    void setImaginary (int imaginary);
    
    string toString () const;
    
    ComplexNumber* operator + (const ComplexNumber& c) const;
    
    ComplexNumber* operator - (const ComplexNumber& c) const;
    
    ComplexNumber* operator * (const ComplexNumber& c) const;
    
    bool operator == (const ComplexNumber& c) const;
};


#endif
