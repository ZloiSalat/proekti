// https://www.codewars.com/kata/sum-of-two-lowest-positive-integers/train/cpp
/*Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 integers. No floats or empty arrays will be passed.

For example, when an array is passed like[19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.Такой момент, это задание было не залито на codewars, потому что не хватало памяти на все значения,а в вижуалке все работает.
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

unsigned long long sumTwoSmallestNumbers(vector<unsigned long long> numbers) {
	int n = numbers.size();
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (numbers[j] > numbers[j + 1])
				swap(numbers[j], numbers[j + 1]);

	return numbers[0] + numbers[1];
}
int main()
{
	cout << sumTwoSmallestNumbers({ 10, 343445353, 3453445, 3453545353453 }) << endl;
	system("pause");
	return 0;
}

