
#include <iostream>
#include <stdlib.h>
using namespace std;


#include  "MyLibrary.h";
#include "MyInputLibrary.h";
#include "MyMathLibrary.h";

int main()
{
	srand((unsigned)time(NULL));


	cout << MyInputLibrary::ReadNumber("Please Enter a Number") << endl;
//cout <<	MyMathLibrary::MyABS(-10)<<endl;
//cout <<	MyLibrary::RandomNumber(10, 20)<<endl;

	return 0;
}

