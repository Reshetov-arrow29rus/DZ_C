﻿// DZ2_C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#define pi 3.14 // число пи

using namespace std;


int main()
{
	setlocale(LC_ALL, "");

/*	ЗАДАНИЕ 1
		Заданы три сопротивлении R1, R2, R3.
		Вычислить значение сопротивления R0 
		по формуле : 1 / R0 = 1 / R1 + 1 / R2 + 1 / R3.

		
	float r1, r2, r3, r0;
	cout << "Задайте сопротивления для R1, R2, R3\n";
	cin >> r1 >> r2 >> r3;
	r0 = 1 / r1 + 1 / r2 + 1 / r3;
	r0 = 1/r0;
	cout << "R0 =" << r0;
*/

/*	ЗАДАНИЕ 2
По заданной длине окружности найти площадь круга
по формуле S = pi*R2, радиус вычислить из формулы длины
окружности: L=2*pi *R.


	float S, L, R;
	cout << "Введите длину окружности L = : ";
	cin >> L;
	R = L / (2 * pi);
	S = pi * R * R;
	cout << " S = " << S;
*/

/*  ЗАДАНИЕ 3
Вычислить пройденное расстояние при прямолинейном
равноускоренном движении по формуле S = v*t + (a*t2) / 2,
где v — скорость, t — время, а — ускорение.


	int S, v, t, a;

	cout << "Программа вычесления пройденного расстояния при прямолинейном равноускоренном движении" << endl;
	cout << "Введите скорость v = : ";
	cin >> v;
	cout << "Введите время t = : ";
	cin >> t;
	cout << "Введите ускорение a = : ";
	cin >> a;
	S = v * t + (a * (t * t)) / 2;
	cout << "Значение пройденного расстояния при прямолинейном равноускоренном движении S = " << S << endl;
*/




}


