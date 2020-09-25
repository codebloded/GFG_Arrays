/*REVERSAL ALGORITHUM OF ARRAY ROTATION
Let the array = [1,2,3,4,5,6,7];
rotated array by  is =[3,4,5,6,7,1,2];
rotate the array by two factor i.e d=2
lets divide the array into two parts "if d=3 then we divide it into three parts"
A=[0,d-1] = [1,2]
B = [d, n-1] = [3,4,5,6,7]
fist reverse the A = [2,1,3,4,5,6,7]
then reverse the B= [2,1,7,6,5,4,3]
then reverse the whole array to get result as  this [3,4,5,6,7,2,1]
*/

#include<iostream>
using namespace std;

void rotateArr(int *arr, int size, int fac){
    cout<<"The array Before rotation: "<<endl;
    for (int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The array after rotaion : "<<endl;
    int temp;
    for(int i=0; i<(fac-1); i++){
        temp= arr[i]; 
        arr[i] = arr[i+1];
       arr[i+1] = temp;
    };
    for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }
}

void finalReverse(int *arr , int size,int fac){
    rotateArr(arr,size,fac);
    int temp ;
    for(int j=0; j<(size+1)/2; j++ ){

        for(int i=fac; i<(size/2); i++){
            temp = arr[i];
            arr[i] = arr[size-i-1];
            arr[size-i-1] = temp;
        }
    }
    cout<<endl<<"Final Rotation : "<<endl;
       for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }
}


int main(){

    int x[] = {1,2,3,4,5,6,7};
    int size = sizeof(x)/sizeof(x[0]);
    cout<<size<<endl;
    int d=2 ;//Rotating factors
    d=d%size;
    finalReverse(x,size,d);
    return 0;

}