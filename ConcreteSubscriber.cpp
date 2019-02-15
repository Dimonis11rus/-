#include "ConcreteSubscriber.h"
#include <windows.h>
#include <iostream>
#include <fstream>
HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
void ConcreteSubscriber::update(char *name, char *article)
{
	SetConsoleTextAttribute(hConsoleHandle, 13);
	cout << name;
	SetConsoleTextAttribute(hConsoleHandle, 15);
	cout << article << endl;
	ofstream fout; 
	fout.open("OUTPUT.txt", ios::app);
	fout << name;
	fout << article << endl;
	fout.close();
}
