#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> arrlist;
    int q;
    cin >> q;
    long long int x, v;
    while (q--)
    {

        cin >> x >> v;
        if (x == 0)
        {
            arrlist.push_front(v);
        }
        else if (x == 1)
        {
            arrlist.push_back(v);
        }
        else if (x == 2)
        {
            if (v < arrlist.size())
            {

                arrlist.erase(next(arrlist.begin(), v));
            }
        }

        cout << "L -> ";
        for (int val : arrlist)
        {
            cout << val << " ";
        }
        cout << endl;
        arrlist.reverse();
        cout << "R -> ";
        for (int val : arrlist)
        {
            cout << val << " ";
        }
        cout << endl;
        arrlist.reverse();
    }

    return 0;
}
