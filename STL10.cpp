//                 10. Set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(3); // insert values but set accept only one value rather than many
    s.insert(0);
    s.insert(5);
    s.insert(5);

    cout << "Elements in sorted order : ";
    for (auto i : s) // after print it already in sorting order
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element present or not :- " << s.count(3) << endl;
    cout << "Element present or not :- " << s.count(4) << endl; // count() function used for searching

    cout << "After first erase : ";
    s.erase(s.begin()); // only erase for first element
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin(); // erase for second,third.......
    it++;

    cout << "After second erase : ";
    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
}