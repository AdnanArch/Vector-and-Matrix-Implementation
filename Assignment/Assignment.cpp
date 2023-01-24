// Assignment.cpp : This file contains the 'main' function.

#include <iostream>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main()
{
    // Part 1: Working with vector
     Vector vect1(5);
     for (int i = 0; i < 15; i++)
     {
         vect1.insert(i);
     }
     cout << "v1 = ";
     vect1.printAllValues();

     Vector vect2(5);
     for (int i = 0; i < 5; i++)
     {
         vect2.insert(i);
     }
     cout << "v2 = ";
     vect2.printAllValues();

     Vector vect3 = vect1; //testing assignment operator overload
     cout << "v3 = ";
     vect3.printAllValues();

     Vector vect4(5); // testing copy constructor
     vect4 = vect2;
     cout << "v4 = ";
     vect4.printAllValues();

     vect1 = vect2; // testing assignment operator overload
     cout << "v1 = ";
     vect1.printAllValues();

     cout.setf(ios::boolalpha);
     cout << "14 is in v1: " << vect1.search(14) << endl;
     cout << "14 is in v2: " << vect2.search(14) << endl;
     cout << "14 is in v3: " << vect3.search(14) << endl;

     cout << vect1.remove(14) << endl;
     cout << vect1.remove(4) << endl;

     cout << "\n\n\n";

    /* ----------------------------------------------------------------- */

    // Part 2: Working with matrix

    Matrix m1(3, 3);
    cout << "Enter elements in Matrix : " << endl;
    m1.takeInput();
    Matrix m2(3, 3);
    cout << "\nEnter elements in Matrix : " << endl;
    m2.takeInput();

    cout << "\nAddition Result : " << endl;
    m1.showAdditionResult(m2);
    cout << "\nMultiplication Result : " << endl;
    m1.showMultiplicationResult(m2);

    cout << "\nm1 is assignmening to m1 " << endl;
    
    m2 = m1; // testing assignment operator overload
    
    cout << "Addition Result : " << endl;
    m2.showAdditionResult(m1);
    cout << "\nMultiplication Result : " << endl;
    m2.showMultiplicationResult(m1);

    Matrix m3(3, 2);
    cout << "\nEnter elements in Matrix : " << endl;
    m3.takeInput();
    Matrix m4(2, 1);
    cout << "\nEnter elements in Matrix : " << endl;
    m4.takeInput();

    cout << "\nAddition Result : " << endl;
    m3.showAdditionResult(m4);
    cout << "\nMultiplication Result : " << endl;
    m3.showMultiplicationResult(m4);


    // assigning m4 to m5
    Matrix m5(m4); // testing copy constructor
    cout << "\nAddition Result : " << endl;
    m5.showAdditionResult(m4);
    cout << "\nMultiplication Result : " << endl;
    m5.showMultiplicationResult(m4);


    return 0;
}