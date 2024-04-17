/*
 * Sample04_16.c
 *
 *  Created on: 2024/04/17
 *      Author: User
 */
#include <stdio.h>

int main(void){

	int num1;
	double anser;

	const double a = 3.14;

	setvbuf(stdout, NULL, _IONBF, 0);

	scanf("%d",&num1);
	anser = num1 * num1 * a / 4;

	printf("面積は%fヘイホウメートル\n",anser);

	return 0;
}

/*#include <stdio.h>

int main(void){

    const double pi = 3.14;
    int diameter;
    double area;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("円の直径を整数（メートル）で指定！：");

    scanf("%d", &diameter);

    area = diameter * diameter * pi / 4;

    printf("円の面積は%f平方メートルです\n", area);

    return 0;
}*/
