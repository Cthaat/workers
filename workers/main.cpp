#include "operation.hh"
#include "chain.hh"
#include "manager.hh"
#include "worker.hh"

int main()
{
	manager mastetr;
	mastetr.mload();
	mastetr.welcom();
	do
	{
		cout << "输入选择" << endl;
		int n = 0;
		cin >> n;
		switch (n)
		{
		case 0:
			mastetr.save(mastetr.worker_list.head);
			mastetr.exit();
			exit(0);
			break;
		case 1:
			mastetr.add();
			mastetr.show();
			break;
		case 2:
			mastetr.show();
			break;
		case 3:
		{
			cout << "输入姓名" << endl;
			string nam;
			cin >> nam;
			mastetr.delet(nam);
			break;
		}
		case 4:

			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}
	} while (true);
	return 0;
}


////////////////////////////////////////////////////////////////////
//                          _ooOoo_                               //
//                         o8888888o                              //
//                         88" . "88                              //
//                         (| ^_^ |)                              //
//                         O\  =  /O                              //
//                      ____/`---'\____                           //
//                    .'  \\|     |//  `.                         //
//                   /  \\|||  :  |||//  \                        //
//                  /  _||||| -:- |||||-  \                       //
//                  |   | \\\  -  /// |   |                       //
//                  | \_|  ''\---/''  |   |                       //
//                  \  .-\__  `-`  ___/-. /                       //
//                ___`. .'  /--.--\  `. . ___                     //
//              ."" '<  `.___\_<|>_/___.'  >'"".                  //
//            | | :  `- \`.;`\ _ /`;.`/ - ` : | |                 //
//            \  \ `-.   \_ __\ /__ _/   .-` /  /                 //
//      ========`-.____`-.___\_____/___.-`____.-'========         //
//                           `=---='                              //
//      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        //
//         佛祖保佑       永无BUG     永不修改                      //
////////////////////////////////////////////////////////////////////