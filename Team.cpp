#include<bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define mod 1000000007
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
          freopen("input","r",stdin);
          freopen("output","w",stdout);
  #endif
        
         ll n,m;
         cin>>n>>m;
         if(n>m+1||2*n<m-2)
         {
          cout<<-1;
          return 0;
         }
         if(n==m)
         {
          for(ll i=0;i<n;i++)
          {
           cout<<10; 
          }
          return 0;
         }
           ll k=0;
           ll ans=-1;
                while(n>0||m>0)
                {
                    if(m>n && k<2 || ans==0)
                    {
                        m--;
                        k++;
                        ans=1;
                    }
                    else
                    {
                        n--;
                        k=0;
                        ans=0;
                    }
                    cout<< ans;
                }
          return 0;
        }
