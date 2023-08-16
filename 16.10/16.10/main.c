//
//  main.c
//  16.10
//
//  Created by ASUDE on 11.05.2023.
//
#include <math.h>
#include <stdio.h>
struct cember{
    int x;
    int y;
    float yaricap;
};
struct cember yutanibul(struct cember a,struct cember b)
{
    struct cember yutan;
    if(sqrt(pow((a.x-b.x),2)-pow((a.y-b.y),2))>a.yaricap)
       {
           yutan=b;
    }
    else
    {
        yutan=a;
    }
    return yutan;
}
int main()
{
    struct cember a={10,8,4.0}, b={15,10,13.0},yutan;
    yutan=yutanibul(a, b);
    printf("%d %d %f",yutan.x,yutan.y,yutan.yaricap);
    return 0;
}
