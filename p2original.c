#include<stdio,h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the first sides of Triangle"\n);
  scanf("%f %f", x1,y1);

  printf("Enter the second sides of Triangle"\n);
  scanf("%f %f", x2,y2);

  printf("Enter the third sides of Triangle"\n);
  scanf("%f %f", x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3) 
{
  if((a+b>c)&&(b+c>a)&&(c+a>b))
  {
    printf("The Points forms Triangle", a,b,c);
  }

  else
  {
    printf("The Points doesn't forms a Triangle", a,b,c);
  }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  printf("The Points forms the triangle", istriangle);
}

int main()
{
  float x1,y1,x2,y2,x3,y3,istriangle;
  input(&x1,&y1,&x2,&y2,&x3,&y3);
  is_tiangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istraingle);
}

