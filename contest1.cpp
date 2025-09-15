#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,t;
   cin>>t;

   vector<pair<int,int>> answers;

   while(t--){
      cin>>n;
      int a[n];
      for(i=0;i<n;i++){
         cin>>a[i];
      }

      int prefix[n+1];
      prefix[0] = 0;
      for(i=1;i<=n;i++){
         prefix[i] = prefix[i-1] + a[i-1];
      }

      int L=0, R=0;
      bool found=false;

      for(int l=1; l<n && !found; l++){
         for(int r=l+1; r<n; r++){
            int s1 = prefix[l] % 3;
            int s2 = (prefix[r] - prefix[l]) % 3;
            int s3 = (prefix[n] - prefix[r]) % 3;

            if(s2<0) s2+=3;
            if(s3<0) s3+=3;

            if((s1==s2 && s2==s3) || (s1!=s2 && s2!=s3 && s1!=s3)){
               L=l;
               R=r;
               found=true;
               break;
            }
         }
      }

      if(found) answers.push_back({L,R});
      else answers.push_back({0,0});
   }


   for(auto p : answers){
      cout << p.first << " " << p.second << "\n";
   }

   return 0;
}
