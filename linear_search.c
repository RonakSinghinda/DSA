// linear search 
#include <stdio.h>
int linear(int array[],int key ,int n) {
    for (int i = 0; i < n; i++)
        if (array[i] == key)
            return i;
    return -1;        
}
int main() 
{ 
    int n;
    int x;
    int array[] = {2,4,0,1,9};
    x = 1;
    n= sizeof(array) / sizeof(array[0]);
    int result = linear(array , x, n );
    (result == -1) ? printf("element not found") : printf("element found at index :%d",result);
}