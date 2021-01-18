#include <bits/stdc++.h>
using namespace std;
void doUnion(int a[], int n, int b[], int m) {
   set<int> s;
    for(int i = 0 ; i < n ; i++)
        s.insert(a[i]);
    for(int i = 0 ; i < m ; i++)
        s.insert(b[i]);
   for(auto it:s){
       cout<<it<<" ";
   }
}
void doIntersection(int a[],  int n, int b[],int m) 
{ 
    int i = 0, j = 0; 
    while (i < n && j < m) { 
        if (a[i] < b[j]) 
            i++; 
        else if (b[j] < a[i]) 
            j++; 
        else 
        { 
            cout << b[j] << " "; 
            i++; 
            j++; 
        } 
    } 
} 

int main() {
	int t;
	cin >> t;	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++)
	       cin >> a[i];   
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	   doUnion(a, n, b, m) ;
       cout<<endl;
        doIntersection(a, n, b, m) ;
	    
	}
	
	return 0;
}
