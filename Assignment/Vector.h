// Vector.h: interface for the Vector class.

#pragma once

class Vector
{
public:
    Vector();                              // default constructor
    Vector(const int size);                // parametric constructor
    Vector(const Vector& vect);            // copy constructor
    Vector& operator=(const Vector& vect); // assignment operator overloaded
    void insert(const int num);            // function to add value to end of vector
    bool remove(const int num);            // function to remove value from the vector
    bool search(const int num) const;      // function to search for value in the vector
    void printAllValues() const;           // function to print the vector
    ~Vector();                             // destructor

private:
    int* numbers;
    int size;
    int elements;
};