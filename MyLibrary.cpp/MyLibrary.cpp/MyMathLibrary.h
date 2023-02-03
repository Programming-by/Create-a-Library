#pragma once


#include <iostream>
using namespace std;


namespace MyMathLibrary

{


    float GetFractionPart(float Number)
    {
        return Number - int(Number);
    }


    int MyRound(float Number)
    {
        int IntPart;
        IntPart = int(Number);
        float FractionsPart = GetFractionPart(Number);
        if (abs(FractionsPart) >= .5)
        {
            if (Number > 0)
                return ++IntPart;
            else
                return --IntPart;
        }
        else
        {
            return IntPart;
        }
    }

    int MyFloor(float Number)
    {
        if (Number > 0)
            return int(Number);
        else
            return int(Number) - 1;
    }

    int MyCeil(float Number)
    {

        int IntPart;
        IntPart = (int)Number;
        if (abs(GetFractionPart(Number) > 0)) {
            if (Number > 0)
                return ++IntPart;
            else
                return -IntPart;
        }
        else {
            return Number;
        }
    }

    int MyABS(float Number)
    {
        if (Number < 0)
            return -Number;
        else
            return Number;
    }

    int MySqrt(float Number)
    {
        // in math any number to power of 0.5  is the sqrt
        return pow(Number, 0.5);
    }



}