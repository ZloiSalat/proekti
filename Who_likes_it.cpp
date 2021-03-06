// Who likes it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string likes(const vector<string> &names)
{
	string str = "";
	int count = names.size() - 2;
	switch (names.size()) {
	case 0:
		str = "no one likes this";
		break;
	case 1:
		str = names[0] + " likes this";
		break;
	case 2:
		str = names[0] + " and " + names[1] + " like this";
		break;
	case 3:
		str = names[0] + ", " + names[1] + " and " + names[2] + " like this";
		break;
	default:
		str = names[0] + ", " + names[1] + " and " + to_string(count) + " others like this";
		break;

	}
	return str;
}
int main()
{
	cout << likes({ "Peter" }) << endl;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
