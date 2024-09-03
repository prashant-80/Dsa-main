#include<iostream>
using namespace std;
int main()
{
int n,lastdigit,rev=0;
cout<<"Enter the number";
cin>>n;
int a=n;
while(n!=0)                     // 123
{
    lastdigit=n%10;
    rev*=10;
    rev+=lastdigit;
    n/=10;
}
while(rev!=0)                   //321
{
lastdigit=rev%10;

if(lastdigit==1) cout<<"one ";
//if(rev%1000==0) cout<<"thousand";
else if(lastdigit==2) cout<<"two ";
else if(lastdigit==3) cout<<"three ";
else if(lastdigit==4) cout<<"four ";
else if(lastdigit==5) cout<<"five ";
else if(lastdigit==6) cout<<"six ";
else if(lastdigit==7) cout<<"seven ";
else if(lastdigit==8) cout<<"eight ";
else if(lastdigit==9) cout<<"nine ";
else  cout<<" zero ";
if(a%10000==0) cout<<"thousand";
 if(a%1000==0) cout<<"hundred and ";
rev/=10;
a/=10;


}

}