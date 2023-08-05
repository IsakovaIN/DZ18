#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

// Домашнее задание № 18.

//Задача 1. Создать функцию, которая принимает от 1-го до 5 - ти(включительно) 
//разных чисел, после чего возвращает их сумму.
template<typename T>
double sum(T num1, T num2, T num3, T num4, T num5) {
	return (num1 + num2 +num3 + num4 + num5);
}
//Задача 2. Сред. арифметическое 3-х чисел(встраиваемая функция).
inline double sum1(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3.0;
}
//Задача 3. Максимальное из трех переданных значений(перегруженная функция).
int max(int num1, int num2, int num3) {
	std::cout << "THREE INT\n";
	int max = num1 > num2 ? num1 : num2;
	return num3 > max ? num3 : max;
}
double max(double num1, double num2, double num3) {
	std::cout << "THREE DOUBLE\n";
	double max = num1 > num2 ? num1 : num2;
	return num3 > max ? num3 : max;
}
short max(short num1, short num2, short num3) {
	std::cout << "THREE SHORT\n";
	short max = num1 > num2 ? num1 : num2;
	return num3 > max ? num3 : max;
}
//Задача 4. Шаблонная функция, найти первое простое число в массиве и вернуть его. 
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, a, b, c;
	
	//Задача 1.
	std::cout << "Задача 1.\nВведите 5 разных чисел -> ";
	std::cin >> n >> m >> a >> b >> c;
	std::cout << "Сумма 5 чисел" << " = " << sum(n, m, a, b, c) << "\n\n";

	//Задача 2.
	std::cout << "Задача 2.\nВведите 3 числа -> ";
	std::cin >> n >> m >> a;
	std::cout << "Среднее ариф. 3 чисел = " << sum1(n, m, a) << "\n\n";

	//Задача 3.
	std::cout << "Задача 3.\nМаксимальное значение.\n";
	std::cout << max(288, 333, 444) << std::endl;
	std::cout << max(2.2, 3.3, 4.4) << std::endl;
	std::cout << max(2, 3, 4) << std::endl;//выводит int, как разделить short и int?
	
	//Задача 4.
	std::cout << "Задача 4.\nИзначальный массив:\n";
	int int_arr[5]{ 5, 6, 8, 10, 12 };
	print_arr(int_arr, 5);
	std::cout << "Первое число в массиве: ";
	print_arr(int_arr, 1);

	return 0;
}