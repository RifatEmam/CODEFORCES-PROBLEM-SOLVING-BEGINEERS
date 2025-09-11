#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k,i;
 cin>>n>>k;
  int freetime=240-k;
            int totaltime=0;
            int solve=0;

if(1<=n && n<=10){
    if(1<=k && k<=240){

            for (i=1;i<=n;i++){
                    totaltime +=5*i;
                if(totaltime<=freetime){
                    solve++;
                }else {
                break;
                }
            }


    }
}


cout<<solve;







return 0;
}
