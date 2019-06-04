#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N];
int main()  {
    int n,ans=-1,mx=-1;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    int i=0;
    while (i<n) {
        int cnt=1;
        while (i<n-1&&a[i]==a[i+1]) {
            cnt++;
            i++;
        }
        if (mx<cnt)    {
            mx=cnt;
            ans=a[i];
        }
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
