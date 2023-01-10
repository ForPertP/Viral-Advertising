#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'viralAdvertising' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int viralAdvertising(int n)
{
    int cumulative = 0;
    int shared = 5;
    
    for (int i = 0; i < n; ++i)
    {
        shared = (int)floor(shared/2);
        cumulative += shared;
        shared *= 3;
    }

    return cumulative;
}
