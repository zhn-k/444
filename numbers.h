#ifndef NUMBERS_H_INCLUDED
#define NUMBERS_H_INCLUDED

#include<iostream>
#include<cstring>

template<typename T>

class numbers {

private:
    T* num;
    int size;
    int start, finish;

public:
    numbers();
    numbers(int y);
    numbers(numbers &y);
    bool enqueue(T const newElem);
    T dequeue();
    T getTop();
    int SIZE();
    ~numbers();
    bool isEmpty();
    int clear();
    void print();
};

template<typename T>
    numbers<T>::numbers( numbers&p)
{
    size=p.size;
    num= new T[size];
    for(finish=0;finish<p.finish; finish++)
        num[finish]=p.num[finish];
}

template<typename T>
    numbers<T>::numbers()
    {
        finish=0;
        size =10;
        num= new T[size];
    }

template<typename T>
    numbers<T>::numbers( int y)
{ finish=0;
  size =y;
  num= new T[size];
}

template<typename T>
bool numbers<T>::enqueue( T const newElem)
{
    if( finish ==size )
    {
        cout<<"\nqueue is fulled yet"<<endl;
        return false;
    }
    num[finish]=newElem;
    ++finish;
    return true;
 }

template<typename T>
T numbers<T>::dequeue()
{
    if( finish == 0 )
        return 0;

    T Value = num[0];
    --finish;
    for (int a=0;a<finish; a++)
        num[a]=num[a+1];
    return Value;
}

template<typename T>
int numbers<T>::clear()
{   delete [] num;
    finish =0;
    return 0;
}


template<typename T>
T numbers<T>::getTop()

{
    return *num;
}
template<typename T>
int numbers<T>::SIZE()

{

    return finish;
}
template<typename T>
bool numbers<T>::isEmpty()
{
    if (finish==0)
        {
        return false;}

        else
    {
     return true;}

}

template<typename T>
  numbers<T>::~numbers()
    {
        delete [] num;
    }

    template<typename T>
    void numbers<T>::print( )
{


        cout<<endl;

        for (int i = 0; i <finish; ++i)
           {

           cout << num[i] << " ";}


}

#endif // NUMBERS_H_INCLUDED
