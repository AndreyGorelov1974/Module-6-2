﻿/*Задание 2. Слишком большие числа
Что нужно сделать
У неудачливого бухгалтера всё опять идёт наперекосяк: ему приносят такие большие счета, что числа не помещаются на бумаге. Напишите программу, которая считала бы для него, сколько цифр (знаков) во вводимом числе.

Пример выполнения

            Введите число: 10 
            Цифр в числе: 2

Рекомендации по выполнению
Тип int вмещает в себя не больше десяти цифр (предположим, что у бухгалтера очень маленькие листы бумаги).
Проверьте, как программа будет себя вести на отрицательных числах и нуле.
Что оценивается
В числе ноль программа определяет одну цифру.
Количество цифр определяется правильно.*/

#include <iostream>

int main()
{
	std::cout << "Введите сколько сейчас часов: ";
	int currentHour;
	std::cin >> currentHour;
	if (currentHour < 1 || currentHour > 12)  std::cout << "Показания часов не могут быть меньше 1 или больше 12.\n"; else {
		while (currentHour != 0) {
			std::cout << "Ку - ку!\n";
			--currentHour;
		}
	};
}