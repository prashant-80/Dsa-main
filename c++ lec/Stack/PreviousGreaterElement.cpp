#include<iostream>
#include<stack>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    stack<int> st;
    int arr[] = {4,2,3,8,5,6,7};
    int n = 7;
    int pge[n];
    pge[0] = -1;
    st.push(arr[0]);  //pop(jab tak ele chota hai curr ele se)->ans->push
     for(int i=1;i<n;i++){

        //pop
        while(st.size()>0 && st.top()<=arr[i]) st.pop();

        //ans

        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();

        //push
        st.push(arr[i]);  
    }

    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;





}