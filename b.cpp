#include <iostream>
#include <cmath>

using namespace std;
int main() {
    long long n,i=0,ch=1;
    float tt=0;
    long long ma=0,n1=0;
    cin >> n;
    for (i=2;i<=n;i++){
        long long thi=0;
        while (n%i==0) {
            thi++;
            n=n/i;
        }
        if (thi>0) {
            ch*=i;
            ma=max(ma,thi);
            tt=thi;
            long long k=0;
            if (tt==1){n1=1;}
            while (tt>1){
                tt/=2;
                k++;
            }
            if (tt!=1){n1=1;}
        }
    }
    n=i;
    tt=ma;
    long long k=0;
    if (ma>1) {
    while (tt>1){
        tt/=2;
        k++;
    }
    if ((tt!=1)||(n1==1)){k++;}
    cout << ch << " "  << k;
    return 0;
    } else {
        cout << ch << " " << 0;
        return 0;
    }
}