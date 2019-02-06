#include <iostream>

void reverseArray(int arr[], int size);



int main(int argc, const char * argv[]) {
    int size = 4;
    int array[4]={1,2,3,4};
    
    reverseArray(array, size);
    
    
    
    
    
    return 0;
    
    
}

void reverseArray(int arr[], int size)
{
    
    for(int i = size - 1; i >= 0; i--)
    {
        std::cout << arr[i]  << " ";
    };
    
};
