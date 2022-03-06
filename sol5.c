#include <stdio.h>  
int main()  
{  
    int height,int radius;  
    printf("Enter the Height of the cylinder : ");
    scanf("%d", &height);
    printf("Enter the radius of the cylinder : ");
    scanf("%d, &radius");
    double pie=3.14285714286;  
    double volume=pie*(radius*radius)*height;  
    printf("Volume of the cylinder=%f",volume);

    return(0);  
}