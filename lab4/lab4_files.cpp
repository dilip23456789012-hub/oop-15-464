#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the collection:" << endl;

    for (auto element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}