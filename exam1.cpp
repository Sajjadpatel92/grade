#include<iostream>
using namespace std;
int main(){

int marks;
    char grade;
    cin>> marks;
    grade= marks<35?'F':marks<70?'D':marks<80?'C':marks<90?'B':'A';
    cout<<"your grade is"<<" ";
    cout<<grade<<" ";
  

switch(grade){
case 'A':
cout<<"Excellent Work"<<" ";
break;
case 'B':
cout<<"Well done"<<" ";
break;
case 'C':
cout<<"Good job"<<" ";
break;
case 'D':
cout<<"You Passed"<<" ";
break;
case 'F':
cout<<"Sorry you fail"<<" ";
break;

}
if(grade=='A'||grade=='B'||grade=='C'||grade=='D'){
    cout<<"Congratulation you are eligible for next level";
}
else{
    cout<<"Please try again next time";
}
}