#include <stdio.h>
int main()  {
	char question[ ] = "Please, enter your first name: ";
 	char greeting[ ] = "Hello, "; 
 	char yourname [80]; 
	printf("%s",question);
	scanf("%s", yourname); 
	printf("%s",yourname );
	return 0;
} 