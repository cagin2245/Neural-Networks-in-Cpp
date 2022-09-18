#include <iostream>
#include <memory>
#include "../include/Neuron.hpp"
#include "../include/Layer.hpp"
#include "../include/Matrix.hpp"
#include "../include/NeuralNetwork.hpp"
using namespace std;

int main(int argc, char **argv)
{

   vector <int> topology;
   topology.push_back(3);
   topology.push_back(2);
   topology.push_back(3);

    vector<double> input;
    input.push_back(1.0);
    input.push_back(0.0);
    input.push_back(1.0);


   NeuralNetwork *nn = new NeuralNetwork(topology);
   nn->setInput(input);
   nn->printCls();
 


}