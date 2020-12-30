#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int count=0,count1=0;
for(int i=0;i<n;i++){
if(s[i]=='L')
cout << "hey";
// count-=1;
// else if(s[i]=='R')
// count+=1;
// else if(s[i]=='D')
// count1-=1;
// else if(s[i]=='U')
// count1+=1;
}
// cout<<count<<" "<<count1;
return 0;
}