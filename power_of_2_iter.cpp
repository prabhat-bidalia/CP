#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n)
{
    if(n <= 0) return false;
    while(n % 2 == 0) n /= 2;
    return n == 1;
}
int main()
{
    int n = 16;
    cout<<isPowerOf2(n);
    return 0;
}