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
		q = p->next;
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

void list::mchange(string nam)
{
	worker temp_worke;
	int m_ID;
	string m_name;
	int m_job;
	cout << "编号" << endl;
	cin >> m_ID;
	cout << "姓名" << endl;
	cin >> m_name;
	cout << "工作" << endl;
	cin >> m_job;
	node* p = head;
	node* q = p->next;
	if (p->date.name == nam)
	{
		p->date.ID = m_ID;
		p->date.name = m_name;
		p->date.job = m_job;
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
		p->date.ID = m_ID;
		p->date.name = m_name;
		p->date.job = m_job;
		return;
	}
}

void list::find(string nam)
{
	node* p = head;
	node* q = p->next;
	if (p->date.name == nam)
	{
		cout << "ID:" << p->date.ID << "name:" << p->date.name << "job:" << p->date.job << endl;
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
		cout << "ID:" << p->date.ID << "name:" << p->date.name << "job:" << p->date.job << endl;
		return;
	}
}

void list::clear()
{
	string s1;
	cout << "确定吗？" << endl;
	cout << "如果确定输入确定：" << endl;
	cin >> s1;
	if (s1 == "确定")
	{
		node* p = head;
		node* q = p->next;
		while (q)
		{
			delete p;
			p = q;
			q = p->next;
		}
		delete q;
		p = NULL;
		q = NULL;
		head = NULL;
	}
}