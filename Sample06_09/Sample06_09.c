/*
 * Sample06_09.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */

#include <stdio.h>

int main(void){

    int month;
    int day;
    int days;
    int i;
    int j;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("何月のカレンダーを作成しますか？\n");
    scanf("%d", &month);

    printf("1日の曜日は？日曜 = 0･･･土曜 = 6で入力\n");
    scanf("%d", &day);

    if(month == 2){
        days = 28;
    }
    else if(month ==4 || month == 6 || month ==9 || month == 11){
        days = 30;
    }
    else{
        days = 31;
    }

    printf("%d月のカレンダー\n", month);
    printf("日\t月\t火\t水\t木\t金\t土\n");

    for(i = 1; i <= day; i++){
        printf("\t");
    }

    for(j = 1; j <= days; j++){
        if((j + day) % 7 != 0){
            printf("%d\t", j);
        }
        else{
            printf("%d\n", j);
        }
    }

    printf("\n");

    return 0;
}
