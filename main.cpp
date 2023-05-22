#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int f = 1;
    int n;

    cout << "   Factorial " << endl;
    cout << "Enter a number:";
    cin >> n;

    while (i <= n)
    {
        f *= i++;
    }
    cout << "Factorial: " << f << endl;

    return 0;
}
