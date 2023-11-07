//                        12. Some others used of vectors
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // a vector

    v.push_back(1);
    v.push_back(3); // insert values
    v.push_back(6);
    v.push_back(7);

    cout << "enlements in vectors are : " << endl;
    for (auto i : v)
    {
        cout << i << " "; // printing of elements
    }
    cout << endl;

    cout << "6 present or not :- " << binary_search(v.begin(), v.begin(), 6) << endl; // binary search for finding element from start to end;

    cout << "lower bound :- " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound :- " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max :- " << max(a, b); // for maximum value ; <algorithm>
    cout << "min :- " << min(a, b);

    swap(a, b);

    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    string n = "chiku";
    reverse(n.begin(), n.end());
    cout << "string is : " << n;
}