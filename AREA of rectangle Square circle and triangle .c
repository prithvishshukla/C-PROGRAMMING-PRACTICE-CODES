#include <stdio.h>
int main() 
{
  float a,b,c,s,area;
  int n;
  printf ("Enter:\n1:For Rectangle \n2:For square \n3:For circle\n4:For triangle\n");
    scanf("%d",&n);
    switch(n){
    
    case 1: printf("Enter length and breadth of rectangle");
    scanf("%f%f",&a,&b);
    area=a*b;
    printf("Area of Rectanle:%f",area);
    break;


    case 2: printf("Enter Side of square");
    scanf("%f%f" ,&a);
  area=a*a;
  printf("Area of Square:%f",area);
      break;
  
    case 3: printf("Enter radius of circle");                    
    scanf("%f" ,&a);  
    area=3.14*a*a;
    printf("Area of Circle:%f",area);
    break;


    case 4: printf("Enter length and breadth of rectangle");
    scanf("%f%f", &a, &b);
    area=0.5*a*b;
    printf("Area of Triangle:%f",area);
    break;  
    default: printf("Invalid Input");
    break;
    }
  return 0;
}
