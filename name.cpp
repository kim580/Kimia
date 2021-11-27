#include "stdafx.h"
#include <iostream>
using namespace std;
void print(char [][3][25],int);
int main()
{
int i,j,k;
const int No_of_people = 5, No_of_fields = 3, field_length = 25;
char data[No_of_people][No_of_fields][field_length]={
{{"kimia"},{"fazeli"},{"reza"}},
{{"zahra"},{"akbari"},{"ali"}},
{{"sepideh"},{"naseri"},{"hasan"}},
{{"azadeh"},{"saremi"},{"amir"}},
{{"ziba"},{"fahimi"},{"ahmad"}}
};
cout<<endl<<"The original data are:"<<endl;
print(data,No_of_people);
char timp;
char msg[]={"kimiafazelirezazahraakbarialisepidehnaseriazadehsaremiamirzibafahimiahmad"};
for(i=0;i<=strlen(msg)-2;i++)
	for(j=i+1;j<=strlen(msg)-1;j++)
		if(msg[i]>msg[j])
		{
			timp=msg[i];
			msg[i]=msg[j];
			msg[j]=timp;
		}
for(i=0;i<=strlen(msg)-1;i++)
{
k=0;
for(j=i+1;j<=strlen(msg)-1;j++)
if(msg[i]==msg[j])
{
	k++;
	i++;
}
cout<<"\n\n"<<msg[i]<<"\trepeations:"<<(k+1);
}
cout<<"\na is maximom\n";

	cout<<"\n\n\change names?\n";
	char A,g;
	cin>>A;
	if(A=='y' || A=='Y')
	{
		do{
	int num=0;
	int field=0;
	cout<<"enter number of people(1-5): ";
	cin>>num;
	cout<<"enter name(1)/family(2)/father(3)(1-3): ";
	cin>>field;
	for(int y=0;y<15;y++)
		{
			data[num-1][field-1][y]=0;
		}

    cout<<"\n enter number of chars:  ";
	int w;
	cin>>w;
	cout<<"\nenter name(related to number of your chars): \n";
		for(int x=0;x<w;x++)
		{
    cin>>data[num-1][field-1][x];
		}
		cout<<"\ndo you want to try again? or just this word want to change?";
		cin>>g;
		}while(g=='y' || g=='Y');
	}
system("cls && color 5f");
cout<<"name,family name ,father name\n\n";
for(int a=0;a<5;a++)
{ for(int b=0;b<3;b++)
{   for(int c=0;c<15;c++)
{     cout<<data[a][b][c];
}}}
system("pause");
return 0;
}
void print(char data[][3][25],int size)
{
int i;
for(i=0;i<size;i++)
{
cout<<"Person No "<<(i+1)<<" data:"<<endl;
cout<<"Name: "<< data[i][0]<<"\tfamily name: "<<data[i][1]<<"\t father name:"<<data[i][2]<<endl;
}
}