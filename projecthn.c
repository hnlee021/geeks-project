#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. 인풋에 연결한 순서 기억 
//2. 연결 해제시 마지막으로 연결한 인풋을 아웃풋으로 설정
//3. 기본 아웃풋값은 1번 인풋

int num[8] = {0};
int onoff[8] = {0};
int input = 0;
int output = 0;
char option[10] = {0};
int cnt = 1;

int main()
{   
    scan();
    HDMI();
    main();
    return 0;
}

int scan()
{   
    char option[10] = {0};
    printf("option :");
    scanf("%s/n", &option);
    printf("%s\n", option);
    if(strcmp(option, "input") == 0) {
        scanf("%d/n", &input);
        
        onoff[input-1] = 1;
        num[input-1] = cnt;
        cnt++;
    }
    else if(strcmp(option, "output") == 0) {
        scanf("%d/n", &output);
        onoff[output-1] = 0;
        num[input-1] = 0;
        cnt--;
    }
    if(cnt > 8){cnt = 1;}
}

int HDMI()
{
    printf("--------------------------------------\n");
    printf(" out  %d  %d  %d  %d  %d  %d  %d  %d  \n",
    num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7]);
    printf("  %d   %d  %d  %d  %d  %d  %d  %d  %d \n",
    1, onoff[0], onoff[1], onoff[2], onoff[3], onoff[4], onoff[5], onoff[6], onoff[7]);
    printf("--------------------------------------\n");
}



