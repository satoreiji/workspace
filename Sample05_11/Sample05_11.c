/*
 * Sample05_11.c
 *
 *  Created on: 2024/04/18
 *      Author: User
 */

#include <stdio.h>

int main(void){

    int mid;
    int end;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("中間試験の点数を入力！：");
    scanf("%d", &mid);

    printf("期末試験の点数を入力！：");
    scanf("%d", &end);

    if (mid >= 50 && end >= 70){
        printf("成績は 5\n");
    }
    else if((mid < 50 && end >= 70) || (mid >=70 && (end >= 50 && end <= 69))){
        printf("成績は 4\n");
    }
    else if(((mid >=50 && mid <= 69) && (end >= 50 && end <= 69)) || (mid >=70 && end < 50)){
        printf("成績は 3\n");
    }
    else if((mid < 50 && (end >= 50 && end <= 69)) || ((mid >=50 && mid <= 69) && end < 50)){
        printf("成績は 2\n");
    }
    else{
        printf("成績は 1\n");
    }

    return 0;
}
