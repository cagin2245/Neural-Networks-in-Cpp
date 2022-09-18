#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>

using namespace std;

class Neuron
{
    public:
    Neuron(double val);
    // Fast Sigmoid Function
    // f(x) = x / (1 + |x|)
    void activate();
    void derive();
    
    // Setter
    
    void setVal(double v);



    // Getter
    double getVal() { return this-> val; }
    double getaVal() { return this-> aVal; }
    double getDerivedVal(){ return this->dVal;}


    // Derivative for fast sigmoid function
    // f'(x) = f(x) * (1-f(x))

    private:


    double val;
    double aVal; // Activated Value
    double dVal; // Derivated Value

};




#endif
