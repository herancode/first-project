#include<iostream>
using namespace std;
int main(){
  //original code
  int numbers[5]={23,45,22,4,65};
  cout<<"original code:"<<endl;
for(int i=0; i<5;i++){
cout<<"numbers["<< i <<"]="
  <<numbers[i]<< endl;
}
  //try 1: change the size to 10 but keep 5 value
   int values[10]={23,45,22,4,65};
  cout<<"\ntry1:"<<endl;

for(int i=0; i<10;i++){
cout<<"values["<< i <<"]="
  <<values[i]<< endl;
}
  //try2:print number[5]
  cout<<"\ntry2:"<<endl;
  cout<<"number[5]="<<numbers[5]<<endl;
return 0;
}
