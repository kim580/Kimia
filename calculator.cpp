#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;
template< class M >
void Read( M &x1 , M &x2 )
{
cout<< " x1 = ";
cin>> x1;
cout<< " x2 = ";
cin>> x2;
Change( x1 , x2 );
}
//*************************
template< class M >
void Change( M &x1 , M &x2 )
{M sum,mines,zarb,taghsim,tavan=1;
char q;
cout<<"\nwhat operator?\n";
cin>>q;
switch( q )
{
case '+' :
sum=x1+x2;
cout<<"\n sum=" << sum;
break;
case '-' :
mines=x1-x2;
cout<<"\n mines="<< mines;
break;
case '*' :
zarb=x1*x2;
cout<<"\n zarb="<< zarb ;
break;
case '/' :
taghsim=x1/x2;
cout<<"\n taghsim="<< taghsim ;
break;
case '^' :
{
for(int i=1;i<=x2;i++)
tavan=tavan*x1;
}
cout<<"\ntavan="<<tavan;
break;
default :
cout<<"error\n";
}}
//*************************
int main()
{
int i1 , i2 ;
double d1 , d2;
char ans = 'y' , a;
while( ans == 'y' || ans == 'Y' )
{
cout<< "Which kind of datatype do you want to enter ? " << endl;
cout<< "Input i (int)/ d (double) : " << endl;
cout<< endl;
cin>> a;
switch( a )
{
case 'i' :
cout<< "Input 2 int numbers : " << endl;
cout<< endl;
Read( i1 , i2);
cout<< endl;
break;
case 'd' :
cout<< "Input 2 double numbers : " << endl;
cout<< endl;
Read( d1 , d2);
cout<< endl;
break;
}
cout<< "Do you want to Try again ? " << endl;
cin>> ans;
}
system ( "pause" );
return 0;
}