#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i=0; i<100; i++)
        printf("%3d\n",rand()%100+1);    //输出100个从1~100的随机数
    return 0;
}
