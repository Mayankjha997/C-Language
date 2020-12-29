
// Deletion in Arrays 

#include <stdio.h>
#include <stdlib.h>



void transversal(int arr[], int n)

{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    printf("\n");
}

void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[50] = {23, 45, 67, 89, 88};
    int size = 5;
    int index = 3;
    transversal(arr, size);
    deletion(arr, size, index);
    size -= 1;
    transversal(arr, size);
    return 0;

}


/* OUTPUT 

 23 
 45 
 67 
 89 
 88 

 23 
 45 
 67 
 88         */ 
 
