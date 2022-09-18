#ifndef _NEURAL_NETWORK_HPP_
#define _NEURAL_NETWORK_HPP_

#include <iostream>
#include "Layer.hpp"
#include "Neuron.hpp"
#include "Matrix.hpp"

using namespace std;

class NeuralNetwork
{
    public:
    NeuralNetwork(vector<int> topology);
    void setInput(vector<double> input);
    void printCls();
    private:
    int tsize;
    vector<int> topology;    
    vector<Layer *> layers;
    vector<Matrix *> weightMatrix;
    vector<double> Input;


};




#endif