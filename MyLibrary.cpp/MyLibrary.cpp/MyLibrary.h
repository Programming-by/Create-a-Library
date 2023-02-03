#pragma once

#include <iostream>
using namespace std;


namespace MyLibrary {


    int RandomNumber(int From, int To)
    {
        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }



    void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
    {
        cout << "\nEnter number of elements:\n";
        cin >> arrLength;
        for (int i = 0; i < arrLength; i++)
        {
            arr[i] = RandomNumber(1, 100);
        }
    }


    void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            // arrDestination[i] = arrSource[arrLength - (i + 1)];
            arrDestination[i] = arrSource[arrLength - 1 - i];
        }
    }



    void PrintArray(int arr[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }


    void Swap(int& A, int& B)
    {
        int Temp;
        Temp = A;
        A = B;
        B = Temp;
    }

    bool CheckPrime(int Number)
    {

        int M = round(Number / 2); // 100/2 =50 mean we need to check for first 50 numbers instead of all of them

        for (int Counter = 2; Counter <= M; Counter++)
        {

            if (Number % Counter == 0)

                return false;
        }
        return true;
    }


}