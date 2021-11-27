#include "stdafx.h"
#include "iostream"
using namespace std;
int convertToInt(char plainArray[]);
void cat(char *,char *,int);

int main ()
{ system("color 3b");
  char ans='y',sg;
  while(ans=='y'||ans=='Y')
  {char arr[]="1234";
  int re=convertToInt(arr);
  cout << "converting array of string to int: \n";
  cout<<"the numeric character array is :"<<arr<<endl;
  cout<<"the converted to int is :"<< re << "\n";
  cout<<"*-----------------*---------------------*-----------------*\n\n";
  char s1[20],s2[20];
  cout<<"Enter first string:"<<endl;
  cin>>s1;
  cout<<"Enter second string:"<<endl;
  cin>>s2;
  int len=strlen(s2);
  cat(s1,s2,len);
  cout<<"the joined string is:\n";
  cout<<s1<<endl;
  cout<<"*-----------------*---------------------*-----------------*\n\n";
  cout.put(sg=4)<<" Do you want to Try again ?(y/n)";
  cin>>ans;
  if(ans=='y'||ans=='Y')
  {system("cls");
  cout<<"\n\a******* OK,LET'S TRY AGAIN...******\n\n";
  }}
  system("cls && color 5f");
  cout<<"****good luck,god bless you ;)*****";
  system("pause");
  return 0;
}
int convertToInt(char plainArray[])
{
    char *pt=plainArray;
    int resault=0,base=10;
    int lengthOfArray=strlen(plainArray);
  
    for(char *pt=plainArray;pt<plainArray+lengthOfArray;pt++)
    {
             int degit=((int)*pt)-48;
             resault=resault * base +degit;
            
    }
     return resault;        
}
void cat(char *s1,char *s2,int len)
{
int i=0;
while(*s1++);
*s1--;
while(*s2 && i<len)
{
*s1++=*s2++;
i++;
}
*s1='\0';
}