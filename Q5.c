#include <stdio.h>
int main(){
    float x,y;
    printf("Enter the value of x coordinate : ");
    scanf("%f",&x); 
    printf("Enter the value of y coordinate : ");
    scanf("%f",&y);
    if(x==0 && y==0){
        printf("The point is the origin.\n");
    }
    else if(x>=0 && y>=0){
        printf("It is in the first quadrant.\n");
    }
    
    else if(x<=0 && y>=0){
        printf("It is in the second quadrant.\n");
    }
    
    else if(x>=0 && y<=0){
        printf("It is in the fourth quadrant.\n");
    }
    else{
        printf("It is in the third quadrant.\n");
    }
    return 0;
}