#include <iostream>
using namespace std;

struct node 
{
    node *nest;
    int info;

};

class stack
{
    node *top, *newNode;

    public:

    stack()
    {
        top = NULL;
        newNode = NULL;
    }

    void push(int);
    void pop();
    void peek();
    

};

void stack :: push()
{


}

void stack:: pop()
{

}

void stack :: peek()
{

}

int main()
{
    stack obj;

}