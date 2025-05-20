#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    /*
    We make a array for 100 of rolles. 
    A array that contains 6 sides of cube. 
    As last one a varaiable that we can use for total mesurement.
    */
    int dice_rolls[100];
    int num [6] = {0};
    int sum  = 0;

    /*
    A loop for 100 of roles that will take random side of cube between 1-6 
    Now we track how many of each index did every roll hit. Thats why we substract so it tracks real index 0-5 and not outside of box
    as last we count total of every roll for each index
    */
    for(int i=0; i<100; i++){
        dice_rolls[i] = (rand() %6)+1;
        num[dice_rolls[i] -1]++;
        sum += dice_rolls[i];    
    }

    /*
    To print out total for specific of 6 sides of cube and not for 100 rolls. 
    We write new loop that will display how many times each side of cube was rolled. 
    As last we write one line for total number and one for avrage
    */
    for(int i=0; i<6; i++){
        printf("%d\n", num[i]);        
    }
        printf("%d\n", sum);
        printf("%.1f", sum/100.0);

    return 0;
}


