
// **  Author : Hassam   **


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
// using instructed gra scale technieuq
printf("%d",(max+min)/2);

// makiking toGrayScaleLuminosity function

int toGrayScaleLuminosity(int r, int g , int b){

  float lum= r*0.21 + 0.72*g + 0.07 *b;
  return round(lum);
}




// toRedSepia fun 
  
  int toRedSepia(int r;int g;int b){
    r=0.393 * r  + 0.769 * g + 0.189 * b;
    if(r>255){
      r=255; 
    }
    else{
      return round(r);
    }
  }

//sepia green

int sepiagreen(int r, int g , int b ){
  g=0.349*r + 0.686*g + 0.168*b;
  if(g>255){
    g=255;
  }
  else{
    return round(g);
  }
}

// blue

int blue(int r,int g,int b){
  b=0.272*r+0.534*g+0.131*b;
  
}


}
