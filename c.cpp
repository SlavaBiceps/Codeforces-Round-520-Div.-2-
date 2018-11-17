#include <iostream>
#include <cmath>

using namespace std;
int main() {
    long long n,q,a,b,rz,ns,vk,nv,vkk,nvk;
    string s;
    cin >> n >> q;
    cin >> s;
    for (long long i=0;i<n;i++){
        cin >> a >> b;
        long long sum=0;
        vkk=0;
        for (long long k=a;k<=b;k++){
            sum+=(s[k]-'0');
            if ((s[k]-'0')==1) {
                vkk++;
            }

        }
        rz=b-a+1;
        ns=0;
        vk=1;
        nv=0;
        nvk=rz-vkk;
        for (long long k=vkk;k>0;k--){
            ns+=vk;
            vk+=vk;
            nv+=vk;
        }
        for (long long k=nvk;k>0;k--){
            ns+=nv;
            nv+=nv;
        }
        cout << ns << endl;
    }
    return 0;
}