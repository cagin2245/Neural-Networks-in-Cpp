#include "../include/Matrix.hpp"
#include <random>
#include <memory>


double Matrix::generateRandomNumber()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0,1);

    return dis(gen);
}



Matrix * Matrix::transpose()
{
    Matrix * m (new Matrix(this->numCols, this->numRows,false));
    
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            m->setValue(j,i,this->getValue(i,j));            
        }
    }
    return  m ;
}

void Matrix::printCls()
{
    for(int i= 0; i < numRows; i++)
    {
        for(int j = 0; j< numCols;j++){
        std::cout << this->values.at(i).at(j) << "\t";
        }
        std::cout << std::endl;
    }
}

Matrix::Matrix(int numRows, int numCols, bool isRandom)
{
    this->numRows = numRows;
    this->numCols = numCols;
    for(int i = 0; i < numRows; i++)
    {
        vector<double> colValues;
        double r = 0.00;
        for(int j = 0; j< numCols;j++)
        {
            if(isRandom){
            r = this->generateRandomNumber();
            }
        colValues.push_back(r);
        }
        this-> values.push_back(colValues);
    }
}