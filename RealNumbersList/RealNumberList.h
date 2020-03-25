#pragma once
#include <iostream> 
#include <cstdlib> 
using namespace std;
class RealNumberList
{
private:
    double* list;                // Pointer to the array. 
    int numElements;          // Number of elements. 
    bool isValid(int) const;        // Validates subscripts. 
public:
    RealNumberList(int);          // Constructor 
    ~RealNumberList();            // Destructor 
    void setElement(int, int);  // Sets an element to a value. 
    double getElement(int) const; // Returns an element.
    void sortArray(int);
    int getNNumElements() const;
    double getLowest(int)const;
    double getHighest(int) const;
    void displayLowestandHighest(int)const;

};
