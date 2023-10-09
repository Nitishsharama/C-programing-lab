// Program to find the euclidean distance between two points in a plane 
#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    printf("Enter the coordinates of first point:");
    scanf("%d %d",&x1,&y1);
    printf("enter the co-ordinates of second point:");
    scanf("%d %d",&x2,&y2);
    float distance = sqrt (pow(x2-x1,2)+pow(y2-y1,2));
    printf("\n distance: %f",distance);
    return 0;
}