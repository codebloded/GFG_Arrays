//BINARY SEARCH ALOFORITHUM .
#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = (mid + 1);
        }
        else
        {
            high = (mid - 1);
        }
    }
        return -1;
}

int main()
{
    int x[] = {2,4,6,7,8,9};
    int size = sizeof(x) / sizeof(x[0]);
    int key;
    cout<<"Enter the key:  "<<endl;
    cin>>key;
    int found_key = binarySearch(x, size, key);
    cout<<"Position:  "<<found_key;
    

    return 0;
}