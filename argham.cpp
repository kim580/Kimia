#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "string"
#include "math.h"
#include "windows.h"

using namespace std;

//*************************
class convert
{
	 mutable int i; //number of binar
	 int print_code;
	 static  int number;
	 static int bin_number[100];
	 friend void input(int code);
	 void bin_to_dec();
	 void dec_to_bin();
public:
	void print() const;
	 convert(int code);
};
 int convert::number;     //takhsise hafeze be number
int convert::bin_number[100];
//------------------------------
convert::convert(int code)    //constructor
{
	print_code=code;
	if(code==0) dec_to_bin();
	else bin_to_dec();
}
//****************************
void input(int code)
{
	system("cls");
	if(code==0)
	{
		cout<<"\ninput decimal number:";
		cin>>convert::number;
	}else{
	    	cout<<"\ninput binary number:";
		    cin>>convert::number;
	}
}
//----------------------------------------------------------
void convert::print() const
{
	if(print_code==0)
	{
        	cout<<"\nconverted decimal number is:[ ";
	do{
        	cout<<bin_number[i];
			i--;
	}while(i!=-1);
	cout<<" ]";
	}else{
    		cout<<"\nconverted binary number is:[ ";
			cout<<number<<" ]";
	}
}
//----------------------------------------------------------
void convert::bin_to_dec()
{
	i=0;
	do{
		bin_number[i]=number%10;  //be dast avardane argham.
		number/=10;
			if(bin_number[i]<0|bin_number[i]>1)
			{
				cout<<"\nsorry your input number is incorrect!(retry)";
				Sleep(500);
				input(1);
				i=-1;
				
			}
		i++;
	}while(number!=0);
	do{
		i--;
		number=bin_number[i]*pow(2.0,double(i))+number;
	}while(i!=0);
}
//----------------------------------------------------------
void convert::dec_to_bin()
{
	i=0;
	int remain;
	do
	{
		remain=number%2;
		number=number/2;
		bin_number[i]=remain;
		i++;
	}while(number!=0);
}
//----------------------------------------------------------



int main()
{
	system("color 5f");
	int code;
	char answer;

	do{
		system("cls");
    	cout<<"1-Decimal to binary\n\n";
		cout<<"2-Binary to decimal";
		cout<<"\n\n(1,2):";
		cin>>code;
		code--;
    	input(code);
    	convert num(code);
    	num.print();
    	cout<<"\n\n Do you want to continue?";
    	cin>>answer;
	}while(answer=='y'|answer=='Y');
		return 0;
}
