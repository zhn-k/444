#include <iostream>
#include<cstring>
using namespace std;
#include "numbers.h"
#include <limits>
int main()
{
setlocale(LC_ALL, "Russian");
int k;
cout<<"������� ����� ��������: ";
cin>>k;
switch(k){
    case 1:
{

    numbers<char> myQueue(5);
    int ct = 0;
    char ch;
    cout<<"������� �������:";
    while (ct < 5)
    {
       ct++;
       cin >> ch;
       myQueue.enqueue(ch);
    }
    cout<<"���������� �������:";
    myQueue.print();
    cout<<endl;
    cout<<"1 �������: "<<myQueue.getTop()<<endl;
    cout<<"������:"<<myQueue.SIZE()<<endl;
    cout<<" ������� ����� �������� dequeue:";
    myQueue.dequeue();
    myQueue.print();
    myQueue.clear();
    break;
}
    case 2:
{
    int n;
    cout<<" ������� ���������� ���������:  ";
    cin>>n;
    numbers<char> myQueue(n);
    int c = 0;
    char h;
    cout<<"������� �������:";
    while (c < n)
    {
       cin >> h;
       myQueue.enqueue(h);
       ++c;
    }
    cout<<"�������:";
    myQueue.print();
    cout<<endl;
    cout<<"Top: "<<myQueue.getTop()<<endl;
    cout<<"������: "<<myQueue.SIZE()<<endl;
    cout<<"������� ����� �������� dequeue:";
    myQueue.dequeue();
    myQueue.print();
    cout<<endl<<"������: "<<myQueue.SIZE()<<endl;
    cout<<endl;
    cout<<"�������� ����� �������:\t";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> h;
    myQueue.enqueue(h);
    cout<<"\n������� ����� �������� enqueue:";
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
    cout<<"������� �������"<< endl;
    while (f < 7)
    {
       f++;
       cin >> d;
       myQueue.enqueue(d);
    }
    cout<<"�������"<< endl;
    myQueue.print();
    myQueue.dequeue();
    myQueue.print();
    cout<<endl<<"�����������"<<endl;
    numbers<char> MyQueue(myQueue);
    MyQueue.print();
    break;
}}
    return 0;
}
