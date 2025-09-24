#include<stdio.h>
float minimal(float a,float b) /*class name=type the variable is*/
{
    float min;
    if(a<b)
        min=a;
    else
        min=b;
    return min;
}
void main()
{
    float x,y,c;
    printf("input x and y.\n");
    scanf("%f%f",&x,&y);
    c=minimal(x,y);
    printf("%.2f\n",c);
}
