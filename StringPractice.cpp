#include<iostream>
#include<string>
using namespace std;
/*// convert integer to string
int main(){

    int n = 1234;
    string s;
    s = "ravi"+ to_string(n);
    cout<<s;
     return 0;
}           */
  //user input as integer (number palindrom)
/*
int main(){

int n;
int res=0;
cout<<" to check the no is palindrom not palindrom";
cin>>n; //121;

int input = n;
while(n!=0)
{
 int rem= n%10;
  res= res*10+rem;
  n = n/10;
}
 if(input==res){

  cout<<"Number is palindrom";
 }
 else{
  cout<<"NUmber is not palindrom";
 }
 return 0;
}
     */
/* user input array
int main(){
int arr[] = {1,2,3,4};
 int start = 0;
 int  end = 4;
   bool flag= true;
   while(start<end)
   {
   if(arr[start]!=arr[end]){
    flag = false;
   break;
}
   start++;
   end--;
}
 if(flag==true){
   cout<<"Array is palindrom";
 }
 else{

    cout<<"Array is not palindrom";
 }
  return 0;
}           */

   //charactor array(space)-------->hello ravi
   /*
    int main(){
      char str[100];
      cout<<"enter char array:";
      cin.getline(str,100);                                      //cin>>str;
      cout<<"output:"<<str<<endl;
      return 0;
    }
           */
  /* int main(){
   char str[5];

   cout<<"Enter char array:";
   cin.getline(str,5);

   for(char ch: str){
     cout<< ch <<" ";
   }
  cout<<endl;
  return 0;


   }  */

   /*

  int main(){
    int count = 0;
    char str[50];
    char ch;

    cout<<"Enter a string :";
    cin>>str;
    cout<<"Enter charctor for count"<<endl;
    cin>>ch;
   for(char c:str){
    if(c==ch)
    {
      count++;
    }
   }
    cout<<"charactor count is "<<count<<endl;


  }   */

  // <-----------count (aeiou)
  /*
  int main(){

    char str[50];
    int count = 0;

    cout<<"Enter a String : ";
    cin>>str;

    for(char ch:str)
    {

      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch == 'u' || ch=='A' || ch =='E' || ch == 'I' || ch == 'O' || ch == 'U')
      {
        count++;
      }

      if(ch=='\0'){
        break;
      }
    }

    cout<<"The Vowel count is : "<<count;


   return 0;
  }                                          */

   //----find the length of string
  /*
   int main(){
  char str[] = "ravi darwai";
   int len =0;

   for(int i =0;i<str[i]!='\0';i++){
    if(str[i]!=' '){
    len++;
   }
  }
  cout<<"length of string:"<<len<<endl;

      return 0;
  }          */


  //create an string in c++

  #include<iostream>
  #include<string>
  using namespace std;
   int main(){
   string str = "ravi darwai"; //dynamic--->runtime resize
   cout<< str <<endl;

   return 0;

  }
