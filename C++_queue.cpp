/*************************************************************************
>> File Name: 队列.cpp
>> Author: chenjunjie
>> Mail: 2716705056qq.com
>> Created Time: 2019.03.13
************************************************************************/

#include<iostream>
using namespace std;
#include<cstdio>
#include<cstdlib>
#include<queue>


int main(int argc,char *argv[])
{
    queue<int> Queue;
    for(int i = 0; i < 10; i++)
    {
        Queue.push(i+1);                                      //queue.push(i)向队尾添加元素
    }
    cout << "队列大小为:" << Queue.size() << endl;           // queue.size()返回队列元素数量,没有queue.max_size(),因为队列的数量可以无限
    //cout << Queue.max_size() << endl;
    cout << Queue.front() << endl;                            //queue.front()返回队首的元素,但不删除元素
    Queue.pop();                                              //queue.pop()删除队首的元素,返回void

    cout << Queue.front() << endl;
    Queue.pop();

    cout << Queue.front() << endl;
    Queue.pop();

    cout << Queue.back() << endl;                              //queue.back()返回队首的元素,但不删除元素

    //cout << "队列中第4个元素为:" << Queue[3] << endl;              //queue<int>不支持Queue.at(n)和queue[n]
    cout << "队列大小为:" << Queue.size() << endl;
}
