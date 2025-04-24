#include<iostream>
#include<string>
using namespace std;

int main(){
 /*
 // user input as integer/number
 int n;
 int res=0;
 cout<<"Enter a Number that you want to check palindrom : "<<endl;
 cin>>n;  // 121

 int input = n;
 while(n!=0)
 {
    int rem = n %10;
    res = res*10 + rem;
    n = n/10;
}

if(input==res)
{
    cout<<"Number is Palindrom";
}
else{
    cout<<"Number is not Palindrom";
}
*/



// user input array
int arr[3] = {1,2,1};

int start = 0;
int end = 2;
bool flag = true;

while(start<end)
{
    if(arr[start] != arr[end])
    {
       flag = false;  // flag is used conditon based decision or termination
       break;
    }
   start++;
   end--;
}

if(flag == true)
{
    cout<<"Array is Palindrom ";
}
else{
    cout<<"Array is Not Palindrom ";

}

return 0;
}
// string
/*
  long long n =   1234455456666666;
    string s;
   s = "ravid"+ to_string(n);
   cout<<s;
  return 0;  */
/*
string name;
cout<<"Enter Name : "<<endl;
cin>>name;

cout<<"Your name is : "<<name;


   return 0;
  }  */
