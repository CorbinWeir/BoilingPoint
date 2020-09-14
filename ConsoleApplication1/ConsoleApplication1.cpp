// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double input, min, max;

    cout << "enter boiling point of substance = ";
    cin >> input;

    min = input * 0.95;
    max = input * 1.05;

    if (100 >= min and 100 <= max)
        cout << " water" << endl;
    else if (357 >= min and 357 <= max)
        cout << " mercury" << endl;
    else if (1187 >= min and 1187 <= max)
        cout << "copper" << endl;
    else if (2193 >= min and 2193 <= max)
        cout << " silver" << endl;
    else if (2660 >= min and 2660 <= max)
        cout << "gold" << endl;
    else
        cout << " unkown" << endl;
        
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
