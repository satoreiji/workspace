/*
 * Sample06_06.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */


#include <stdio.h>

int main(void){

    int i;
    int j;

    for(i = 2; i <= 9; i++){
        for(j = 2; j <= 9; j++){
            printf("%d × %d = %d", i, j, i * j);
            if(j != 9){
                printf("\t");
            }
            else{
                printf("\n");
            }
        }
    }
    return 0;
}
