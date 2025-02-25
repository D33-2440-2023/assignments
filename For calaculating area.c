//function to calculate area of a rectangle
/*
AUTHOR:David Mullah
REG NO:D33-2440-2023
*/
#include<stdio.h>
int main(){
  float length,width,area;
  //input length and width of the rectangle
  printf("enter the length of the rectangle: ");
  scanf("%f",&length);
  printf("enter the width of the rectangle: ");
  scanf("%f",&width);
  //call the function to calculate the area 
  area=length * width;
  //display the result
  printf("the area if the rectangle is :%.2f\n",area);
  return 0 ;
}