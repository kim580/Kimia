#include "stdafx.h"// including header files. 
#include"iostream"
using namespace std;

class base{
protected:
	int i,n;
	char sg;
public:
	void zoj()
	{   cout.put(sg=4).put(sg=4)<<"Enter your number :";
        cin>>n;
		i=(n)%2;
        if (i==0) 
        cout.put(sg=4)<<" zoj ast \n"; 
        else 
	{ 
	cout.put(sg=4)<<" fard ast\n";
		}
	}
};

class derived1:public base{
	int p,mod;
	double P;
public:
	void avval()
	{
    i=1; 
    p=0; 
    while (i<=n)
    { 
    mod=n%i; 
    if(mod==0) 
    p=p+1; 
    i++; 
    } 
    if(p==2) 
    cout.put(sg=4)<<" aval ast ! \n"; 
    else 
    cout.put(sg=4)<<" aval nist !\n"; 
P=1; 
i=1; 
if(n==0) 
cout.put(sg=4)<<" 0! is 1 \n"; 
else 
{ 
while (i<=n) 
{ 
P=P*i; 
i++; 
}
}
cout.put(sg=4)<<n<<" factoriel ="<<P<<endl;
system("pause");
	}
};
class derived2:public derived1{
long int P;
public:
void factorial()
{ 
P=1; 
i=1; 
if(n==0) 
cout<<" ";
else 
{ 
while (i<=n) 
{ 
P=P*i; 
i++; 
}
}
}
};


int main()
{   
	derived1 ob1;
	derived2 ob2;
	ob1.zoj();
	ob1.avval();
	ob2.factorial();
	system("pause");
	return 0;
}