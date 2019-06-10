#include <bits/stdc++.h>
using namespace std;
const int N=10005;
int a[N],b=0;
stack<int> si,ans;
void recall(int a[],int it,int nn,int sm,int yy);
int main()  {
    int n,y;
    cin>>n>>y;
    for (int i=0;i<n;i++)   cin>>a[i];
    recall(a,0,n,0,y);
    while (!si.empty()) {ans.push(si.top());si.pop();}
    while (!ans.empty())    {cout<<ans.top()<<' ';ans.pop();}
    cout<<endl;
    return 0;
}

void recall(int a[],int it,int nn,int sm,int yy)   {
    if (b)  {return;}
    if (sm==yy)  {
        b=1;
        return;
    }
    else if (sm>yy)  {
        return;
    }
    else {
        for (int i=it;i<nn;i++)  {
            si.push(a[i]);
            recall(a,i+1,nn,sm+a[i],yy);
            if (b)  return;
            si.pop();
        }
    }
}
