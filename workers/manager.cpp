#define _CRT_SECURE_NO_WARINGS 1

#include "manager.hh"

void manager::welcom()
{
	cout << "********************************************" << endl;
	cout << "****   欢迎使用职工管理系统    **************" << endl;
	cout << "********   0 . 退出      *******************" << endl;
	cout << "********   1 . 增加      *******************" << endl;
	cout << "********   2 . 显示      *******************" << endl;
	cout << "********   3 . 删除      *******************" << endl;
	cout << "********   4 . 修改      *******************" << endl;
	cout << "********   5 . 查找      *******************" << endl;
	cout << "********   6 . 排序      *******************" << endl;
	cout << "********   7 . 清空      *******************" << endl;
	cout << "********************************************" << endl;
}

void manager::exit() 
{
	cout << "欢迎下次使用" << endl;
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