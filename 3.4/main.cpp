#include <bits/stdc++.h>
#define N 15
using namespace std;
int c[N];
void dfs(int p);
bool jud();
bool used[N];
int main()  {
    dfs(1);     //�ӵ�һ�㿪ʼ����
    return 0;
}

void dfs(int p) {       //���ݷ�
    if (p==10)   {      //��������һ�㣬�Ϳ�ʼ�жϽ���Ƿ���ȷ
        if (jud())  {               //��������ȷ���ʹ�ӡ
            cout<<c[1]<<c[2]<<'x'
            <<c[3]<<'+'<<c[4]
            <<c[5]<<c[6]<<'/'
            <<c[7]<<'-'<<c[8]<<
            c[9]<<"=0"<<endl;
        }
        return;
    }
    for (int i=1;i<=9;i++)  {       //����ÿ��״̬
        if (p==3&&(i==1)) continue;
        if (p==7&&(i==1)) continue;
        if (used[i])    continue;
        c[p]=i;
        used[i]=1;
        dfs(p+1);
        used[i]=0;
    }
}

bool jud()  {           //�жϵ�ǰ���Ƿ�Ϸ�
    if ((c[4]*100+c[5]*10+c[6])%c[7]!=0)    return 0;       //�Ƿ��ܹ�����
    else return ((c[1]*10+c[2])*c[3]+(c[4]*100+c[5]*10+c[6])/c[7]-(c[8]*10+c[9]))==0;       //�жϽ���Ƿ�Ϊ0
}
