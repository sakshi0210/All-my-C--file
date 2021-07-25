#include<iostream>
#include<stdio.h>
#include<conio.h>
#define MAX 1
using namespace std;
class Stack
{   int s[MAX];
    int top;
public:
    Stack(int x=1)
    {
        top=x;
    }
    void push(int x)
    {
        top++;
        s[top]=x;
    }
    int pop()
    {
        int x=s[top];
        top--;
        return x;
    }
    int stack_full()
    {
        if(top==MAX-1)
            return 1;
        else
            return 0;
    }
    int stack_empty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
  
  
    
};
