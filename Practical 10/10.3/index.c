#include <errno.h> 
#include <stdio.h> 

int main()  { 
    
	// If a file is opened which does not exist, 
	// then it will be an error and corresponding 
	// errno value will be set 
	FILE* fp; 

	// opening a file which does not exist 
	fp = fopen("GeeksForGeeks.txt", "r"); 

    perror("Message From perror");
	printf("Value of errno: %d\n", errno); 

	return 0; 
}

// 1
// Operation not permitted

// 2
// No such file or directory

// 3
// No such process

// 4
// Interrupted system call

// 5
// I/O error

// 6
// No such device or address

// 7
// The argument list is too long

// 8
// Exec format error

// 9
// Bad file number

// 10
// No child processes

// 11
// Try again

// 12
// Out of memory

// 13
// Permission denied