#include<iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    switch (c)
    {
        case 'a':
            cout << "vowel\n";
            break;

        case 'e':
            cout << "vowel\n";
            break;

        default:
            cout << "consonant";
            break;
    }

    return 0;
}
