#pragma once
#include "worker.hh"
using namespace std;

class node : public worker
{
public:
	worker date;
	node* next = NULL;
};

class list
{
public:
	node* head = NULL;

	void insert(worker date);
	void show();
	void del(string nam);
	void change(string nam);
	void sort();
};

