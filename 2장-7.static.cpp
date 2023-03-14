// 2��-7 static.cpp
#include <stdio.h>
#include <stdlib.h>
static int total = 0;   // static definition, internal linkage, static storage duration
void fcn(void);

void main() {
    fcn();
	fcn();
	fcn();
	printf("main():: total = %d\n", total);
	system("pause");
}

void fcn() {
    static int counter = 0;//static ����
    counter++;
	printf("fcn::counter = %d\n\n", counter);
	total += counter;
}

// 1. internal linkage : ���� ���� function���� �� ���ȴ�. (���۸��ϱ�)
// 2. static storage duration : ��� ����� �����ִ�. (���۸��ϱ�)
// 3. void fcn() ���� static int counter = 0
//		1) counter = 0���� ���۵Ǵ� ���� ���� �ѹ�
//		2) �ʱ�ȭ�� �ѹ��� �����ϰ� �տ��� ȣ��� counter���� �����־ counter++ �� ������ ����.