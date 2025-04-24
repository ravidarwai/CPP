//hw
#include<iostream>
using namespace std;

int main(){
  /*
    for (int i = 0;i<=5;i++) {

 cout<< i << " ";
 i++;

}

}  */

/*
 for(int i= 0;i<=5;i--){

  cout<< i <<" ";
  i++;
 }




 }  */

 /*for(int i=0;i<=15;i+=2){
 cout<< i<<"";
if(i&1){
    continue;
}
  i++;
}
}  */

  /*for(int i=0;i<5;i++){

   for(int j=i;j<5;j++){

   cout<< i <<" "<< j <<endl;

  }
}
}  */
/*for(int i = 0;i<5;i++){
for(int j =i;j<=5;j++){

if(i+j==10){

    break;
}
cout<<i<<" "<< j <<endl;
}
}
}            */
//variable scope
int n;
cin>>n;
int i =0,ans=0;

while(n!=0){

  int digit = n%10;
   if(digit==1){


   ans = ans+pow(2,i);
  }

  n = n/10;
   i++;
}
 cout<<ans<<endl;

}
