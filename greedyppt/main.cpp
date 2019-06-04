#include <bits/stdc++.h>
#define N 10005
using namespace std;
bool spot[N],des[N];
int main()  {
    int n,totd=0;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>des[i];
    }
    for (int i=0;i<n;i++)   {
        if (spot[i])    continue;
        for (int j=i+1;j<n;j++) {
            if (spot[j])    continue;
            if (des[i]^des[j])  {
                spot[i]=spot[j]=1;
                totd+=j-i;
                cout<<j<<' '<<i<<endl;
                break;
            }
        }
    }
    cout<<totd<<endl;
    return 0;
}
