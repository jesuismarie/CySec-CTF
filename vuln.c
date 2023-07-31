#include <stdio.h>
#include <string.h>

void vulnerable_function() {
    char buffer[402];
    printf("Enter your payload: \n");
    fflush(stdout);
    gets(buffer);
    
    char buffer2[113];
    
    printf("Received payload: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}

