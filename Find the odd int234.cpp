// Find the odd int
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int findOdd(const vector<int>& numbers) {

	for (int i = 0; i < numbers.size(); i++) {
		int x = 0;
		for (int j = 0; j < numbers.size(); j++) {
			if (numbers[i] == numbers[j])
				x++;
		}
		if (x % 2 == 1)
			return numbers[i];
	}

}

int main()
{
	cout << findOdd({ 20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5 }) << endl;
	system("pause");
    return 0;
}

