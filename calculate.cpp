#include "stdafx.h"
#include "iostream"
using namespace std;
template< class M >
void Read( M &x1 , M &x2 )//this function reads 2 digits
{
cout<<"enter x1 = ";
cin>> x1;
cout<<"enter x2 = ";
cin>> x2;
calculate( x1 , x2 );//call calculate function
}
//************************************************
template< class M >
void calculate( M &x1 , M &x2 )
{M sum,multiply,power=1;//power=1 is hermaphrodite in multiply
int y1,y2;
double z1,z2,c1,c2;
char q,sg;
cout<<"\nwhat operator do you want?(+ ,-,*,/,%,^)\n";
cout<<"------------> ";
cin>>q;
cout<<endl<<endl;
cout.put(sg=4)<<"result is:\t";
switch( q )
{
case '+' ://if operator was sum
sum=x1+x2;
cout.put(sg=4)<<x1<<"+"<<x2<<"="<< sum;
break;
case '-' :
c1=double(x1);
c2=double(x2);
cout.put(sg=4)<<x1<<"-"<<x2<<"="<< c1-c2;
break;
case '*' :
multiply=x1*x2;
cout.put(sg=4)<<x1<<"*"<<x2<<"="<< multiply ;
break;
case '/' :
z1=double(x1);
z2=double(x2);
cout.put(sg=4)<<x1<<"/"<<x2<<"="<<z1/z2;
break;
case '^' :
{
for(int i=1;i<=x2;i++)
power=power*x1;
}
cout.put(sg=4)<<x1<<"^"<<x2<<"="<<power;
break;
case '%':
y1=int(x1);
y2=int(x2);
cout.put(sg=4)<<x1<<"%"<<x2<<"="<<y1%y2;
break;
default :
cout<<"\n Oops!!!,you enterd an aperator,isnt among above aperators\n";
}//end of switch
}//end of function
//********************************************
int main()
{
system("color b");//change color
int i1 , i2 ;//for int types
double d1 , d2;//for double types
float f1 , f2;//for float types
char ans = 'y' , a,sg;
cout<<"\t\t\t** In The Name Of GOD **\n\n";//extra design
for(int i=0;i<40;i++){cout.put(sg=4)<<" ";}//extra design
cout<<"\nyou shoud enter 2 numbers with any type you want and one operator and program calculates the result\n ";
for(int i=0;i<40;i++){cout.put(sg=4)<<" ";}//extra design
system("pause && cls ");//pauses program,clears and changes screen color
while( ans == 'y' || ans == 'Y' )//while user want retry program
{system("cls && color 5f");//clears screen
cout<< "Which kind of datatype do you want to enter ? " << endl;
cout<< "Input i (int)/ f(float)/ d (double) : " << endl;
cout<< endl;
cin>> a;//gets data type from user
switch( a )
{
case 'i' :
cout<< "\nInput 2 int numbers :\n\n";
Read( i1 , i2);//call read function which gets int types
cout<< endl;
break;
case 'f' :
cout<< "\nInput 2 float numbers :\n\n";
Read( f1 , f2);//call read function which gets float types
cout<< endl;
break;
case 'd' :
cout<< "\nInput 2 double numbers :\n\n";
Read( d1 , d2);//call read function which gets double types
cout<< endl;
break;
}//end of switch
cout<<"\n*-----------------*---------------------*-----------------*\n\n";
cout<< "Do you want to Try again ? (Y/N)";
cin>> ans;
}//end of while
system("pause & cls & color e"); 
cout<<"\n\n\n\t\t\t ~*~* *~*~\n\n\t\t\t *~* kimia fazeli *~*\n\n\t\t\t *~* *~*\n\n\t\t\t *~**~*";
cout<<" *~*\n\n\t\t\t\t";
system ( "pause" );
return 0;
}