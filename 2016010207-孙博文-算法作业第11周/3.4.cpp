#include <bits/stdc++.h>
#define N 15
using namespace std;
int c[N];
void dfs(int p);
bool jud();
bool used[N];
int main()  {
    dfs(1);     //从第一层开始遍历
    return 0;
}

void dfs(int p) {       //回溯法
    if (p==10)   {      //如果到最后一层，就开始判断结果是否正确
        if (jud())  {               //如果结果正确，就打印
            cout<<c[1]<<c[2]<<'x'
            <<c[3]<<'+'<<c[4]
            <<c[5]<<c[6]<<'/'
            <<c[7]<<'-'<<c[8]<<
            c[9]<<"=0"<<endl;
        }
        return;
    }
    for (int i=1;i<=9;i++)  {       //遍历每个状态
        if (p==3&&(i==1)) continue;
        if (p==7&&(i==1)) continue;
        if (used[i])    continue;
        c[p]=i;
        used[i]=1;
        dfs(p+1);
        used[i]=0;
    }
}

bool jud()  {           //判断当前答案是否合法
    if ((c[4]*100+c[5]*10+c[6])%c[7]!=0)    return 0;       //是否能够整除
    else return ((c[1]*10+c[2])*c[3]+(c[4]*100+c[5]*10+c[6])/c[7]-(c[8]*10+c[9]))==0;       //判断结果是否为0
}
