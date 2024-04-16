/*
 * sample03_04.c
 *
 *  Created on: 2024/04/16
 *      Author: User
 */

#include <stdio.h>

/*
 * const修飾子
 */
int main(void) {

    const int number = 123;

    printf("変数numberの値は%dです。\n", number);

    number = 234;

    printf("変数の値を変更しました\n");
    printf("変数numberの値は%dです。\n", number);

    return 0;
}
