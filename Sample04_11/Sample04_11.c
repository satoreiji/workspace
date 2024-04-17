/*
 * Sample04_11.c
 *
 *  Created on: 2024/04/17
 *      Author: User
 */


#include <stdio.h>

int main(void){

    int inumber = 30;
    double dnumber;

    printf("1フィートは約%dセンチメートルです\n", inumber);

    dnumber = inumber;

    printf("1フィートは約%fセンチメートルです\n", dnumber);

    return 0;
}
