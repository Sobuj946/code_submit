#include <bits/stdc++.h>
using namespace std;
#define Size 5
struct Part
{
    int ModelNumber;
    int partNumber;
    float price;
};

int main()
{
    Part apart[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter Model Number:";
        cin >> apart[i].ModelNumber;
        cout << "Enter Part number:";
        cin >> apart[i].partNumber;
        cout << "Enter Price:";
                cin >> apart[i].price;
    }
    for (int i = 0; i < Size; i++)
    {
        cout << "The Model Number:";
        cout << apart[i].ModelNumber << endl;
        cout << "The Part number:";
        cout << apart[i].partNumber << endl;
        cout << "The Price:";
        cout << apart[i].price << endl;
    }

    return 0;
}