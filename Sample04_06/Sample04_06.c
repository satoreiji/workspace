/*
 * Sample04_06.c
 *
 *  Created on: 2024/04/17
 *      Author: User
 */

#include <stdio.h>

int main(void){

    int a = 0;
    int b = 0;
    int c;

    c = ++a;
    printf("前置インクリメントの結果cは %d に、aは %d になりました。\n", c, a);

    c = b++;
    printf("後置インクリメントの結果cは %d に、bは %d になりました。\n", c, b);

    return 0;
}
