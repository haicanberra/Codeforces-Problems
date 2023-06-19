#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, b;
    vector<int> a;
    int temp1, temp2, count1 = 0, index;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> b;
            a.push_back(b);
        }
        temp1 = a[0];
        for (int j = 1; j < n - 1; j++)
        {
            if (a[j] != temp1 && a[j + 1] == temp1)
            {
                cout << j + 1 << endl;
                break;
            }
            else if (a[j] != temp1 && a[j + 1] == a[j])
            {
                cout << 0 + 1 << endl;
                break;
            }
            else if (a[j + 1] != temp1)
            {
                cout << j + 2 << endl;
                break;
            }
        }
        a.clear();
    }
}
// ""
//     "
// #include <iostream>
// #include <vector>
// #include <algorithm>
//     using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int n, b;
//     vector<int> a;
//     int temp1, temp2;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> b;
//             a.push_back(b);
//         }
//         temp1 = a[0];
//         temp2 = a[1];
//         if (temp1 != temp2)
//         {
//             if (temp1 == a[2])
//             {
//                 cout << 2 << endl;
//             }
//             else if (temp2 == a[2])
//             {
//                 cout << 1 << endl;
//             }
//         }
//         else
//         {
//             for (int j = 2; j < n; j++)
//             {
//                 if (a[j] != a[0])
//                 {
//                     cout << j + 1 << endl;
//                 }
//             }
//         }
//         a.clear();
//     }
// }
// """