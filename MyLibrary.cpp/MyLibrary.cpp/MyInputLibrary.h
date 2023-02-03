#pragma once



#include <iostream>
using namespace std;


namespace MyInputLibrary

{



    int ReadNumber(string Message)
    {
        int Number = 0;
        do
        {
            cout << Message << endl;
            cin >> Number;
        } while (Number <= 0);
        return Number;
    }

}