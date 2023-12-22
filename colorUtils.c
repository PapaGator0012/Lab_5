
#include "colorUtils.h"
#include <math.h>
double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}

//making a min function as instructed 

int min( int r, int g , int b ){

   int min= r;
   if(min<g && min<b){
    printf("%d",r);
   } 

   else if (min>g && b>g){
    printf("%d",g);
   }
   
   else {
    return b;
   }

//making toGrayScaleBrightness

int toGrayScaleBrightness(int r, int g , int b ){

  int max= r;
  

  int min=r;
  if(r>g && r>b ){
    max=r;
    
    return r;
  }

else if(g>r && g>b){
  max=g;
  return g;
}
else{
  max=b;
  return b;
}


}

//find the minium value 

if(min>g && b>g){
  min=g;
}
else if(min>b && g>b){
  min=b;
}
else{
  min=r;
}



}
