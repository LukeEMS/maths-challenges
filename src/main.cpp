#include <iostream>
#include <vector>
#include <string>
#include "Circle.h"
#include <cstdlib>

using namespace std;

double randomNumber(double lowerBound, double upperBound)
{
    return rand() % upperBound + lowerBound
}

int main()
{
    vector<vector<double>> points;
    // Create 10 points
    for (int i = 0;i < 10; i++ )
    {

    }

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
