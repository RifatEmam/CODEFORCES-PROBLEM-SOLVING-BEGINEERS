#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
cin>>tc;
while(tc--){
    int n;
    cin>>n;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>mx){
            mx=x;

        }

    }
    cout<<mx<<endl;

}


return 0;
}
