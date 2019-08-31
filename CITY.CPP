#include<iostream.h>
#include<conio.h>
const city=2;
const week=7;
int main()
{
float Tempreture[city][week];
cout<<"Enter temprature for a week of first city and second city :";
for(int i=0;i<city;i++)
{
for(int j=0;j<week;j++)
{
cout<<"city"<<i+1<<"  day"<<j+1<<" :";
cin>>Tempreture[i][j];
}
}
cout<<"\n\n\ndisplay value \n";
for(i=0;i<city;i++)
{
for(int j=0;j<week;j++)
{cout<<"city"<<i+1<<"\nDay"<<j+1<<"="<<Tempreture[i][j]<<endl;

}
}
getch();
}