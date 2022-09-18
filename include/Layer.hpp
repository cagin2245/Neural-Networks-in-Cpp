#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include "Neuron.hpp"
#include "Matrix.hpp"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Layer
{
   public:
    
   Layer(int size);
   void setValue(int i, double v);
   Matrix * matrixfyVal(); // -> Matrix represantation of given layer
   Matrix * matrixfyAVal(); // -> Activated Val
   Matrix * matrixfyDVal(); // -> Derived Val

   private:
   int size;
   vector<unique_ptr<Neuron>> neurons;


    // Derivative for fast sigmoid function
    // f'(x) = f(x) * (1-f(x))

    private:

};




#endif
