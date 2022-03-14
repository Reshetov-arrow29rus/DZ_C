// DZ3_C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	/*  ЗАДАНИЕ 1
	Пользователь вводит с клавиатуры время в секундах. Необходимо написать программу, которая переведет введенные
	пользователем секунды в часы, минуты, секунды и выводит
	их на экран.


		int   seconds, minutes, hours;
		int seconds_end, minutes_end;

		cout << "Введите время в секундах" << endl;
		cin >> seconds;
		minutes = seconds / 60;
		seconds_end = seconds - (minutes * 60);

		hours = minutes / 60;
		minutes_end = minutes - (hours * 60);

		cout << hours << "час(а)(ов)  " << minutes_end << " минут(а)   " << seconds_end << "секунд(а)";
	*/

	/*  ЗАДАНИЕ 2
	Написать программу, которая преобразует введенное с
	клавиатуры дробное число в денежный формат. Например,
	число 12,5 должно быть преобразовано к виду — 12 долларов
	и 50 центов.
	

	float number; 
	int intnumber, a,b;			// a - Целая часть  b - Дробная часть
	cout << "Введите дробное число: ";
	cin >> number;
	intnumber = number * 100;
	a = intnumber / 100;
	b = intnumber % 100;
	cout  << a << " рублей" << " | " << b << " копеек " << endl;
*/

	/*
	ЗАДАНИЕ 3
Написать программу, которая преобразует введенное
пользователем количество дней в количество полных недель
и оставшихся дней. Например, пользователь ввел 17 дней,
программа должна вывести на экран 2 недели и 3 дня.
	

	int day;
	cout << "Введите количество дней: \n";
	cin >> day;
	cout << day / 7 << " недель и " << day % 7 << " дн(я/ей)" << endl;
*/

	/*
	ЗАДАНИЕ 4
Написать программу, вычисляющую, с какой скоростью
бегун пробежал дистанцию.


	double time,score, distance, seconds, min,result_time;

	cout << "Введите длину дистанции (метров) = ";
	cin >> distance;
	cout << endl;
	cout << "Введите время (мин.сек) = ";
	cin >> time;
	cout << endl;

	cout << "Дистанция: " << distance << " м" << endl;
	cout << endl;
	min = (int)time;
	seconds = (time - min) * 100;
	result_time = min * 60 + seconds;
	cout << "Время: " << min << " мин " << seconds << " секунд (ы) = " << result_time << " cек" << endl;
	cout << endl;
	score = (distance / 1000) / (result_time / 3600);
	cout << "Вы бежали со скоростью "<< score << " км./ч." << endl;
*/

	/*
	ЗАДАНИЕ 5
Написать программу, которая предлагает пользователю
ввести сумму денежного вклада в евро, а также процент годовых, которые выплачивает банк. 
Определить сумму денег,
выплачиваемых банком вкладчику каждый месяц.
	*/

	double percent_money, summa_money, percent, contribution;

	cout << "Введите сумму вклада:  ";
	cin >> contribution;
	cout << endl;
	cout << "Введите годовой процент: ";
	cin >> percent;
	cout << endl;
	percent_money = contribution * (percent / (double)100) * ((double)30 / (double)365); //начисление процентов в месяц
	summa_money = contribution + percent_money;
	cout << "Проценты за 1 месяц  " << percent_money << endl;
	cout << "Итоговая сумма вклада после 1 месяца  " << summa_money << endl;
	// Инициативное продолжение
	for (int i = 1; i < 12; i++) {
		percent_money = summa_money * (percent / (double)100) * ((double)30 / (double)365);
		cout << "Проценты за " << i+1 << " месяц  " << percent_money << endl;
		summa_money += percent_money;
		cout << "Итоговая сумма вклада после " << i + 1 << " месяца  " << summa_money << endl;
	}





}

