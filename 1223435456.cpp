﻿// 1223435456.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
		setlocale (0 , "Russian");
		int num1, num2, suma, minus, del, umn;
		std::string znak;
		std::cout  << ("Введите первое число: ");
		std::cin >> num1;
		std::cout << ("Введите второе число: ");
		std::cin >> num2;
		cout << ("Что вы хотите сделать? * или + или - или / ");
		std::cin >> znak;
		if (znak == "+") {
			suma = num1 + num2;
			std::cout << "Результат суммы: " << suma;
		}
		else if (znak == "-") {
			minus = num1 - num2;
			std::cout << "Результат вычитания: " << minus ;
		}
		else if (znak == "*") {
			umn = num1 * num2;
			std::cout << "Результат умножения: " << umn ;
		}
		else if (znak == "/") {
			del = num1 / num2;
			std::cout << "Результат деления: " << del ;
		}
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
