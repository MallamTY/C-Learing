#include <iostream>

using namespace std;
int countEvens(int arr[], int size);
int main(){
    const int ARR_SIZE = 10;
    int arr[] = {1,2,3,4,5,6,6,7,8,8};
    int evens = countEvens(arr, ARR_SIZE);
    cout<<"Even counted is: "<<evens<<endl;
    return 0;
}

int countEvens(int arr[], int size){
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            counter++;
        }
        
    }
    return counter;
    
};