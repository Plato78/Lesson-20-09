#include <iostream>
using namespace std;
int main() {
//Integer1◦.Дано расстояние L в сантиметрах.Используя операцию деления нацело, найти количество полных метров в нем(1 метр = 100 см).
	/*int l, meters;
	cin >> l;
	meters = l / 100;
	cout << meters << endl;*/
	//Integer2◦.Дана масса M в килограммах.Используя операцию деления нацело,
	//найти количество полных тонн в ней(1 тонна = 1000 кг).
	/*int M, weight;
	cin >> M;
	weight = M / 1000;
	cout << weight << endl;*/
	/*Integer3◦.Дан размер файла в байтах.Используя операцию деления нацело,
	найти количество полных килобайтов, которые занимает данный файл
	(1 килобайт = 1024 байта).*/
	/*int K, kbite;
	cin >> K;
	kbite = K / 1024;
	cout << kbite  << endl;*/
	//Integer4◦
 //.Даны целые положительные числа A и B(A > B).На отрезке длины A размещено максимально возможное количество отрезков длины B
//(без наложений).Используя операцию деления нацело, найти количество
 //отрезков B, размещенных на отрезке A.
	/*int A, otresok;
	int B;
	cin >> A;
	cin >> B;
	otresok = A / B;
	cout << otresok << endl;*/
	/*Integer5◦
		.Даны целые положительные числа A и B(A > B).На отрезке длины A
		размещено максимально возможное количество отрезков длины B(без
			наложений).Используя операцию взятия остатка от деления нацело, найти
		длину незанятой части отрезка A.*/
	//int a, b;
	//cin >> a >> b;
	//int ost = a % b;
	//cout << ost << endl;
	/*Integer6◦
		.Дано двузначное число.Вывести вначале его левую цифру(десятки), а затем — его правую цифру(единицы).Для нахождения десятков
		использовать операцию деления нацело, для нахождения единиц — операцию взятия остатка от деления.*/
	/*int num;
	cin >> num;
	int d = num / 10;
	int e = num % 10;
	cout << d << " " << e << endl;*/
	//Integer7◦.Дано двузначное число.Найти сумму и произведение его цифр.
	//*int a;
    //cin >> a;
    ///int b = a / 10;
	//int c = a % 10;
	///int d = b + c;
	///int e = b + c;
	//cout << d << " " << e << endl;*/
	//Integer8.Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.
	/*int a;
	cin >> a;
	int d = a / 10;
	int e = a % 10;
	cout << d << " " << e << endl;*/
	//Integer9◦.Дано трехзначное число.Используя одну операцию деления нацело,
	//вывести первую цифру данного числа(сотни)
	//int a;
	//cin >> a;
	//int b = a / 100;
	//cout << b << endl;
	/*Integer10◦.Дано трехзначное число.Вывести вначале его последнюю цифру
		(единицы), а затем — его среднюю цифру(десятки).*/
	int num, sr, e, sum;
	cin >> num; 
	sr = (num % 100) / 10;
	e = num % 10;
	cout << sr << " " << e << endl;

}