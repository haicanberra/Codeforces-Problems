#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a.compare("Tetrahedron") == 0)
        {
            count += 4;
        }
        else if (a.compare("Cube") == 0)
        {
            count += 6;
        }
        else if (a.compare("Octahedron") == 0)
        {
            count += 8;
        }
        else if (a.compare("Dodecahedron") == 0)
        {
            count += 12;
        }
        else if (a.compare("Icosahedron") == 0)
        {
            count += 20;
        }
    }
    cout << count;
    return 0;
}