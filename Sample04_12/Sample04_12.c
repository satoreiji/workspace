/*
 * Sample04_12.c
 *
 *  Created on: 2024/04/17
 *      Author: User
 */

#include <stdio.h>

int main(void){

    int inumber;
    double dnumber = 30.48;

    printf("1フィートは約%fセンチメートルです\n", dnumber);

    inumber = dnumber;

    printf("1フィートは約%dセンチメートルです\n", inumber);

    return 0;
}
