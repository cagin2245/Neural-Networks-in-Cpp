#include "../include/Neuron.hpp"
#include <cmath>
Neuron::Neuron(double val)
{
    this -> val = val;
    activate();
    derive();

}

void Neuron::setVal(double val)
{
    this->val = val;
    activate();
    derive();
}


// Fast Sigmoid Function 

void Neuron::activate()
{
    this->aVal = this->val / (1 + std::abs(this->val) );
}

void Neuron::derive()
{
    this-> dVal = this ->aVal * (1 - this->aVal);
}