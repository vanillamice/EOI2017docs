// Problem C.Receipt
#include <iostream>

using namespace std;

int main()
{
    int t;
    int  N;
    cin >> t;
    int p[11];
    int   R;
    int  M = 0;
    int pr = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> N >> R;
        
        for(int j = 0; j < N; j++)
        {
            cin >> p[j];
            pr +=p[j];
        }
        M = pr/R;

    }

    return 0;
}
