#include <iostream>
using namespace std;

void decresing(int n)
{
    if (n == 1)
    {
        cout << "1"
             << "\t";
        return;
    }

    cout << n << "\t";
    decresing(n - 1);
}

void incresing(int n)
{
    if (n == 1)
    {
        cout << "1"
             << "\t";
        return;
    }

    incresing(n - 1);
    cout << n << "\t";
}

int main()
{
    int n;
    cin >> n;

    incresing(n);
    cout << endl;
    decresing(n);

    return 0;
}