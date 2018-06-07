﻿#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <locale.h>
#include <iostream>
#include <time.h>

void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	unsigned int n = 1;

	do
	{
		printf("n = ");
		scanf("%d", &n);

        if (n == 1) {
			printf("1.	Даны два действительных числа. Вывести первое число, если оно больше второго, и оба числа, если это не так.\n");
			
			float a, b;

			printf("a = ");
			scanf("%f", &a);

			printf("b = ");
			scanf("%f", &b);

			if (a > b) printf("%d\n", a); else printf("%d\t%d\n", a, b);
		}
		else if (n == 2) {
			printf("2.	Даны два действительных числа. Заменить первое число нулем, если оно меньше или равно второму, и оставить числа без изменения в противном случае\n");
			
			float a, b;

			printf("a = ");
			scanf("%f", &a);

			printf("b = ");
			scanf("%f", &b);

			if (a <= b) printf("%d\n", a = 0); else printf("%d\t%d\n", a, b);
		}
		else if (n == 3) {
			printf("3.	Даны три действительных числа. Выбрать из них те, которые принадлежат интервалу (1, 3).\n");

			float a, b, c;

			printf("a = ");
			scanf("%f", &a);

			printf("b = ");
			scanf("%f", &b);

			printf("c = ");
			scanf("%f", &c);


			if (a >= 1 && a <= 3) printf("*a* принадлежит интервалу 1,3\n"); else printf("*a* НЕ принадлежит интервалу 1,3\n");
			if (b >= 1 && b <= 3) printf("*b* принадлежит интервалу 1,3\n"); else printf("*b* НЕ принадлежит интервалу 1,3\n");
			if (c >= 1 && c <= 3) printf("*c* принадлежит интервалу 1,3\n"); else printf("*c* НЕ принадлежит интервалу 1,3\n");
		}
		else if (n == 4) {
			printf("4.	Даны действительные числа х, у (х!=у ). Меньшее из. этих двух чисел заменить их полусуммой*, а большее — их удвоенным произведением.\n");
			
			float x, y;

			printf("x = ");
			scanf("%f", &x);

			printf("y = ");
			scanf("%f", &y);


			if (x != y) {
				if (x < y) {
					printf("x = %.2f\n", (x + y) / 2);
					printf("y = %.2f\n", 2 * y);
				}
				else {
					printf("y = %.2f\n", (x + y) / 2);
					printf("x = %.2f\n", 2 * y);
				}
			}
		
		}
		else if (n == 5) {
			printf("5.	Даны три действительные числа. Возвести в квадрат те из них, значения которых неотрицательны.\n");
			
			float a, b, c;

			printf("a = ");
			scanf("%f", &a);

			printf("b = ");
			scanf("%f", &b);

			printf("c = ");
			scanf("%f", &c);
			if (a < 0 && b < 0 && c < 0) printf("Все значения отрицательны!\n");
			else {
				if (a > 0)	printf("a = %.2f\n", pow(a, 2));
				if (b > 0)  printf("b = %.2f\n", pow(b, 2));
				if (c > 0)  printf("c = %.2f\n", pow(c, 2));
			}
		}
		else if (n == 6) {
			printf("6.	Если сумма трех попарно различных действительных чисел х, у, z меньше единицы, то наименьшее из этих трех чисел заменить полусуммой* двух других; в противном случае заменить меньшее из х и у полусуммой* двух оставшихся значений. \n");
			
			float x, y, z;

			printf("x = ");
			scanf("%f", &x);

			printf("y = ");
			scanf("%f", &y);

			printf("z = ");
			scanf("%f", &z);

			if (x != y && x != z && y != z)	{
				if (x + y + z < 1) {
					if (x < y && x < z) printf("x = %.2f\n", (float)(y + z) / 2);
					else if (y < z && y < x) printf("y = %.2f\n", (float)(x + z) / 2);
					else if (z < x && z < y) printf("z = %.2f\n", (float)(y + x) / 2);
					else if (x < y) printf("x = %.2f\n", (float)(y + z) / 2);
					else printf("y = %.2f\n", (float)(x + z) / 2);
				} else printf("сумма трех попарно различных действительных больше 1\n");
			}
		}
		else if (n == 7) {
			printf("7.	Даны действительные числа х, у. Если х и у отрицательны, то каждое значение заменить его модулем; если отрицательно только одно из них, то оба значения увеличить на 0.5; если оба значения неотрицательны и ни одно из них не принадлежит отрезку [0.5, 2.0], то оба значения уменьшить в 10 раз; в остальных случаях х и у оставить без изменения\n");
			
			float x, y;

			printf("x = ");
			scanf("%f", &x);

			printf("y = ");
			scanf("%f", &y);

			if (x < 0 && y < 0) {
				x = abs(x);
				y = abs(y);
			}
			else if (x < 0 && y >= 0)   x = x + 0.5; 
			else if (x >= 0 && y < 0) y = y + 0.5;
			else if (x >= 0 && y >= 0) {
				if ((x < 0.5 && x>2) || (y < 0.5 && y>2)) {
					x = x / 10;
					y = y / 10;
				}
			} 
			printf("x = %.2f\ny = %.2f\n\n", x, y);

		}
		else if (n == 8) {
			printf("8. Даны действительные положительные числа х, у, z. \na. Выяснить, существует ли треугольник с длинами сторон х, у, z.\nb. Если треугольник существует, то ответить—является ли он остроугольным\n");

			float x, y, z;

			printf("x = ");
			scanf("%f", &x);

			printf("y = ");
			scanf("%f", &y);

			printf("z = ");
			scanf("%f", &z);

			if (x > 0 && y > 0 && z > 0)
			{
				printf("существует треугольник\n");
				if (x > y && x > z) {
					if (pow(x, 2) < pow(y, 2) - pow(z, 2)) printf("Треугольник остроугоьный!\n"); else printf("Треугольгик не остроугольный\n");
				}
				else if (y > x && y > z) {
					if (pow(y, 2) < pow(x, 2) + pow(z, 2)) printf("Треугольник остроугоьный!\n"); else printf("Треугольгик не остроугольный\n");
				}
				else if (z > x && z > y) {
					if (pow(z, 2) < pow(x, 2) + pow(y, 2)) printf("Треугольник остроугоьный!\n"); else printf("Треугольгик не остроугольный\n");
				}
			}
			else printf("треугольник не может быть со стороной 0\n");
		}
		else if (n == 9) {
			printf("9.	Даны действительные числа а, b, с (a!=0). Полностью исследовать биквадратное уравнение ах4 + Ьх2 + с=0, т. е. если действительных корней нет, то должно быть выдано сообщение об этом, иначе должны быть выданы два или четыре корня.\n");
			
			int a = 0, b = 0, c = 0;
			
			float y1 = 0, y2 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, d;

			printf("Введите значение a:\t");
			scanf("%d", &a);

			printf("Введите значение b:\t");
			scanf("%d", &b);

			printf("Введите значение c:\t");
			scanf("%d", &c);

			if (a != 0)
			{

				printf("Преобразуем биквадратное уравнение ах4 + Ьх2 + с = 0 в y = ax^2 + bx + c. \n");

				d = pow(b, 2) - 4 * a*c;

				printf("Дискриминант d = %f\n", d);

				if (d > 0)
				{
					y1 = (-b + sqrt(d)) / (2 * a);
					y2 = (-b - sqrt(d)) / (2 * a);

					printf("Корни уравнения равны: y1 = %f\ty2 = %f\n", y1, y2);

					x1 = sqrt(y1);
					x2 = -sqrt(y1);
					x3 = sqrt(y2);
					x4 = -sqrt(y2);

					printf("Корни биквадратного уравнения равны: x1 = %f\nx2 = %f\nx3 = %f\nx4 = %f\n", x1, x2, x3, x4);
				}
				else if (d == 0)
				{
					printf("x1 = %f\nx2 = %f\n", (float)-b / 2 * a, (float)b / 2 * a);

				}
				else if (d < 0)
				{
					printf("Корней нет.\n");
				}

			}

			else
			{
				printf("Значение а не должно быть равно нулю.\n");
			}
		
		}
		else if (n == 10) {

			printf("10.	Дано действительное число х. Получить целую часть\na. числа х;\nb. затем—число х, округленное до ближайшего целого;\nc. затем—число х без дробных цифр\n");

			float x1, a1;

			printf("x = ");
			scanf("%f", &x1);

			a1 = floor(x1);
			printf("целое число = %.0f\n", a1);
			a1 = x1 - a1;
			if (a1 >= 0.5) {
				printf("число х, округленное до ближайшего целого = %.0f\n", ceil(x1));
			}
			else printf("целое число = %.0f\n", floor(x1));

			int y1 = (int)x1;
			printf("число х без дробных цифр = %d\n", y1);
		}

	} while (n > 0);
}