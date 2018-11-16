#include <iostream>
#include <string>
#include <vector>
using namespace std;

string replaceNth(string text, int n, char oldValue, char newValue)
{   
	int a = text.length();
	for (int i = 0; i < a; i++) {
		cout << text[i] << endl;
	}

	return text;
}

int main()
{
	replaceNth("Vader said: No, I am your father!", 2, 'a', 'o');
	system("pause");
	return 0;
}
