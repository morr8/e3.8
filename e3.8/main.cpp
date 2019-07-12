/*
 •• E3.8
 Write a program that reads four integers and prints “two pairs” if the input consists of two matching pairs (in some order) and “not two pairs” otherwise. For example,
 
 1 2 2 1   two pairs
 1 2 2 3   not two pairs
 2 2 2 2   two pairs
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "enter four integers: ";
    int first, second, third, fourth;
    cin >> first >> second >> third >> fourth;
    bool pair = false;
    
    if (first == second)
    {
        if (third == fourth)
        {
            cout << "two pairs";
            pair = true;
        }
    }
    else if (second == third)
    {
        if (first == fourth)
        {
            cout << "two pairs";
            pair = true;
        }
    }
    else if (third == fourth)
    {
        if (first == third)
        {
            cout << "two pairs";
            pair = true;
        }
    }
        
    if (pair == false)
    {
        cout << "not two pairs";
    }
    cout << endl;
}
