#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> MyQueue;
    MyQueue.push(10);
    MyQueue.push(20); 
    MyQueue.push(30);
    MyQueue.push(40);

    cout << "MyQueue size : " << MyQueue.size() << endl;
    cout << "MyQueue front : " << MyQueue.front() << endl;
    cout << "MyQueue back : " << MyQueue.back() << endl;

    cout << "MyQueue = ";

    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }
    system("pause>0");
}