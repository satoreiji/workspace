/*
 * Sample05_09.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */


#include <stdio.h>

int main(void){

    int firstSunday;
    int today;
    int day;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("今月の最初の日曜日の日付を入力！\n");
    scanf("%d", &firstSunday);

    printf("日付を入力！\n");
    scanf("%d", &today);

    day = (today - firstSunday + 7) % 7;
    /*
      最初の日曜以前の日付でも負の数にならないように7を足しています。
      負の数の剰余はC言語では負の数になるので不都合が生じます。
    */

    if(day == 0){
        printf("今日は日曜日です。\n");
    }
    else if(day == 1){
        printf("今日は月曜日です。\n");
    }
    else if(day == 2){
        printf("今日は火曜日です。\n");
    }
    else if(day == 3){
        printf("今日は水曜日です。\n");
    }
    else if(day == 4){
        printf("今日は木曜日です。\n");
    }
    else if(day == 5){
        printf("今日は金曜日です。\n");
    }
    else {
        printf("今日は土曜日です。\n");
    }

    return 0;
}
