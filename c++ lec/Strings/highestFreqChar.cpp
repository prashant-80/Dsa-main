#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
        string s="leetcode";
        int len=s.length();  //string length
        vector<int> arr(26,0);  //vector of size 26 intializing it with 0
        int count=0;
        //traversing in string 
        for(int i=0;i<len;i++)
        {
                char ch=s[i];
                int ascii=(int)ch;
                arr[ascii-97]++;
        }
        //traversing in another array of size 26 and findinng max number
        int max=0;
        for(int i=0;i<26;i++)
        {
                if(max<arr[i]) max=arr[i];
        }
        cout<<max<<" ";

        // traversing in arr finding char which has max number 

        for(int i=0;i<26;i++)
        {
            if(arr[i]==max) 
            {
                int ascii=i+97;
                char ch=(char)ascii; //converting to char
                cout<<ch;
            }
        }


}