#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i,n;
    cin>>n;
    if(1<=n && n<=100)
    {
        vector <string>w(n);

        for(i=0; i<n; i++)
        {
            cin>>w[i];
        }
        for(i=0; i<n; i++)
        {
            string a=w[i];
            int len=a.length();

            if(len>10)
            {
                cout<<a[0]<<(len-2)<<a[len-1]<<"\n";

            }
            else
            {
                cout<<a<<"\n";
            }




        }


    }






    return 0;
}
