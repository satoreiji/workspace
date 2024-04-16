/*
 * sample03_03.c
 *
 *  Created on: 2024/04/16
 *      Author: User
 */


#include <stdio.h>

/*
 * 型の違う変数の値を代入
 */
int main(void) {

    int number1 = 123;
    float number2 = 23.4f;

    printf("number1の値は%dです。\n", number1);
    printf("number2の値は%fです。\n", number2);


    number2 = number1;

    printf("number1の新しい値は%fです。\n", number2);


    return 0;
}
