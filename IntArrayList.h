#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H


#include <iostream>
#include <string>
using namespace std;
const int DEFAULT_LENGTH = 10;

class IntArrayList {
private:
    string listName;
    int* intValues;
    int numberOfValues;

public:
    IntArrayList();
    //Precondition: none (default constructor)
    //Postcondition: initializes IntArrayList object with numberOfValues = DEFAULT;
    //listname = "unnamed list"
    //and all values initialized to zero.

    IntArrayList(const IntArrayList& other);
    //Precondition: other IntArrayList object is declared and initialized.
    //Postcondition: Copy constructor.

    string getListName() const;
    //Precondition: listName is initialized in the current ArrayList object
    //Postcondition: returns the listName

    int getNumValues() const;
    //Precondition: numberOfValues is initialized in the current ArrayList object
    //Postcondition: returns numberOfValues

    void setListName(string newName);
    //Precondition: none
    //Postcondition:sets private variable listName to newName.

    int getValue(int i) const;
    //Precondition: i is an integer >= 0 and < numberOfValues
    //Postcondition: returns int value stored at location i in intValues

    void setValue(int i, int newValue);
    //Precondition: i is an integer >= 0 and < numberOfValues
    //newValue is an integer to be  stored at ith index of intValues array
    //Postcondition: updates intValues[i] to store the value newValue.

//    IntArrayList& operator=(const IntArrayList& listToEqual);
    //Precondition: listToEqual is an IntArrayList object
    //with all values initialized.
    //Postcondition: returns address of IntArrayList where
    //current object's values are set equal to listToEqual's values
    //we use pass by reference in case listToEqual contains very large data values

    IntArrayList operator+(const IntArrayList listToAdd);
    //Precondition: listToAdd is an IntArrayList object
    //with all values initialized.
    //Postcondition: returns IntArrayList with each int value in intValues[i]
    //set equal to the sum of intValues[i] + listToAdd[i]

};

#endif //INTARRAYLIST_H
