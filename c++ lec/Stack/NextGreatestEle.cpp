#include<iostream>
#include<stack>
#include<algorithm>
#include<climits>
using namespace std;
//stack -> pop,ans,push 
int main(){
    stack<int> st;

    int arr[] = {1,2,3,4,5,6,7,8};
    int n=8;
    int nge[n];
    nge[n-1] = -1;
    st.push(arr[n-1]);
    
    
    for(int i=n-2; i>=0 ; i--){
       
        //pop all the elements in stack smaller than arr[i]
        while(st.size()>0  && st.top()<=arr[i]){
             st.pop();
        }

        //mark the ans in nge array
         if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();

        //push the arr[i]       
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}