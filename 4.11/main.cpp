#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N][N];
vector<int> v;
int flag;

void DAC(vector<int> tv,int be,int en,int va);      //·ÖÖÎËã·¨
int main()  {
    int n,x;
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin>>a[i][j];
    cout<<"Please input x: ";
    cin>>x;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            v.push_back(a[j][i]);
    DAC(v,0,n*n-1,x);
    if (flag==0)    cout<<"x isn't in M."<<endl;
    return 0;
}

void DAC(vector<int> tv,int be,int en,int va)  {
    if (flag)   return;
    if (va<tv[be]||va>tv[en])   return;
    if (be==en) {
        if (tv[be]==va) {
            flag=1;
            cout<<"x is in M."<<endl;
            return;
        }
        else  return;
    }
    DAC(tv,be,(be+en)/2,va);
    DAC(tv,(be+en)/2+1,en,va);
}


