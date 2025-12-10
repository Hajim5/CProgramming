//반보문(for문) 

// syntax for : for(" ";" ";" "){} //curly is optional
#include <stdio.h>

int main(void){
  int i;
  for(i = 0; i < 5; i++){ // basically 1st " " = indicating what number you want to start with usually 0 or 1, 
    //2nd " " = condition for example i < less than 5 = true and the loop will repeat until it because false 
    //3rd " " = increasing of i in this example, we can change to i+=2 or something else based on what we want. 
    printf("*******" \n"); //{it will repeat and printf until the loop is end}
  }
return 0;
}
