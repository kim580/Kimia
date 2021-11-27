#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

class Karmand//defining class
{
	
private :

	double basesalary;//these are private
	double extrawork;
	double tax;
	
	void Karmand::base_salary()
	{	
		char ans,sg;
		do{
			system("cls");
			cout.put(sg=4)<<" what is your education?:\n\n";
			cout.put(sg=4)<<"1 - under diploma / diploma\n";
			cout.put(sg=4)<<"2 - up to diploma\n";
			cout.put(sg=4)<<"3 - licentiate\n";
			cout.put(sg=4)<<"4 - up to licentiate\n";
			cout.put(sg=4)<<"5 - PHD\n";
			cout<<"\n\nPlease enter numbers between 1-5 : ";
			ans = _getch();//gets user ans
		}while(ans<49 || ans>53);
		cout<<ans;
		if(ans==49)//49 is the ascii code of 1
			basesalary = 330000;
		if(ans==50)//50 is the ascii code of 2
			basesalary = 400000;
		if(ans==51)//51 is the ascii code of 3
			basesalary = 450000;
		if(ans==52)//52 is rhe ascii code of 4
			basesalary = 500000;
		if(ans==53)//53 is the ascii code of 5
			basesalary = 550000;
	}
	
	void Karmand::extra_work()
	{
		double hour;
		cout<<"\n\nEnter number of your extra works(in hours):";
		cin>>hour;
		extrawork=(double (basesalary/175)*1.4*hour);//calculate extra work
	}

	
	void Karmand::money_of_tax()
	{
		
		tax = (basesalary * 5) / 100.0;//calculate tax
	}


	
public :

	
	double finalsalary;//this is public
	
	Karmand::Karmand ()//constractor
	{
		base_salary();
		extra_work();
		money_of_tax();
		finalsalary = basesalary + extrawork - tax ;//calculate final salary
	}};
//******************************
int main()
{
system("color 5f");//changes the system color
Karmand karmand;
cout<<"\n\nyour salary is :"<<karmand.finalsalary<<"\n\n\n\n";//printing salary
system("pause");
return 0;
}