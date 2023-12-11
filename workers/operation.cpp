#define _CRT_SECURE_NO_WARINGS 1

#include "operation.hh"
#include <fstream>



void operation::add()
{
    cout << "添加几个人" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
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
        temp_worke.getjob(m_ID, m_name, m_job);
        worker_list.insert(temp_worke);
    }
}
void operation::show()
{
    worker_list.show();
}
void operation::delet(string nam)
{
    worker_list.del(nam);
}
void operation::change()
{
    
    cout << "修改谁的信息:" << endl;
    string tmp_name;
    cin >> tmp_name;

}
void operation::find()
{
    ;
}
void operation::sort()
{
    ;
}
void operation::clear()
{
    ;
}

void operation::load(worker tmp)
{
    worker_list.insert(tmp);
}