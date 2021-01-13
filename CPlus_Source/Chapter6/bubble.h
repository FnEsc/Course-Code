#pragma once
#include<iostream>
using namespace std;

void bubble(int data[], int length) { // 数组首地址，长度
	int segment; // 循环扫描数组的下标变量
	int loop;	// 循环扫描部分数组的下标变量
	int temp;	// 用于交换数据时作缓冲的临时变量

	// 将数组分段，逐段讲数据冒泡排序
	for (segment = 0; segment <= length - 2; segment++) {
		// 将当前段（即segment到length-1）中的最小数据浮到最上
		for (loop = length - 2; loop >= segment; loop--) {
			if (data[loop + 1] < data[loop]) {	// 从最后开始，如果更小，就移动上来一步，逐个冒泡
				temp = data[loop];
				data[loop] = data[loop + 1];
				data[loop + 1] = temp;

			}
		}
	}
	return;
}

void main_bubble() {
	const int max_nums = 8;
	int data[max_nums];	//准备排序的数组
	int loop;			//循环扫描数组的下标变量

	// 用户输入数组
	//int i=0;
	//while (std::cin >> data[i++]);
	for (int i = 0; i < max_nums; i++) {
		std::cin >> data[i];
	}

	// 对数组排序
	bubble(data, max_nums);

	// 排序后输出
	for (int i = 0; i < max_nums; i++) {
		std::cout << data[i] << "\t";
	}
	return;
}
