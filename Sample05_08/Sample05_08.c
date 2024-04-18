/*
 * Sample05_08.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */
#include <stdio.h>

int main(void){

    char weather;
    int discount;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("現在の天気を文字で入力してください\n晴れ：F、曇り：C、雨：R\n");
    scanf("%c", &weather);

    discount = (weather == 'R') ? 1000 : 0;

    printf("本日の天候割引は%d円です\n", discount);

    return 0;
}

