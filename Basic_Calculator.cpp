#include <iostream>
using namespace std;
int main(){
int op;
float num1, num2, ans;

cout<<"Enter first number:"<<endl;
cin>>num1;
cout<<"Enter second number:"<<endl;
cin>>num2;

cout<<"Chose option 1(Add), 2(Substract), 3(Multiplication), 4(Division):"<<endl;
cin>>op;

if(op==1){
    ans= num1+num2;
}
else if(op==2){
        ans= num1-num2;
    }
    else if(op==3){
        ans= num1*num2;
    }
    else if(op==4){
        if(num2 !=0)
            ans= num1/num2;
            else{
                cout<<"Invalid Number"<<endl;
            }
    }
    else{
        cout<<"Error"<<endl;
    }
    cout<<"Answer is:"<<ans;
return 0;
}
