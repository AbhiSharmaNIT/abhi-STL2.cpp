//                 9. "Priority queue" basics
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> max; // initialisation of maximum value

    priority_queue<int, vector<int>, greater<int>> min; // initialisation of minimum value

    max.push(1);
    max.push(2); // insert the values for decreasing  order
    max.push(0);
    max.push(3);
    cout << "size is : " << max.size() << endl; // size of vector

    int n = max.size(); // store size into n, because loop flows till end
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " "; // print maximum value first and second and so on;
        max.pop();                // remove maximum value and loop starts for remaining elements
    }
    cout << endl;

    min.push(4);
    min.push(6);
    min.push(5); // insert the values for increaing order
    min.push(8);

    int m = min.size(); // store size into m, because loop flows till end
    for (int i = 0; i < n; i++)
    {
        cout << min.top() << " "; // print minimum value
        min.pop();                // remove mimimum value then loop starts for remaining elements
    }
    cout << endl;

    cout << "Empty or not : " << max.empty() << endl; //"max" block of memory has empty
    cout << "Empty or not : " << min.empty() << endl; //"min" block of memory has empty
    return 0;
}