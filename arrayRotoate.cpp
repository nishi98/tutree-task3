#include<iostream>
using namespace std;
int main(){
int n,d;
cin>>n>>d;
int res[n];
for(int i=0;i<n;i++){
     int x=(i-d+n)%n;
      cin>>res[x];
}
for(int i:res) 
cout<<i<<" ";
 cout<<"\n";
}