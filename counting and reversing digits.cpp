#include<iostream>
using namespace std;
int main(){
int originalNumber;
cout<<"Enter a number:  ";
cin>>originalNumber;
int remainder=0;
int reversed=0;
int numberOfDigits=1;
while(originalNumber>=10)
{
	remainder=originalNumber%10;
	reversed=reversed*10+remainder;
	originalNumber=originalNumber/10;
	numberOfDigits++;
}
cout<<"Rversed number is = "<<reversed;
cout<<originalNumber<<endl;
cout<<"Number of digits = "<<numberOfDigits; 
}
