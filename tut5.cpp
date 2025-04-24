//while condition looping
/*
#include<iostream>
using namespace std;

  int main (){
    int n;
    cin>>n;

    int i=1;
    int sum = 0;

    while(i<=10){
        sum=sum +i;
        i=i+1;
    }
        cout<<" value of sum is "<<sum<<endl;


    }
//program 2

#include<iostream>
using namespace std;

  int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
  cout<<i<<endl;
     i=i+1;
    }



    }  */

//print the some number

/*#include<iostream>
 using namespace std;

 int main(){



    int n;
    int i = 2;
    cout<<"Enter the sum number"<<endl;


    cin>>n;
    while(n>=i){
    cout<<i<<endl;

    i=i+2;
 }
    return 0;
}   */

//print the table while loops condition


 /*#include<iostream>
 using namespace std;

 int main(){
 int a;
 cout<<"Enter your table "<<endl;
 cin>>a;


 int i;
     i = 1;

 while(i<=10){

    i++;
   cout<<a<<"*"<<i<<"="<<a*i<<endl;

 }

 }
      */
 //use in for loops condition print the table
/*#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter your table"<<endl;
cin>>a;
for(int i= 1;i<=10;i++){

cout<<a<<"*"<<i<<"="<<a*i<<endl;

}
}  */
//then again print the even and
/*#include<iostream>
using namespace std;
 int main(){

  int num;
  cout<<"Enter your number"<<endl;
  cin>>num;
  for(int i=1;i<=num;i++)
  {
   if(i%2==0)
   cout<<i<<endl;

  }
    return 0;


 }  */

 #include<iostream>
 using namespace std;

 int main(){
 int i = 1;
  int num;
  cout<<"Enter your number"<<endl;
   cin>>num;
  for(i= 1;i<=num;i++)
{
  cout<<2*i-1<<endl;

}
 return 0;
}
