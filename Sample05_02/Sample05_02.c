/*
 * Sample05_02.c
 *
 *  Created on: 2024/04/17
 *      Author: User
 */
#include <stdio.h>

int main(void){

    int i;
    double d = 0.0;

    for(i = 0; i < 10; i++){
        d += 0.1;
    }

    printf("d == 1.0 の値は %d です。\n", d == 1.0);

    return 0;
}

