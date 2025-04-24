#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start = 0;
    int end = size - 1;

    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // print reverse array :
    cout<<"Print Reverse Array : "<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }



int main(){

    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;

    int arr[n]; // ex: arr[10]
    int size = sizeof(arr)/sizeof(int);

    //input
    cout<<"Enter the value for an array : "<<endl;
    for(int i = 0 ;i<size ; i++)
    {
        cin>> arr[i];
    }

    //output - print array
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;

    //reserse an array
    reverse(arr,size);

    return 0;

}
