#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int temp;
    vector<int> v1;

    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    v1.reserve(10);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    cout << v1.empty() << endl;
    
    v1.push_back(100);
    auto t = v1.begin();
    t += 5;
    v1.erase(t);
    cout << v1.at(5) << endl;

    

    
    return 0;
}
