#include<stdio.h>
int main()
{
int radius,Area;
float pi = 3.14;
printf("Enter the radius: ");
scanf("%d",&radius);
Area = pi*radius*radius;
printf("Area of circle is %d having radius %d",Area,radius);
return 0;
}
