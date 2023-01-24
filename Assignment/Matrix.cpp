// Matrix.cpp : implementation the Matrix class.

#include <iostream>
#include "Matrix.h"

using namespace std;

// Parametric constructor
Matrix::Matrix(const int row, const int col) : rows(row), cols(col)
{
	matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
}

// Copy Constructor
Matrix::Matrix(const Matrix& m) : rows{ m.rows }, cols{ m.cols }
{
	matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = m.matrix[i][j];
		}
	}
}

// assignment operator overloaded
Matrix& Matrix::operator=(const Matrix& m)
{
	if (this != &m)
	{
		// delete the old matrix
		for (int i = 0; i < rows; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;

		// create new matrix
		rows = m.rows;
		cols = m.cols;
		matrix = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			matrix[i] = new int[cols];
		}

		// copy the matrix values
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				matrix[i][j] = m.matrix[i][j];
			}
		}
	}
	return *this;
}

// Function to take input from the user and store in the matrix
void Matrix::takeInput()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter element at row " << i + 1 << " and column " << j + 1 << ": ";
			cin >> matrix[i][j];
		}
	}
}

// Function to show addition result if addition is possible
void Matrix::showAdditionResult(const Matrix& m2)
{
	if (rows == m2.rows && cols == m2.cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << matrix[i][j] + m2.matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Addition not possible" << endl;
	}
}

// Function to show multiplication result if multiplication is possible
void Matrix::showMultiplicationResult(const Matrix& m2)
{
	int sum{};
	if (cols == m2.rows)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < m2.cols; j++)
			{
				for (int k = 0; k < cols; k++)
				{
					sum += matrix[i][k] * m2.matrix[k][j];
				}
				cout << sum << " ";
				sum = 0;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Multiplication not possible" << endl;
	}
}

// destructor
Matrix::~Matrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
