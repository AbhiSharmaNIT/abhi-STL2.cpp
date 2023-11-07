//                            11. Map
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m; // here always int with string

    m[1] = "I";
    m[3] = "am"; // map values with number position
    m[10] = "Chiku";

    m.insert({6, "Hero"}); // insert value at 6th position

    cout << "Before erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << "  "; // before print values which is in first keystore
    }
    cout << endl;

    cout << "And another form : " << endl;
    for (auto i : m)
    {
        cout << i.first << "  " << i.second << endl; // print values whith string ;
    }

    cout << "element is present or not : " << m.count(5) << endl; // searching
    cout << "element is present or not : " << m.count(3) << endl;

    m.erase(6); // erase 6th position values
    cout << "After erase : " << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // print final values after erase
    }
}