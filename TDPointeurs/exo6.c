#include <stdio.h>
#include <math.h>
void caretsian2polar(float x, float y,float *radius, float *angle){
  int r;
  r=sqrt(pow(x,2)+pow(y,2));
  if(r==0){
    *angle=INFINITY;
  }
  else{
    *angle=atan2(y,x);
  }
  *radius=r;
}
void polar2cartesian(float radius, float angle, float *x, float *y){
  *x=radius*cos(angle);
  *y=radius*sin(angle);
}
int main(){
  float x,y,r,a;
  float *p1,*p2;
  x=5;
  y=60;
  p1=&r;
  p2=&a;
  polar2cartesian(x,y,p1,p2);
  printf("x: %f; y: %f",r,a);
  return 0;
}