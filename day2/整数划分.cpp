#include <iostream>
using namespace std;

/**
 * n是要划分的数，
 * m 是整数划分时候的起始数
 */
int q(int n, int m)
{
    if (n < 1 || m < 1)
        return 0;
    if (n == 1 || m == 1)
        return 1;
    if (n < m)
        //当n<m的时候让n=m
        return q(n, n);
    if (n == m)
        //当n==m
        return q(n, m - 1) + 1;
    // 6
    // 3,1 + 2，1
    // 1+1
    return q(n, m - 1) + q(n - m, m);
}
int main(int argc, char const *argv[])
{
    cout << q(6, 6) << endl;
    return 0;
}
