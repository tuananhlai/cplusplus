#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    string name;
    cin.ignore();
    getline(cin, name);
    cout << name;
    return 0;
}