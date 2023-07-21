#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Queue_priority
{
	string* queue;
	int* priority;
	int max_size;
	int time;
public:
	Queue_priority(string user) : time{ 0 }, max_size{1} {
		queue = new string[max_size];
		queue[0] = user;
		priority = new int[max_size];
		priority[0] = 1;
	}
	~Queue_priority() {
		delete[] queue;
		delete[] priority;
	}
	void push(string user, int priority);
	void pop();
	void show();
};

