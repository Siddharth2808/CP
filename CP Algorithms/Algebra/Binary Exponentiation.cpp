#include <iostream>
using namespace std;
int c = 0;

long long binpow(long long a, long long b)
{
    c++;
    if(b==0) return 1;
    long long res = binpow(a, b/2);
    res = res * res;
    if(b%2) res = res * a;
    return res;
}

int main() { 
    cout<<binpow(2, 16)<<" "<<c<<"\n";
}
