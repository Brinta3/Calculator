#include<iostream>
using namespace std;

int main(){
int eng, phy, cal, ics, phyl, marks;
double avg;
cout<<"Enter Number of English 01:"<<endl;
cin>>eng;
cout<<"Enter Number of Physics 01:"<<endl;
cin>>phy;
cout<<"Enter Number of Calculus 01:"<<endl;
cin>>cal;
cout<<"Enter Number of ICS:"<<endl;
cin>>ics;
cout<<"Enter Number of Physics Lab 01:"<<endl;
cin>>phyl;

marks = (eng+phy+cal+ics+phyl);

if(marks>500){
    cout<<"Invalid";
    return 1;
}
avg = marks/5;
if (avg<50){
    cout<<"Failed Cgpa 0.00"<<endl;
}
else if(avg=60){
    cout<<"D Cgpa 2.25 ";
}
else if(avg>=60){
    cout<<"C Cgpa 2.75";
}
else if(avg>=70){
    cout<<"B Cgpa 3.00";
}
else if(avg>=80){
    cout<<"A Cgpa 3.50";
}
else if(avg>=90){
    cout<<"S Cgpa 4.00";
}
else{
    cout<<"Invalid";
}

cout<<"Total number is:"<<marks<<endl;
cout<<"Average is:"<<avg<<endl;
return 0;
}
