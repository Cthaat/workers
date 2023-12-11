#define _CRT_SECURE_NO_WARINGS 1

#include "all.hh"
#include "chain.hh"
#include "worker.hh"



void list::insert(worker date)
{
	node* new_node = new node;
	new_node->date = date;
	new_node->next = NULL;
	if (!head)
	{
		head = new_node;
	}
	else
	{
		node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

void list::show()
{
	node* tmp = head;
	while (tmp)
	{
		tmp->date.show();
		tmp = tmp->next;
	}
}

void list::del(string nam)
{
	node* p = head;
	node* q = p->next;
	if (p->date.name == nam)
	{
		delete p;
		p = NULL;
		head = NULL;
		return;
	}
	if (!(p->next))
	{
		return;
	}
	while (q->date.name != nam && q->next)
	{
		p = q;
		q = q->next;
	}
	if (!q)
	{
		cout << "Not found" << endl;
		return;
	}
	else
	{
		p->next = q->next;
		delete q;
	}
}

void list::sort()
{
	node* p = head;
	node* q = p->next;
	while (p)
	{
		while (q)
		{
			if (p->date.ID > q->date.ID)
			{
				worker temp = p->date;
				p->date = q->date;
				q->date = temp;
			}
			q = q->next;
		}
		p = p->next;
	}
}

void list::change(string nam)
{
	worker temp_worke;
	int m_ID;
	string m_name;
	int m_job;
	cout << "±àºÅ" << endl;
	cin >> m_ID;
	cout << "ÐÕÃû" << endl;
	cin >> m_name;
	cout << "¹¤×÷" << endl;
	cin >> m_job;
	node* p = head;
	node* q = p->next;
	if (p->date.name == nam)
	{
		p->date.ID = m_ID;
		return;
	}
	if (!(p->next))
	{
		return;
	}
	while (q->date.name != nam && q->next)
	{
		p = q;
		q = q->next;
	}
	if (!q)
	{
		cout << "Not found" << endl;
		return;
	}
	else
	{
		p->next = q->next;
		delete q;
	}
}