#include <iostream>
#include<cstring>
using namespace std;
#include "numbers.h"
#include <limits>
int main()
{
setlocale(LC_ALL, "Russian");
int k;
cout<<"введите номер варианта: ";
cin>>k;
switch(k){
    case 1:
{

    numbers<char> myQueue(5);
    int ct = 0;
    char ch;
    cout<<"введите очередь:";
    while (ct < 5)
    {
       ct++;
       cin >> ch;
       myQueue.enqueue(ch);
    }
    cout<<"полученна€ очередь:";
    myQueue.print();
    cout<<endl;
    cout<<"1 элемент: "<<myQueue.getTop()<<endl;
    cout<<"размер:"<<myQueue.SIZE()<<endl;
    cout<<" очередь после операции dequeue:";
    myQueue.dequeue();
    myQueue.print();
    myQueue.clear();
    break;
}
    case 2:
{
    int n;
    cout<<" введите количество элементов:  ";
    cin>>n;
    numbers<char> myQueue(n);
    int c = 0;
    char h;
    cout<<"введите очередь:";
    while (c < n)
    {
       cin >> h;
       myQueue.enqueue(h);
       ++c;
    }
    cout<<"очередь:";
    myQueue.print();
    cout<<endl;
    cout<<"Top: "<<myQueue.getTop()<<endl;
    cout<<"размер: "<<myQueue.SIZE()<<endl;
    cout<<"очередь после операции dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl<<"размер: "<<myQueue.SIZE()<<endl;
    cout<<endl;
    cout<<"¬введите новый элемент:\t";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> h;
    myQueue.enqueue(h);
    cout<<"\nочередь после операции enqueue:";
    myQueue.print();
    cout<<endl;
    myQueue.clear();
    break;
    }
    case 3:
{
    numbers<char> myQueue(7);
    int f = 0;
    char d;
    cout<<"введите очередь"<< endl;
    while (f < 7)
    {
       f++;
       cin >> d;
       myQueue.enqueue(d);
    }
    cout<<"очередь"<< endl;
    myQueue.print();
    myQueue.dequeue();
    myQueue.print();
    cout<<endl<<"копирование"<<endl;
    numbers<char> MyQueue(myQueue);
    MyQueue.print();
    break;
}}
    return 0;
}
