#include "../include/Layer.hpp"

#include <memory>
using namespace std;

Matrix * Layer::matrixfyVal()
{
    Matrix * m = new Matrix(1,this->neurons.size(),false);
    for(int i = 0; i< neurons.size();i++)
    {
        double v = this->neurons.at(i)->getVal();
        m->setValue(0,i,v);
        
    }
    return m;
}
Matrix * Layer::matrixfyAVal()
{
    Matrix * m = new Matrix(1,this->neurons.size(),false);
    for(int i = 0; i< neurons.size();i++)
    {
        
        m->setValue(0,i,this->neurons.at(i)->getaVal());
    }
    return m;
}
Matrix * Layer::matrixfyDVal()
{
    Matrix * m = new Matrix(1,this->neurons.size(),false);
    for(int i = 0; i< neurons.size();i++)
    {
        m->setValue(0,i,neurons.at(i)->getDerivedVal());
    }
    return m;
}

Layer::Layer(int size)
{
    this->size = size;
    for(int i = 0; i < size; i++)
    {
        unique_ptr<Neuron> n(new Neuron(0.00));
        this->neurons.emplace_back(move(n));
    }
}
void Layer::setValue(int i , double v)
{
    this->neurons.at(i)->setVal(v);
}