#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;
    int arr[n][n] = {0};

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        if (arr[a][b] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}