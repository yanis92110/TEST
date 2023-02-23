#include <stdio.h>
#include <math.h>
int resoudre1(float a, float b, float *res){
  if((a==0)&&(b!=0)){
    return 0;
    }
  if(b==0){
    *res=0;
    return 1;
  }
  else{
    *res=-b/a;
    return 1;
  }
  }

int resoudre2(float a, float b, float c,float *res1, float *res2){
  float d;
  d=powf(b,2)-4*a*c;
  if(d<0){
    return 0;
  }
  if(d==0){
    *res1=-b/2*a;
    return 1;
  }
  else{
    *res1=(-b-sqrt(d))/2*a;
    *res2=(-b+sqrt(d))/2*a;
    return 2;
  }
}
int main(){
  float a,b,c;
  float *p1,*p2,*p3;
  float solut1;
  float solut2;
  int test;
  p1=&solut1;
  p2=&solut2;
  a=3;
  b=-6;
  c=-2;
  test=resoudre2(a,b,c,p1,p2);
  printf("%d\n",test);
  return 0;
}