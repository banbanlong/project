#include<graphics.h>
#include<iostream>
#include <Windows.h>
int main() {
	initgraph(640, 480);
	setbkcolor(RGB(64, 128, 128));//背景颜色
	cleardevice();//填充背景颜色

	setlinecolor(RED);
	setlinestyle(PS_SOLID, 10);//样子与宽度

	circle(320, 240, 200);

	settextcolor(RGB(255, 255, 0));//字体颜色
	
	//设置字体样式: 字体高度为 100 像素, 宽度不指定, 字体名称为"微软雅黑" 
	settextstyle(100, 0, _T("微软雅黑"));
	outtextxy(170, 190, _T("无码高清")); 

	line(180, 380, 460, 100);



	system("pause");

	closegraph();



	return 0;
}