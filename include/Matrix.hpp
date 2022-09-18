#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <iostream>
#include <vector>

using namespace std;


class Matrix
{
    public:    
    Matrix (int numRows, int numCols, bool isRandom);
    Matrix *  transpose(); 
    void setValue(int r, int c, double v) {this->values.at(r).at(c) = v;};
    double getValue(int r, int c){ return this->values.at(r).at(c); };
    double generateRandomNumber();
    int getNumRows() {return this->numRows;}
    int getNumCols() {return this->numCols;}
    void printCls();

    private:
    int numRows;
    int numCols;
    vector<vector<double>> values;


};




#endif
