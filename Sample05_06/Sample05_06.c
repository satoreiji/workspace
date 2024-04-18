/*
 * Sample05_06.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */


/*#include <stdio.h>

int main(void){

    int weather;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("現在の天気を数値で入力してください\n晴れ：1、曇り：2、雨：3\n");
    scanf("%d", &weather);

    switch(weather){
    case 1:
        printf("今日はハイキングに行きましょう。\n");
        printf("コンビニでお弁当を買いましょう。\n");
        break;
    case 2:
        printf("今日は映画鑑賞に行きましょう。\n");
        printf("お昼ごはんはマクドナルド。\n");
        break;
    case 3:
        printf("ツタヤでDVDを借りてきましょう。\n");
        printf("お昼ごはんは近所の満腹食堂。\n");
        break;
    default:
        printf("1か2か3を入力してください\n");
        break;
    }

    printf("出かけるときには、戸締りを！\n");

    return 0;
}*/

#include <stdio.h>

int main(void){

    int weather;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("現在の天気を数値で入力してください\n晴れ：1、曇り：2、雨：3\n");
    scanf("%d", &weather);

    switch(weather){
    case 1:
        printf("今日はハイキングに行きましょう。\n");
        printf("コンビニでお弁当を買いましょう。\n");
    case 2:
        printf("今日は映画鑑賞に行きましょう。\n");
        printf("お昼ごはんはマクドナルド。\n");
    case 3:
        printf("ツタヤでDVDを借りてきましょう。\n");
        printf("お昼ごはんは近所の満腹食堂。\n");
    default:
        printf("1か2か3を入力してください\n");
    }

    printf("出かけるときには、戸締りを！\n");

    return 0;
}
