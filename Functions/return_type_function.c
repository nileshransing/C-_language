#include<stdio.h>

     // Area of Circle
float areaofcircle(int r){
   return 3.14*r*r;
}
    
    // Area of Rectangle
int areaofRectangle(int length,int width){
    return length*width;
}

// Area of Traigle
float areaofTriangle(int heigth, int base){
    return 0.5 * heigth*base;
}
int main(){
    
     int radius = 5;
    float Area = areaofcircle(radius);
    printf("Area of circle is = %f\n",Area); 
   
   
   int area = areaofRectangle(5,5);
   printf("Area of Rectangle is = %d\n",area);


  float ans = areaofTriangle(4,7);
  printf("Area of Taiangle is = %f\n",ans);
    return 0;
}