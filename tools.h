#ifndef TOOLS_H
#define TOOLS_H

#include <stdbool.h>

#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...)
#endif

//	显示界面
void show_view(void);

//	随机位置产生一个2
void rand_number(void);

//	检查游戏是否结束
bool is_godie(void);

#endif//TOOLS_H
