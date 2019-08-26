#include<iostream.h>
#include<conio.h>
void main()
{
for(int i=1;i<4;i++)
{
int a;
 char c;
 float s,C;
 cout<<"Where s is the squere"<<endl<<"Where C is the cube "<<endl;
 cout<<"Choose any operater (s,C)"<<endl;
 cin>>c;

 switch(c)
 {
 case 's' : cout<<"Enter any number ::";
	       cin>>a;
	       s=a*a;
	       cout<<a<<"= "<<s<<endl;
	       break;
case 'C' : cout<<"Enter any number ::";
cin>>a;
C=a*a*a;
cout<<"= "<<C<<endl;
break;
default:
{
cout<<"It is not choose correct operater";
}
}
getch();
}
}