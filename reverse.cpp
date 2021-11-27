// group 12 project.cpp : main project file.
#include "stdafx.h"
#include "iostream"
using namespace std;
int reverse(int & x);//introduce reverse function
void palindrome();//introduce function
int main ()
{
	char ans='y';
    system("color b");//change color
    cout<<"\t\t\t** In The Name Of GOD **\n\n";//extra design
    while( ans == 'y' || ans == 'Y' )//while user want retry program
	{
	int x=0;
	cout<<"\nPlease enter a number to reverse: ";
	cin>>x;//get number from user
	cout<<"\nReverse of your number is:\n------->"<<reverse(x)<<endl;
    cout<<"\n*-----------------*---------------------*-----------------*\n\n";
	palindrome();
    cout<< "Do you want to Try again ? (Y/N)";
    cin>> ans;
	}
    system("cls && color 5f");//clears screen
	cout<<"\n\ncreated by group 12:\n\t* kimia fazeli\n\t* zahra mashkoori \n\t* mahsa ahmadiyan \n\t* rana ghajar\n\n";
    system("pause");
	return 0;
}
//******************************************
inline int reverse(int & x)
{
int n=0,s=0,t=0;
for(n=x;n!=0;n=n/10)
{
	t=n%10;
	s=(s*10+t);
}
return s;//return result to function
}
//*******************************************
inline void palindrome()
{
	char sg;
	cout<<"\nthe 4digits palindrome numbers that havent 0 digits are:\n\n";
	for(int i=11;i<=99;i++)
	{
		if(i%10==0)
			i++;//if number has 0 digit,continue
		int palin=reverse(i)+(100*i);//*100 is for 4digits
		cout.put(sg=4)<<palin<<"\t";
	}
cout<<"\n*-----------------*---------------------*-----------------*\n\n";
}