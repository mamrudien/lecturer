#include <iostream>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    
    cin >> t;
    
    while (t --)
    {
        long long n, a, b;

        cin >> n >> a >> b;

        if (a == 0 || b == 0)
        {
            cout << 2 << endl;
        }
        else if (n == a + b)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << n/gcd(n, gcd(a, b)) << endl;
        }
    }

    return 0;
}
