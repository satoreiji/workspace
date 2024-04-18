/*
 * Sample06_03.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */

#include<stdio.h>

int main(void){
	int i=1;
	int sum=0;
	int sump=0;

	while(i<=10){
		sump=sum;
		sum+=i;
		printf("%d + %d = %d\n",sump,i,sum);
		i++;
	}
	printf("1から10までの和は%dです。\n",sum);
	return 0;
}
