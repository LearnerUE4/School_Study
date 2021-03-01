#include "root.h"


Root::Root()
{

}
Root::~Root()
{

}

void Root::draw(int star_x, int star_y, int end_x, int end_y)
{
	
	for (star_x; star_x < end_x; star_x++) //�ϱ߽�
	{
		COORD pos = { star_x,star_y };
		HANDLE hOutBorderUp;
		hOutBorderUp = GetStdHandle(STD_OUTPUT_HANDLE); /* ��ȡ��ע������ */
		SetConsoleCursorPosition(hOutBorderUp, pos);
		cout << "��";
	}
	for (star_x ; star_y < end_y; star_y++) //�ұ߽�
	{
		COORD pos = { star_x,star_y };
		HANDLE hOutBorderLeft;
		hOutBorderLeft = GetStdHandle(STD_OUTPUT_HANDLE); /* ��ȡ��ע������ */
		SetConsoleCursorPosition(hOutBorderLeft, pos);
		cout << "|";
	}

}
void Root::HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}