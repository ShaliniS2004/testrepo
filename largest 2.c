#include<stdio.h>
int main(int*argc,char*argv[])
{
    if(argc!=3)
    {
        printf("usage:%s<number1><number>\n",argc);

    }
    int num1=atoi(argv[1]);
    int num2=atoi(argv[2]);
    if(num1>num2)
    {
        printf("largest number is%d\n",num1);

    }
    else
    {
        printf("largest number is%d\n",num2);

    }
 return 0;
}
