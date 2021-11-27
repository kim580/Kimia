#include"stdafx.h"
#include"iostream"
#include"conio.h"
using namespace std;
class code
{
public:
	int n,i;
	const int size=5;
	code_oc(int n);
	friend char code(code ob);
	void coding();
	void show_code();

};
//******************************************
void code::code_ob()
{
	char c[20];
	    cout<<"enter characters:";
		cin.get(c,15);
}
//*******************************************
void code::code_oc()
		{   int n;
			cout<<"enter number:";
			cin>>n;
		}
//********************************************
void code::coding()
		{
			char b;
			char new code;
			int a;
			for(i=0,i<5,i++)
				b=code[i];
			    a=int(char b);
				a=a+n;
				new code=char (int a);
		}
//***********************************************
void code::code_od()
		{
			int j;
			char code[size];
			for(j=0,j<5,j++)
			{
				code[j]=new code;
			}
//****************************************
void code::show code(char new code)
			{
                for(j=0,j<5,j++)
				{
					cout<<new code;
				}
//****************************************
int main()
{
char Y,y,cu;
code ob(c,n);
code (ob1);
cout<<"do you change character?y/n"
if(c==y||c==Y)
{
ob.show code();
cout<<"do you show first character?y/n";
if(cu==y||cu==Y)
{
ob.code();
}
else
cout<<"end";
system("pause");
return 0;
}