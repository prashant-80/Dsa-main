#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  
   string s="AZYZXBDJKX";
   string str="";

   //creating string which has character  greater then x
    for (int i = 0; i <s.size(); i++)
    {
      if(s[i]>='X'){
        str.push_back(s[i]);  
      }
    }
    cout<<str<<endl;

    //sorting the string
    for(int i=0;i<str.size()-1;i++){
        
        for(int j=0;j<str.size()-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }

    cout<<str <<endl;

    //converting the string in decreasing order by reversing it
    reverse(str.begin(),str.end());
    cout<<str;

    
}