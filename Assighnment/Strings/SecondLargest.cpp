#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// int main(){
//     string s="1241";
//     int  max=s[0];
//     int smax;
//     sort(s.begin(),s.end());
//     for(int i=0;i<s.length();i++){
//         if(s[i]>max){
//              smax=max;
//             max=s[i];
//         }

//     }   

//     cout<<"second max in a string="<<smax-48; 
// }

int main() {
string p;
cin >> p;
char f = '?', s = '?';
for (auto &i : p) {
if (f == '?' || i > f) {
s = f;
f = i;
} else if (i > s) {
s = i;
}
}
cout << s;
}