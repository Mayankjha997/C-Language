
// Insertion In arrays 



#include <stdio.h>

void transversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    printf("\n");
}

int insertion(int arr[], int size, int element, int capacity, int index)
{

    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
    
    return 1;
}


int main()

{

    int arr[100] = {23, 45, 67, 89, 88};
    int size = 5;
    int index = 3;
    transversal(arr, size);
    int element = 56;
    insertion(arr, size, element, 100, index);
    size += 1;
    transversal(arr, size);
    return 1;

}



/*    
 
OUTPUT 

 23 
 45 
 67 
 89 
 88 

 23 
 45 
 67 
 56 
 89 
 88            */

