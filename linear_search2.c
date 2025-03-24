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
    int array[10];
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter Key:");
    scanf("%d",&x);
    int result = linear(array , x, n );
    (result == -1) ? printf("element not found") : printf("element found at index :%d",result);
}