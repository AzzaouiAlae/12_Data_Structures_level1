#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> stkNumbers1;
    stkNumbers1.push(10);
    stkNumbers1.push(20);
    stkNumbers1.push(30);
    stkNumbers1.push(40);

    stack <int> stkNumbers2;
    stkNumbers2.push(50);
    stkNumbers2.push(60);
    stkNumbers2.push(70);
    stkNumbers2.push(80);

    stkNumbers1.swap(stkNumbers2);

    cout << "stkNumbers1 = ";
    while (!stkNumbers1.empty())
    {
        cout << stkNumbers1.top() << " ";
        stkNumbers1.pop();
    }

    cout << "\nstkNumbers2 = ";
    while (!stkNumbers2.empty())
    {
        cout << stkNumbers2.top() << " ";
        stkNumbers2.pop();
    }

    system("pause>0");
}