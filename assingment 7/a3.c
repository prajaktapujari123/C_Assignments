#include <stdio.h> 
 
int main() 
{ 
   char name[20]; //I hope the user is not Russian :-P 
 
   //I've allocated 20 bits you can allocate as much as you want 
 
 
   printf("Enter your name: "); //this function will print the message in quote on the console 
 
 
//We will use fgets to store the input as gets is a dangerous function and can overload memory buffers 
 
   fgets(name,20,stdin); 
 
   printf("%s",name); //display the name 
//Since we are outputting string we will use %s  
 
 
  return 0; //every C program ends with this not compulsory tho 
} 
