#include <bits/stdc++.h>
#define N 10005
using namespace std;

int a[N][N],flag,n,m;

int main()  {
    cin>>n>>m;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>a[i][j];
    dfs(0,0);
    return 0;
}

void dfs(int x,int y)   {
    if (flag)   {return;}
    mov(x,y,op);    //�����Ƿ���������ƶ�
    if (x<0||x>=n||y<0||y>=m)   {return;}
    if (a[x][y]==1) {return;}
    for (int i=1;i<=8;i++)  {
        if (i==1||i==3||i==5)   continue;
        if (mov(x,y,i)) {

        }
    }
}

bool mov(int x,int y,int op)    {
    bool jud=0;
    switch(op)  {
        case 1: {j=(x>0?1:0);break;}            //��
        case 2: {j=(x<n-1?1:0);break;}          //��
        case 3: {j=(y>0?1:0);break;}            //��
        case 4: {j=(y<m-1?1:0);break;}          //��
        case 5: {j=((y>0&&x>0)?1:0);break;}     //����
        case 6: {j=((y>0&&x<n-1)?1:0);break;}   //����
        case 7: {j=((y<m-1&&x>0)?1:0);break;}   //����
        case 8: {j=((y<m-1&&x<n-1)?1:0);break;} //����
        default: break;
    }
    return j;
}



