#include<graphics.h>
#include<iostream>
#include <Windows.h>
int main() {
	initgraph(640, 480);
	setbkcolor(RGB(64, 128, 128));//������ɫ
	cleardevice();//��䱳����ɫ

	setlinecolor(RED);
	setlinestyle(PS_SOLID, 10);//��������

	circle(320, 240, 200);

	settextcolor(RGB(255, 255, 0));//������ɫ
	
	//����������ʽ: ����߶�Ϊ 100 ����, ��Ȳ�ָ��, ��������Ϊ"΢���ź�" 
	settextstyle(100, 0, _T("΢���ź�"));
	outtextxy(170, 190, _T("�������")); 

	line(180, 380, 460, 100);



	system("pause");

	closegraph();



	return 0;
}