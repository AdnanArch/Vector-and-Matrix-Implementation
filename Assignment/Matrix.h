// Matrix.h : interface for the Matrix class.

#pragma once

class Matrix
{
public:
    Matrix(const int row, const int col);            // parametric constructor
    void takeInput();                                // take input from the user and store in the matrix
    void showAdditionResult(const Matrix& m2);       // show addition result if addition is possible
    void showMultiplicationResult(const Matrix& m2); // show multiplication result if multiplication is possible
    Matrix(const Matrix& m);                         // Copy Constructor
    Matrix& operator=(const Matrix& m);              // assignment operator overloaded
    ~Matrix();                                       // destructor

private:
    int rows;
    int cols;
    int** matrix;
};