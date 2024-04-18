/*
 * Sample06_02.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */
#include <stdio.h>

int main(void){

	int first;
	int end;
	int i;
	int sum=0;
	int sump=0;

	setvbuf(stdout, NULL, _IONBF, 0);
	printf("最初の数を入力\n");
	scanf("%d",&first);

	printf("最後の数を入力\n");
	scanf("%d", &end);

	if(first > end){
		printf("最初の数の法が最後の数より大きいです.\n");

	}else{
		for(i=first;i<=end;i++){
			sump=sum;
			sum+=i;
			printf("%d + %d = %d\n",sump,i,sum);
		}
		printf("%dから%dまでの和は%dです\n",first,end,sum);
	}
	return 0;

}

