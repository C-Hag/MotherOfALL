#include <stdio.h>

int main() {

    int age; //Specify a variable for a whole number in integer values.
 
	printf("How old are you?\n");
    scanf("%d" , &age);                 //Look for input from keyboard. %d to accept input of integers. &age returns the memory address where the variable is stored. 
    
       if (age >= 18) {    //Should be >=
            printf("Yes, You Can Vote!\n");
    }
    
	return 0;
}

