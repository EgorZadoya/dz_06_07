#include "Queue_priority.h"

void Queue_priority::push(string user,int _priority) {
	string* tmp = new string [max_size + 1];
	for (int i = 0; i < max_size; i++) {
		tmp[i] = queue[i];
	}
	tmp[max_size] = user;
	delete[]queue;
	max_size += 1;
	queue = tmp;

	int* tmp1 = new int[max_size];
	for (int i = 0; i < max_size - 1; i++) {
		tmp1[i] = priority[i];
	}
	tmp1[max_size - 1 ] = _priority;
	delete[] priority;
	priority = tmp1;
}

void Queue_priority::pop() {
	int index = 0;
	for (int i = 0; i < max_size; i++) {
		if (priority[i] < 2) {
			index = i;
		}
	}
	max_size -= 1;
	for (int i = index; i < max_size; i++) {
		priority[i] = priority[i + 1];
		queue[i] = queue[i + 1];
	}
	
}

void Queue_priority::show() {
	cout << "___________________________________________________________" << endl;
	cout << "Пользователь: " << "\t|\t" << "Приоритет" << "\t|\t" <<  "Время" << endl;
	for (int i = 0; i < max_size; i++) {
		cout << queue[i] << "\t\t|\t" << priority[i] << "\t\t|\t" << time++ << endl;
	}
}
