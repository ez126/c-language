//register - 寄存器
//
//
//电脑上的存储设备：

//1、寄存器（集成到cpu上的）//Flash是一种非易失性存储器，它可以在断电后仍然保持数据。 Flash通常用于存储程序和数据，例如移动设备、数码相机、USB驱动器等。
//2、高速缓存（cache）
//3、内存
//4、硬盘
//上面四种，越往上就会越快（可以想象成金字塔那种，寄存器在金字塔尖）
// 但是空间小、造价高
//下面就是相反 空间打、造价低 


//在早期的时候cpu读取的是内存里的数据
//但是cpu计算力发展迅速，内存条读写速度就跟不上
//所以现在就是直接读取寄存器里的数据了
//当cpu在读取寄存器信息的同时
//寄存器的数据从高速缓存里拿、高速缓存里的数据从内存里拿

#include<stdio.h>
#define _CRT_SECURE_NO WARNINGS

int main()
{

	//寄存器变量
	register int num = 1;//这里register就是建议1存放在寄存器里，访问就会更快
	//但是仅仅是建议
	return 0;
}