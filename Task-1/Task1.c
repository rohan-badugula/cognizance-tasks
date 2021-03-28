/*An elephant decided to visit his friend. It turned out that the elephant's house is 
located at point ​0and his friend's house is located at point ​x​(​x​>0)​ of the coordinate line.
 In one step the elephantcan move ​1​, ​2​, ​3​, ​4​ or ​5​ positions forward. Determine, 
 what is the minimum number of steps he needs to make in order to get to his friend's house.*/

# include <stdio.h>
void main (void)
{
    int steps,destination;
    printf("Enter the coordinate of destination \n");
    scanf("%d",&destination);
    if(destination%5==0)
    {
        printf("The number of steps required to reach is %d ",(destination/5));
    }
    else
    {
       printf("The number of steps required to reach is %d ",(destination/5)+1);
    }
}