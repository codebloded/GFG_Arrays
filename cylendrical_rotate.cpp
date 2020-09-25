/* PROGRAME TO CYLLENDRICALLY ROTATE AN ARRAY BY ONE 
    i.e
        initial array =[1,2,3,4,5,6]
        rotated array = [6,1,2,3,4,5]

*/

#include <iostream>
using namespace std;


void rotateArray(int *arr, int size){
    cout<<"Array before Rotation :"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Array before Rotation :"<<endl;
    int temp= arr[size-1];
    for(int i=size-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    int x[] = {1,2,3,4,5};
    int size = sizeof(x)/sizeof(x[0]);
    rotateArray(x,size);
    return 0;

}