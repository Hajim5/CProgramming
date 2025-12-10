//반보문(for문) 
//There are many example or use case using "for" syntax
// syntax for : for(" ";" ";" "){} //curly is optional
#include <stdio.h>

int main(void){
  int i;
  for(i = 0; i < 5; i++){ // basically 1st " " = indicating what number you want to start with usually 0 or 1, 
    //2nd " " = condition for example i < less than 5 = true and the loop will repeat until it because false 
    //3rd " " = increasing of i in this example, we can change to i+=2 or something else based on what we want. 
    //1st example : basic printf
    printf("*******" \n"); //{it will repeat and printf until the loop is end}
    //2nd example : accumulate addition / 반보문
    Sum += i;
  }
printf("From 1 to 50 sum is %d. \n", Sum); // After the end of loop {} it will add all the number 

  //u also can add 2 variables in the "for" loop
  int i, j;
  for(i = 0, j = 0; i < 10; i++, j += 2){ // basically it follows the syntax for(" ";" ";" "){}
  }
  //Difference between 2 output
  //output 1 
  for (int i = 1; i <= 5; i++) { // Will check this condition first so i initialize as = 1, then it fill check the for j which is = 5 
		for (int j = 5; j >= i; j--){ // Will check this also 
			printf("%d", j); // If true, the initial value for j = 5 that is why 5 -> then the 5 >= i(1) .. it will print until j = 1, after j = 0 the loop will stop, that is why 54321
      // then it will continue back to i loop , now the i = 2; .. then it will go to j loop , the value of j will become 5 again (new loop) but this time j >= 2 not j >= 1, that 
      //is why the second output 5432 only .. and it will continue until i <= 5 is false, the loop will stop
		}
		printf("\n");
	}
  //output 1 : 
  //54321
  //5432
  //543
  //54
  //5
  //output 2
  for (int i = 1; i <= 5; i++){ 
		for (int j = 5; j >= 1; j--){ // difference is now j>=1 not j>=i 
			if (j>i)
				printf("%c", ' '); // basically same as the example before but addition with the if else statement if j>i it will printf a blank space until the value of j = i it will print j 
				else
				printf("%d", j);
		}
		printf("\n");
	}
  //output 2 : 
  //     1
  //    21
  //   321
  //  4321
  // 54321
  return 0;
}
