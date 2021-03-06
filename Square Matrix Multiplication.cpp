//https://www.codewars.com/kata/5263a84ffcadb968b6000513
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;



vector<vector<int>> matrix_multiplication(vector<vector<int>> &a, vector<vector<int>> &b, size_t n) {
	vector<vector<int>> ret(n, vector<int>(n));
	int result = 0;
	for (int z = 0; z < n; z++) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				result += a[z][i] * b[i][j];
			}
			ret[z][j] = result;
			result = 0;
		}
	}
	return ret;
}

int main()
{
	vector<vector<int>> a(2, vector<int>(2));
	a[0][0] = 1;
	a[0][1] = 2;
	a[1][0] = 3;
	a[1][1] = 2;
	vector<vector<int>> b(2,vector<int>(2));
	b[0][0] = 3;
	b[0][1] = 2;
	b[1][0] = 1;
	b[1][1] = 1;
	matrix_multiplication(a, b, 2);
	system("pause");
    return 0;
}

