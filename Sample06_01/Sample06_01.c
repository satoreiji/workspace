/*
 * Sample06_01.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */

#include <stdio.h>

int main(void){

	int sum=0;
	int i;

	for(i=1;i<=10;i++){
		sum+=i;
	}
	printf("1から10までの和は%dです。\n",sum);

	return 0;
}
