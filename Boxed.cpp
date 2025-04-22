#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = s.size();
    cout << "+";
    for (int i = 1; i <= count + 2; i++)
    {
        cout << "-";
    }
    cout << "+" << endl;

    cout << "| " << s << " |" << endl;
    cout << "+";
    for (int i = 1; i <= count + 2; i++)
    {
        cout << "-";
    }
    cout << "+" << endl;

    return 0;
}
