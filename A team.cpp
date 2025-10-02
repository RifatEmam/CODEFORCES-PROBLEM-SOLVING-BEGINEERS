#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int solve=0;
int i,j;
for(i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b+c>=2){
        solve++;
    }
}

cout<<solve<<endl;






return 0;
}
