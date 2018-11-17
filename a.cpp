#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n,k=0,maxx=0,t=0;
    int m[10000];
    m[0]=0;
    cin >> n;
    m[n+1]=1001;
    for (int i=1;i<=n;i++){
        cin >> m[i];
    }
    for (int i=1;i<=n;i++){
        if ((m[i]-1==m[i-1])&&(m[i]==m[i+1]-1)){
            for (t=0;t<=n;i++,t++){
                if ((m[i]-1==m[i-1])&&(m[i]==m[i+1]-1)){k++;} else {break;}
            }
        }
        maxx=max(maxx,t);
    }
    cout << maxx;
    return 0;
}
