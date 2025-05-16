#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int dice_rolls[100];
    for(int i=0; i<100; i++){
        dice_rolls[i] = (rand() %6)+1;
        printf("rool %d\n", dice_rolls[i]);
    }



    return 0;
}
