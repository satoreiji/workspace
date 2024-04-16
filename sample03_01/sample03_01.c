/*
 * sample03_01.c
 *
 *  Created on: 2024/04/16
 *      Author: User
 */


#include <stdio.h>

int main(void){

    int number = 123;
    char a = 'Z';

    printf("変数numberの値は%dです。\n", number);
    printf("変数aの値は%cです。\n", a);

    number = 234;
    a = 'Y';

    printf("変数の値を変更しました\n");
    printf("変数numberの値は%dです。\n", number);
    printf("変数aの値は%cです。\n", a);

	return 0;
}
