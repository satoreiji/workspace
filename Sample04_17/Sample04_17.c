/*
 * Sample04_17.c
 *
 *  Created on: 2024/04/17
 *      Author: User
 */

#include <stdio.h>

int main(void){

    int jpNum;   /*国語の点数*/
    int enNum;   /*英語の点数*/
    int maNum;   /*数学の点数*/
    int scNum;   /*理科の点数*/
    int soNum;   /*社会の点数*/
    int sum3;    /*3科目の合計*/
    int sum5;    /*5科目の合計*/

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("国語の点数を入力！：");
    scanf("%d", &jpNum);

    printf("英語の点数を入力！：");
    scanf("%d", &enNum);

    printf("数学の点数を入力！：");
    scanf("%d", &maNum);

    printf("理科の点数を入力！：");
    scanf("%d", &scNum);

    printf("社会の点数を入力！：");
    scanf("%d", &soNum);

    sum3 = jpNum + enNum + maNum;
    sum5 = sum3 + scNum + soNum;

    printf("\n3科目合計は%d点です\n", sum3);
    printf("3科目平均は%.2f点です\n", (double)(sum3 * 100 / 3) / 100);

    printf("\n5科目合計は%d点です\n", sum5);
    printf("5科目平均は%.2f点です\n", (double)(sum5 * 100 / 5) / 100);

    return 0;
}

