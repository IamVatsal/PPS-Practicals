#include <stdio.h> 
void next(void);  
static int counter = 7; 
int main() { 
while(counter<10) { 
next(); counter++; 
} 
return 0;} 
void next( void ) { 
static int iteration = 13; iteration 
++; 
printf("iteration=%d and counter= %d\n", iteration, counter);} 