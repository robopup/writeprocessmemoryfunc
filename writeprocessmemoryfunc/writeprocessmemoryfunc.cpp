// writeprocessmemoryfcn.cpp.cpp : Defines the entry point for the console application.
// Ronnie Wong
// February 23, 2018

/*
* BOOL WINAPI WriteProcessMemory(HANDLE,LPVOID, LPCVOID, SIZE_T, SIZE_T)
* where:
* HANDLE - hProcess
* LPVOID - lpBaseAddress
* LPCVOID - lpBuffer
* SIZE_T - nSizee
* SIZE_T - *lpNumberOfBytesWritten
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{



	cout << "Hello World! This passes the test." << endl;
	system("pause");

	return 0;
}

