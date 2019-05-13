#include <bits/stdc++.h>
#define N 10
using namespace std;

int main()  {
    double x,y,z=-1,ansx,ansy;
    for (x=0;x<=4;x+=0.01)  {
        for (y=0;y<=2;y+=0.01)  {
            if ((x+y<=4)&&(x+3*y<=6))    {
                double ts=3*x+5*y;
                if (ts>z)   {
                    ansx=x;
                    ansy=y;
                    z=ts;
                }
            }
        }
    }
    cout<<ansx<<' '<<ansy<<' '<<z<<endl;
    return 0;
}
