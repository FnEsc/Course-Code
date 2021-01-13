#pragma once
#include<iostream>
using namespace std;

void bubble(int data[], int length) { // �����׵�ַ������
	int segment; // ѭ��ɨ��������±����
	int loop;	// ѭ��ɨ�貿��������±����
	int temp;	// ���ڽ�������ʱ���������ʱ����

	// ������ֶΣ���ν�����ð������
	for (segment = 0; segment <= length - 2; segment++) {
		// ����ǰ�Σ���segment��length-1���е���С���ݸ�������
		for (loop = length - 2; loop >= segment; loop--) {
			if (data[loop + 1] < data[loop]) {	// �����ʼ�������С�����ƶ�����һ�������ð��
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
	int data[max_nums];	//׼�����������
	int loop;			//ѭ��ɨ��������±����

	// �û���������
	//int i=0;
	//while (std::cin >> data[i++]);
	for (int i = 0; i < max_nums; i++) {
		std::cin >> data[i];
	}

	// ����������
	bubble(data, max_nums);

	// ��������
	for (int i = 0; i < max_nums; i++) {
		std::cout << data[i] << "\t";
	}
	return;
}
