// while syntax , do~while syntax

// basically is the same with "for" function which is loop but with different syntax
//  while (" ") {  } 
// but for while statement we need to declare the variable first before the loop 
// and the incremenent is within the {} 

#include <stdio.h>

int main(void){
  // example 
  // delcare the variable which is number
  int number = 1;
  while(number <= 10){ // conditionn which is cannot more than 10
  printf("%d", number); // will print this as the loop goes
  number++; // increment the value of number which is within the loop
  }

// do ~ while syntax 
// do { } while (" " );
// example
  do {
    number ++;
    printf("%d", number);
  } while(number < 10);
return 0;
}

