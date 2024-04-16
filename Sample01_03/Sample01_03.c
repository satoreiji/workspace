/*
 * Sample01_03.c
 *
 *  Created on: 2024/04/16
 *      Author: User
 */


#include <stdio.h>

int main(void){

	int i;
	int j;

	for(i = 1; i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}
	return 0;
}
