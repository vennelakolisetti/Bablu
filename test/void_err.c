#include <stdio.h>
int main() 
#if 0
{
    void v = 0;
    printf("%d", v);
    return 0;
}
#endif
//Corrected Code
{
    int a = 0;  // Declare an integer variable
    void *v = &a;  // Declare a void pointer and point it to the integer variable

    printf("%d", *(int *)v);  // Dereference the void pointer, casting it to an int pointer

    return 0;
}


/*void is not a valid data type for a variable. You cannot declare a variable of type void. 
This will result in a compilation error because 
void is meant to indicate "no type" or "no value" in the context of function return types or pointers.*/