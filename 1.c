#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    
    printf("Enter mine name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */
    printf("Hello %s!\n", name);
    printf("Do you like cats %s!\n", name %s?\n");
    return 0;
}
