// https://www.codewars.com/kata/all-unique/train/cpp
/*Write a program to determine if a string contains all unique characters. Return true if it does and false otherwise.

The string may contain any of the 128 ASCII characters.*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


bool hasUniqueChars(string s) {
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; i < s.length(); j++) {
			if (s[i] == s[j]) {
				if (i == j)
					break;
				return false;
			}
		}
	}

	return true;
}
int main()
{
	cout << hasUniqueChars("vika") << endl;
	system("pause");
    return 0;
}

