#include <iostream>
using namespace std;
int main()
{/*
	int a, b;
	double avg;
	cin >> a >> b;
	avg = (a + b) / 2.0;
	cout << avg;
	
	return 0;*/
	/*
	int a, b, A, B, C, G;
	cin >> a >> b;
	A = (a * a) + (b * b);
	B = (a * a) - (b * b);
	C = (a * a) * (b * b);
	G = (a * a) / (b * b);
	cout << A << B << C << G;*/
	//Begin12◦
	// Даны катеты прямоугольного треугольника a и b.Найти его гипотенузу c и периметр P :
	/*
	int a, b;
	double c, P;
	cin >> a >> b;
	c = sqrt(a * a + b * b);
	P = a + b + c;
	cout << "c =" << c << " P =" << P << endl;
	return 0;*/
	//Begin16◦
		//.Найти расстояние между двумя точками с заданными координатами x1 и x2 на числовой оси : | x2 − x1 | .
	/*
	int x1, x2;
	double avg;
	cin >> x1 >> x2;
	avg = abs(x2 - x1);
	cout << " avg = " << avg << endl;*/
	//Begin20◦
	//. Найти расстояние между двумя точками с заданными координатами
	//(x1, y1) и(x2, y2) на плоскости.Расстояние вычисляется по формуле
	/*
	int x1, x2, y1, y2;
	double avg;
	cin >> x2 >> x1 >> y2 >> y1;
	avg = sqrt((x2 - x1 ) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << " avg = " << avg << endl;*/
	/*
	int a, b;
	double x1, x2, x3;
	cin >> a  >> b;
	x1 = -sqrt(-b / a);
	x2 = sqrt(-b / a);
	x3 = 0;
	cout << "x1 =" << x1 << " x2 =" << x2 << " x3 =" << x3 << endl;


	return 0;*/
	//Begin25◦
	//.Найти значение функции y = 3x
		//6 − 6x
		//2 − 7 при данном значении x.
	/*int x;
	double y;
	cin >> x;
	y = 3 * x ^ 6 - 6 * x ^ 2 - 7;
	cout << "y =" << y << endl;*/
	//Begin26◦
		//.Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном
		//значении x.
	/*int x;
	double y;
	cin >> x;
	y = 4 * (x-3 * x-3 * x-3 * x-3 * x-3 * x-3) - 7 * (x - 3 * x - 3 * x - 3);
	cout << "y =" << y << endl;*/
	//Begin27◦
		//.Дано число A.Вычислить A
		//8
		//, используя вспомогательную переменную и три операции умножения.Для этого последовательно находить A
		//2
		//,
		//A
		//4
		//, A
		//8
		//.Вывести все найденные степени числа A.
	/*int A;
	double A2, A4, A8;
	cin >> A;
	A2 = A * A;
	A4 = A * A * A * A;
	A8 = A * A * A * A * A * A * A * A;
	cout << "A2 =" << A2 << " A4 =" << A4 << " A8 =" << A8 << endl;*/
	//Integer1◦
		//.Дано расстояние L в сантиметрах.Используя операцию деления
		//нацело, найти количество полных метров в нем(1 метр = 100 см).
	/*int L;
	double avg;
	cin >> L;
	avg = L / 100;
	cout << "avg =" << avg << endl;*/
	//Integer2◦
		//.Дана масса M в килограммах.Используя операцию деления нацело,
		//найти количество полных тонн в ней(1 тонна = 1000 кг).
	/*	int M;
		double avg;
		cin >> M ;
		avg = M / 1000;
		cout << "avg =" << avg << endl; */
//Integer3◦
//.Дан размер файла в байтах.Используя операцию деления нацело,
//найти количество полных килобайтов, которые занимает данный файл
//(1 килобайт = 1024 байта).
/*int a;
double avg;
cin >> a;
avg = a / 1024;
cout << "avg =" << avg << endl;*/
//Integer4◦
//.Даны целые положительные числа A и B(A > B).На отрезке длины A размещено максимально возможное количество отрезков длины B
//(без наложений).Используя операцию деления нацело, найти количество
//отрезков B, размещенных на отрезке A.
/*int A, B;
double avg;
cin >> A >> B;
avg = A / B;
cout << "avg =" << avg << endl;*/
//Integer5◦
//.Даны целые положительные числа A и B(A > B).На отрезке длины A
// максимально возможное количество отрезков длины B(без
	//наложений).Используя операцию взятия остатка от деления нацело, найти
	//длину незанятой части отрезка A.
int A, B;
double avg;
cin >> A >> B;
avg = A % B;
cout << "avg =" << avg << endl;


}