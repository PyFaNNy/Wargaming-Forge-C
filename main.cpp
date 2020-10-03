#include <iostream>

using namespace  std ;

int main()
{
    int t, k;
    string result;
    cin>>t>>k;

    for (int i = 1; i <= t; i++)
    {
        int m, n;
        cin>>m>>n;

        if (k >= n || k >= m)
        {
            if ((m + n) % 2 == 0)
            {
                result += "-\n";
            } else
                {
                result += "+\n";
                }
        } else
            {
            int min;
            if (n <= m)
                min = n - 1;
            else
                min = m - 1;
            if (((n + m) % 2 != 0) && ((min - 1) / k == 1))
            {
                result += "-\n";
            } else
                {
                result += "+\n";
                }
            }
    }
    cout << result;
    return 0;
}