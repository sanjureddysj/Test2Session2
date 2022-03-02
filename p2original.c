#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the first sides of Triangle\n");
  scanf("%f %f", x1,y1);

  printf("Enter the second sides of Triangle\n");
  scanf("%f %f", x2,y2);

  printf("Enter the third sides of Triangle\n");
  scanf("%f %f", x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3) 
{
  int area;
  area=1/2*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if(area==0)
  return 0;
  else
  return 1;
}

void output(int a)
{  
    if(a==0)
    printf("Triangle doesn't form");
    else
    printf("Triangle forms");
}

int main()
{
  int a;
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(a);
  return 0;
}

