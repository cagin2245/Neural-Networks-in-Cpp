#include "../include/NeuralNetwork.hpp"


void NeuralNetwork::setInput(vector<double>input)
{
    input = input;
    for(int i = 0; i< input.size();i++)
    {
    layers.at(0)->setValue(i,input.at(i));
    }

}
void NeuralNetwork::printCls()
{
    for(int i = 0; i<this->layers.size(); i++)
    {
        if(i == 0)
        {
            Matrix * m = layers.at(i)->matrixfyVal();
            m->printCls();
            
        }
        else
        {
            Matrix * m = layers.at(i)->matrixfyAVal();
            m->printCls();
            
        }
    }
    

}

NeuralNetwork::NeuralNetwork(vector<int> topology)
{
    topology = topology;
    tsize = topology.size();
    for(int i = 0; i < tsize;i++)
    {
    Layer *l = new Layer(topology.at(i));
    layers.emplace_back(l);
    }
    for(int i = 0; i < tsize-1;i++)
    {
    Matrix * m = new Matrix(topology.at(i),topology.at(i+1),true);
    weightMatrix.emplace_back(m);
    }
}