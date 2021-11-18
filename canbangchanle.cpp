#include <iostream>
#include <cmath>
using namespace std;

int ckeck(int n)
{
    int count, le = 0, chan = 0;
    while (n > 0)
    {
        int t = n % 10;
        if (t % 2 == 0)
            chan++;
        else
            le++;
        n /= 10;
    }
    if (chan == le)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = pow(10, n -1); i < pow(10, n); i++)
    {
        if (ckeck(i))
        {
            count ++;
            cout << i << " ";
        }
        if (count == 10){
            cout << "\n";
            count = 0;
        }
    }
}