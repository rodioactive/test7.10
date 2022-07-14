//
//  main.c
//  test.7.10
//
//  Created by Jlision Eilish on 2022/7/10.
//

#include <stdio.h>
//Basic
int main()
{
    printf("hello,bit\n");


    return 0;
}
//字节大小sizeof
int main()
{
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(char));


    return 0;
}
int a =100;
int main()
{
    int a =5;

    printf("%d\n",a);

    return 0;
}

int main()
{
    int age = 10;

    double weight =11.4;


    printf("weight=%lf\n",weight);

    printf("age=%d\n",age);


    return 0;
}
//simple函数
int Add(int x, int y)
{
    int z = 0;
    z =x + y;
    return z;

}
int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    scanf("%d %d",&num1,&num2);
    sum = Add(num1,num2);

    printf("sum=%d\n", sum);


    return 0;
}



















