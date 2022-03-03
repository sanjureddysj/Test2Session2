#include <stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2, float *x3,float *y3)
{
  printf("Enter a co-ordinate:\n");
  scanf("%f%f",x1,y1);
  printf("Enter 2nd co-ordinate:\n");
  scanf("%f%f",x2,y2);
  printf("Enter 3rd co-ordinate:\n");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2, float x3,float y3)
{
  int area;
  area=0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
  if(area==0)
    return 0;
  else
    return 1;
}
void output(int a)
{
  if(a==0)
    printf("does not form a triangle");
  else
    printf("forms a triangle");
}
int  main()
{
  float x1,y1,x2,y2,x3,y3;
  int a;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(a);
  return 0;} 