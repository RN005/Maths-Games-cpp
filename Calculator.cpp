#include<iostream>

using namespace std;

int main(){
 string op;
 string choice;
 int a,b;

 do{cout<<"Enter the first number: ";
 cin>>a;

  cout<<"Enter operation: ";
 cin>>op;

 cout<<"Enter the second number: ";
 cin>>b;

 if (op == "+"){
    cout<<"Result = "<<a+b<<endl;
 }
else if (op == "-"){
     cout<<"Result = "<<a-b<<endl;
 }
 else if (op == "*"){
     cout<<"Result = "<<a*b<<endl;
 }
  else if (op == "/"){
     cout<<"Result = "<<a/b<<endl;
 }
else {
    cout<<"invalid operation"<<endl;}

cout<<"Do you want to perform another calculation? (y/n): "<<endl;
cin>>choice;
}while (choice == "y" || choice == "Y");
if (choice == "n" || choice == "N"){
    cout<<"Thank you for using the calculator! "<<endl;
}
    return 0;
}