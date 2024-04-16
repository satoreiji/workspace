/*
 * Sample01_02.c
 *
 *  Created on: 2024/04/16
 *      Author: User
 */


/*
 * Sample01_02.c
 *
 *  Created on: 2024/04/16
 *      Author: User
 */


/*
 * #include <stdio.h>

 * 1から1000まで足す

int main(void) {

    int sum = 0;
    int sump;
    int i;

    for (i = 1; i <= 1000; i++){
        sump = sum;

        sum = sum + i;

        printf("%d+%d=%d\n", sump, i, sum);
    }
    return 0;
}
 */
#include <stdio.h>

int main(void) {
	int sum=0;
	int sump;
	int i;

	for(i=1;i<=1000;i++){

		sum=sum+i;

		printf("%d+%d=%d\n",sump,i,sum);
	}
	return 0;
}
