//arrys qustion
//maxi &mini
#include<iostream>
using namespace std;

int getMin(int num[],int n){
    int mini = INT_MAX;

     for (int i = 0;i<n;i++){

    mini = min( mini,num[i]);
}
   return mini;
}


int getMax(int num[],int n){
     int maxi = INT_Mini;

     for (int i = 0;i<n;i++){
     maxi = max( maxi,num[i]);
     }
    return maxi;
}


  int main (){
     int size;
    cin>>size;
  int num[100];

  for(int i =0;i<size;i++){

     cin>>num[i];

     cout<<"Maximum value is "<<getMax(num,size)<<endl;
     cout<<"Minimum value is "<<getMini(num,size)<<endl;

      return 0;


  }




  }
