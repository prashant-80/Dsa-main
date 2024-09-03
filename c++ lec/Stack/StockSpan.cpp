#include<iostream>
#include<stack>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    stack<int> st;
    int arr[] = {4,2,3,8,5,6,7};
    int n = 7;
    int pgi[n];
    pgi[0] = -1;
    st.push(0);  //pop->ans->push
     for(int i=1;i<n;i++){
        //pop
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();

        //ans
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();

        //push
        st.push(i);  
    }

  //previous gretest index array
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;

    int span[n];
    span[0] = 1;

    for(int i=1;i<n;i++){
        span[i] = i-pgi[i];
    }

    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
}