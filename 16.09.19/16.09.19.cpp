#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	cout << "Результат выражения 2+2*2 = " << 2+2*2; //1. Простой вывод
	*/
	/*
	int a = 3, b = 3.14;
	cout << " a = " << a << "\n b = " << b;
	double c = 3, d = 3.14;
	cout << "\n c = " << c << "\n d = " << d; //2. Переменные int и double
	*/
	/*
	int que;
	cout << "1. int int, 2. int double, 3. double int, 4. double double \n"; //3. Арифметика для разных типов
	cin >> que;
	cout << endl;
	if (que == 1)
	{
		cout << endl << "Выбран int int" << endl << "Введите число 1:";
		int in1, in2;
		cin >> in1;
		cout << endl << "Введите число 2:";
		cin >> in2;
		cout << endl << in1 << " + " << in2 << " = " << in1 + in2;
		cout << endl << in1 << " - " << in2 << " = " << in1 - in2;
		cout << endl << in1 << " * " << in2 << " = " << in1 * in2;
		cout << endl << in1 << " / " << in2 << " = " << in1 / in2;
	}
	else
	{
		if (que == 2)
		{
			cout << endl << "Выбран int double" << endl << "Введите число 1:";
			int in3;
			double dbl1;
			cin >> in3;
			cout << endl << "Введите число 2:";
			cin >> dbl1;
			cout << endl << in3 << " + " << dbl1 << " = " << in3 + dbl1;
			cout << endl << in3 << " - " << dbl1 << " = " << in3 - dbl1;
			cout << endl << in3 << " * " << dbl1 << " = " << in3 * dbl1;
			cout << endl << in3 << " / " << dbl1 << " = " << in3 / dbl1;
		}
		else
		{
			if (que == 3)
			{
				cout << endl << "Выбран double int" << endl << "Введите число 1:";
				double dbl2;
				int in4;
				cin >> dbl2;
				cout << endl << "Введите число 2:";
				cin >> in4;
				cout << endl << dbl2 << " + " << in4 << " = " << dbl2 + in4;
				cout << endl << dbl2 << " - " << in4 << " = " << dbl2 - in4;
				cout << endl << dbl2 << " * " << in4 << " = " << dbl2 * in4;
				cout << endl << dbl2 << " / " << in4 << " = " << dbl2 / in4;
			}
			else
			{
				if (que == 4)
				{
					cout << endl << "Выбран double double" << endl << "Введите число 1:";
					double dbl3;
					double dbl4;
					cin >> dbl3;
					cout << endl << "Введите число 2:";
					cin >> dbl4;
					cout << endl << dbl3 << " + " << dbl4 << " = " << dbl3 + dbl4;
					cout << endl << dbl3 << " - " << dbl4 << " = " << dbl3 - dbl4;
					cout << endl << dbl3 << " * " << dbl4 << " = " << dbl3 * dbl4;
					cout << endl << dbl3 << " / " << dbl4 << " = " << dbl3 / dbl4;
				}
				else
					cout << endl << "no way";
			}
		}
	}
	*/
	/*
	int a1, b1, c1;
	cout << "С переменной: " << endl << "Введите число 1: "; //4. Обмен значениями
	cin >> a1;
	cout << endl << "Введите число 2: ";
	cin >> b1;
	c1 = a1;
	a1 = b1;
	b1 = c1;
	cout << "a = " << a1 << endl << "b = " << b1 << endl << "Без переменной: " << endl << "Введите число 1: ";
	cin >> a1;
	cout << endl << "Введите число 2: ";
	cin >> b1;
	swap(a1, b1);
	cout << "a = " << a1 << endl << "b = " << b1 << endl;
	*/
	double v0, x0, t, a = -9.8;
	cout << "Введите значения для x0 = ";
	cin >> x0;
	cout << " v0 = ";
	cin >> v0;
	cout << " t = ";
	cin >> t;
	cout << " g = -9.8";
	cout << endl << "Решаем: x(t) = x0 + v0 * t + 1/2 * a * t * t = " << x0 + v0 * t + 1 / 2 * a * t * t;

	system("pause");
}