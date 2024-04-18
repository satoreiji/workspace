/*
 * Sample06_07.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */


/*#include <stdio.h>

int main(void){

    int first;
    int second;
    int i;
    int j;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("最初の数を入力！\n");
    scanf("%d", &first);

    printf("二番目の数を入力\n");
    scanf("%d", &second);

    for(i = 2; i <= first; i++){
        for(j = 2; j <= second; j++){
            if(j < second){
                printf("%d × %d = %d\t", i, j, i * j);
            }
            else{
                printf("%d × %d = %d\n", i, j, i * j);
            }
        }
    }

    return 0;
}
*/

#include <stdio.h>

int main(void){

    int first;
    int second;
    int i;
    int j;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("最初の数を入力！\n");
    scanf("%d", &first);

    printf("二番目の数を入力\n");
    scanf("%d", &second);

    for(i = 2; ; i++){
        for(j = 2; ; j++){
            if(j < second){
                printf("%d × %d = %d\t", i, j, i * j);
            }
            else if(j == second){
                printf("%d × %d = %d\n", i, j, i * j);
            }
            else{
                break;
            }
        }
        if(i >= first){
            break;
        }
    }

    return 0;
}
