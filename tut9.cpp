//pattern in c++
  /* 1 2 3 4        n=4
   1 2 3 4       roo 4 ,col 1---->n
   1 2 3 4
   1 2 3 4   */
              


#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

int i = 1;

while(i<=n){

 int j = 1;
while(j<=n){
 cout<<j;        //n-j+1;reverse the pattern 
  j=j+1;
}
cout<<endl;
 i=i+1;

}


}

//pattern problem 2
 /*
 1 2 3   n =3
 4 5 6   roo,3, col 1---->n
 7 8 9
  */
 /*
 #include<iostream>
 using namespace std;

 int main(){
  int n;
  cin>>n;

  int i=1;
 int  count= 1;
  while(i<=n){

  int j= 1;
  while(j<=n){

  cout<<j;
  j=j+1;
  }
  cout<<endl;
  i=i+1;




  }



  }   */
