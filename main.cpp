#include "IntArrayList.h"

#include <iostream>
using namespace std;

int main()
{
    cout << "Declaring two IntArrayList objects: arrayList1 and arrayList2." << endl;

    IntArrayList arrayList1, arrayList2;

    arrayList1.setListName("List1");
    arrayList2.setListName("List2");

    for(int i = 0; i < arrayList2.getNumValues(); i++)
        arrayList2.setValue(i, 999);

    cout << "Array list 1 contains:" << endl;
    for(int i = 0; i < arrayList1.getNumValues(); i++)
        cout << arrayList1.getValue(i) << " ";
    cout << endl << "Array list 2 contains: " << endl;
    for(int i = 0; i < arrayList2.getNumValues(); i++)
        cout << arrayList2.getValue(i) << " ";

    cout << endl << "Now setting arrayList 1 equal to arrayList2: " << endl;

    //set arrayList1 = arrayList 2
    arrayList1 = arrayList2;

    cout << "Array list 1 contains:" << endl;
    for(int i = 0; i < arrayList1.getNumValues(); i++)
        cout << arrayList1.getValue(i) << " ";
    cout << endl << "Array list 2 contains: " << endl;
    for(int i = 0; i < arrayList2.getNumValues(); i++)
        cout << arrayList2.getValue(i) << " ";

    cout << endl << "Now setting arrayList 1 values equal to 10 " << endl;

    //modify arrayList1's values
    for(int i = 0; i < arrayList1.getNumValues(); i++)
        arrayList1.setValue(i, 10);

    //output values to screen
    cout << "Array list 1 contains:" << endl;
    for(int i = 0; i < arrayList1.getNumValues(); i++)
        cout << arrayList1.getValue(i) << " ";
    cout << endl << "Array list 2 contains: " << endl;
    for(int i = 0; i < arrayList2.getNumValues(); i++)
        cout << arrayList2.getValue(i) << " ";

}