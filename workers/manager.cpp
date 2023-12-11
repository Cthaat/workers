#define _CRT_SECURE_NO_WARINGS 1

#include "manager.hh"

void manager::welcom()
{
	cout << "********************************************" << endl;
	cout << "****   ��ӭʹ��ְ������ϵͳ    **************" << endl;
	cout << "********   0 . �˳�      *******************" << endl;
	cout << "********   1 . ����      *******************" << endl;
	cout << "********   2 . ��ʾ      *******************" << endl;
	cout << "********   3 . ɾ��      *******************" << endl;
	cout << "********   4 . �޸�      *******************" << endl;
	cout << "********   5 . ����      *******************" << endl;
	cout << "********   6 . ����      *******************" << endl;
	cout << "********   7 . ���      *******************" << endl;
	cout << "********************************************" << endl;
}

void manager::exit() 
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
}

void manager::save(node* head)
{
	ofstream ofs;
	ofs.open("C:/Code/workers/docu.txt", ios::out);
	node* p = head;
	while (p)
	{
		ofs << p->date.ID << " ";
		ofs << p->date.name << " ";
		ofs << p->date.job << endl;
		p = p->next;
	}
	ofs.close();
}

void manager::mload()
{
	ifstream ifs;
	ifs.open("C:/Code/workers/docu.txt", ios::in);
	int id;
	string name;
	int job;
	while (ifs >> id && ifs >> name && ifs >> job)
	{
		worker tmp;
		tmp.getjob(id, name, job);
		load(tmp);
	}
	ifs.close();
}