#include <iostream>
#include <string>
using namespace std;

int main()
{
    int line, length;
    string word, newword;
    cin >> line;
    for (int i = 0; i < line; i++)
    {
        cin >> word;
        length = word.length();
        if (length > 10)
        {
            newword = word[0] + to_string(length - 2) + word[length - 1];
            cout << newword << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}
