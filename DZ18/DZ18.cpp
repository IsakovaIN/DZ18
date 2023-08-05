#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

// �������� ������� � 18.

//������ 1. ������� �������, ������� ��������� �� 1-�� �� 5 - ��(������������) 
//������ �����, ����� ���� ���������� �� �����.
template<typename T>
double sum(T num1, T num2, T num3, T num4, T num5) {
	return (num1 + num2 +num3 + num4 + num5);
}
//������ 2. ����. �������������� 3-� �����(������������ �������).
inline double sum1(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3.0;
}
//������ 3. ������������ �� ���� ���������� ��������(������������� �������).
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
//������ 4. ��������� �������, ����� ������ ������� ����� � ������� � ������� ���. 
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
	
	//������ 1.
	std::cout << "������ 1.\n������� 5 ������ ����� -> ";
	std::cin >> n >> m >> a >> b >> c;
	std::cout << "����� 5 �����" << " = " << sum(n, m, a, b, c) << "\n\n";

	//������ 2.
	std::cout << "������ 2.\n������� 3 ����� -> ";
	std::cin >> n >> m >> a;
	std::cout << "������� ����. 3 ����� = " << sum1(n, m, a) << "\n\n";

	//������ 3.
	std::cout << "������ 3.\n������������ ��������.\n";
	std::cout << max(288, 333, 444) << std::endl;
	std::cout << max(2.2, 3.3, 4.4) << std::endl;
	std::cout << max(2, 3, 4) << std::endl;//������� int, ��� ��������� short � int?
	
	//������ 4.
	std::cout << "������ 4.\n����������� ������:\n";
	int int_arr[5]{ 5, 6, 8, 10, 12 };
	print_arr(int_arr, 5);
	std::cout << "������ ����� � �������: ";
	print_arr(int_arr, 1);

	return 0;
}