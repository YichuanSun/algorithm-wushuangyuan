#include <bits/stdc++.h>
#define N 100005
using namespace std;

int v[N],a[N];
vector<int> vc[N];
int main()  {
    int n,y;    //n是货币面值的种类，y是需要支付的钱数
    cin>>n>>y;
    for (int i=0;i<n;i++)   {
        cin>>v[i];
        a[v[i]]=1;
        vc[v[i]].push_back(v[i]);       //这一步过了很久才想起来，原先此处没有初始化
    }
    for (int i=1;i<=y;i++)  {
        for (int j=0;j<n;j++)   {
            if (i<v[j])    break;
            if (a[i]==0||(1+a[i-v[j]])<a[i])    {
                a[i]=a[i-v[j]]+1;
                vc[i]=vc[i-v[j]];
                vc[i].push_back(v[j]);
            }
        }
    }
    cout<<a[y]<<endl;
    for (int i=0;i<(int)vc[y].size();i++)
        cout<<vc[y][i]<<' ';
    cout<<endl;
    return 0;
}
