#include<iostream>
#include<string>
using namespace std;

struct queue
{
	queue* prev;
	queue* next;
	int _size;
	int _data;
	queue* init(queue* head) {
		head = new queue();
		head->prev = head;
		head->next = head;
		head->_size = 0;
		head->_data = -1;
		return head;
	}
	void _push(queue* head, int data) {
		queue* tmp;
		tmp = new queue();
		tmp->_data = data;

		if (head->_size == 0) {
			tmp->prev = head;
			head->next = tmp;
		}
		else {
			queue* last = head->prev;
			tmp->prev = head->prev;
			last->next = tmp;
		}
		tmp->next = head;
		head->prev = tmp;
		head->_size += 1;
	}
	int _pop(queue* head) {
		if (head->_size == 0) {
			return -1;
		}
		int result = head->next->_data;
		queue* erase = head->next;
		head->next = head->next->next;
		head->next->prev = head;
		free(erase);
		head->_size -= 1;
		return result;
	}
	int size(queue* head) {
		return head->_size;
	}
	int _empty(queue* head) {
		return (head->_size == 0);
	}
	int _front(queue* head) {
		if (_empty(head)) {
			return -1;
		}
		int result = head->next->_data;
		return result;
	}
	int _back(queue* head) {
		if (_empty(head)) {
			return -1;
		}
		int result = head->prev->_data;
		return result;
	}
};

int main()
{
	int n;
	cin >> n;
	queue* q;
	q = q->init(q);
	for (int i = 0; i < n; i++) {
		string str;
		int num;
		cin >> str;
		if (str == "push") {
			cin >> num;
			q->_push(q, num);
		}
		else if (str == "pop") {
			cout << q->_pop(q) << endl;
		}
		else if (str == "size") {
			cout << q->size(q) << endl;
		}
		else if (str == "empty") {
			cout << q->_empty(q) << endl;
		}
		else if (str == "front") {
			cout << q->_front(q) << endl;
		}
		else {
			cout << q->_back(q) << endl;
		}
	}
	return 0;
}