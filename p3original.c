#include <stdio.h>
void input(float *x1, float *y1, float *x2,float *y2)
{
  printf("Enter a co-ordinate:\n");
  scanf("%f%f",x1,y1);
  printf("Enter the second one:\n");
  scanf("%f%f",x2,y2);
}
float _sqrt(float a)
{
  float sqrt=a;
  float temp=0;
  while(sqrt!=temp)
  {
    temp=sqrt;
    sqrt=((a/temp)+temp)/2;
  }
  return sqrt;
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  float sum=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  *area=_sqrt(sum);
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between point (%f,%f) and (%f,%f) is with %f",x1,y1,x2,y2,area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}