//https://www.codewars.com/kata/disemvowel-trolls/train/cpp
/*Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".*/



#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string disemvowel(string str)
{
	int n = str.length();
	char A[6] = "aeoiu";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i] == tolower(str[j])) {
				str.erase(str.find(str[j]), 1);
				n--;
			}
		}
	}

	return str;
}

int main()
{
	cout << disemvowel("This website is for losers LOL!") << endl;
	system("pause");
    return 0;
}

