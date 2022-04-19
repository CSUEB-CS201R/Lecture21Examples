
#include "IntArrayList.h"


IntArrayList::IntArrayList() {
    numberOfValues = DEFAULT_LENGTH;
    listName = "unnamed list";

    intValues = new int[DEFAULT_LENGTH];

    for (int i = 0; i < DEFAULT_LENGTH; i++)
        intValues[i] = 0;

}

int IntArrayList::getValue(int i) const {
    return intValues[i];
}

void IntArrayList::setValue(int i, int newValue) {
    intValues[i] = newValue;
}

string IntArrayList::getListName() const
{
    return listName;
}

void IntArrayList::setListName(string newName)
{
    listName = newName;
}

int IntArrayList::getNumValues() const {
    return numberOfValues;
}

IntArrayList::IntArrayList(const IntArrayList &other)
{
    numberOfValues = other.numberOfValues;
    listName = other.listName;

    intValues = new int[numberOfValues];

    for(int i = 0; i < numberOfValues; i++)
        intValues[i] = other.intValues[i];
}


IntArrayList IntArrayList::operator+(const IntArrayList listToAdd)
{
    if(numberOfValues != listToAdd.numberOfValues)
        throw("Error: Arrays have different number of elements.");

    IntArrayList sum;

    sum.listName = listName;
    sum.numberOfValues = numberOfValues;

    for(int i = 0; i < numberOfValues; i++)
        sum.intValues[i] = intValues[i] + listToAdd.intValues[i];

    return sum;
}

//IntArrayList &IntArrayList::operator=(const IntArrayList &listToEqual) {
//
//    delete []intValues;
//
//    numberOfValues = listToEqual.numberOfValues;
//    listName = listToEqual.listName;
//
//    intValues = new int[numberOfValues];
//    for(int i = 0; i < numberOfValues; i++)
//        intValues[i] = listToEqual.intValues[i];
//
//    return *this;
//
//}

//Can also declare copy function and share with overloaded= and copy constructor
//void IntArrayList::copy(const IntArrayList& listToEqual) {
//    numberOfValues = listToEqual.numberOfValues;
//    listName = listToEqual.listName;
//
//    for(int i = 0; i < numberOfValues; i++)
//        intValues[i] = listToEqual.intValues[i];
//}