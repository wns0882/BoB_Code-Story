#include <stdio.h>
int main()
{
char charType;//ĳ������ ���� ����
int integerType;//������ ���� ����
float floatType;//�Ǽ��� ���� ����
double doubleType;//�Ǽ��� ���� ����
printf("[----- [���ؿ�] [2019038010] -----\n]");
printf("Size of char: %ld byte\n",sizeof(charType));//����� ������ �ڷ����� char���̱� ������ 1����Ʈ�� �Ҵ�ȴ�
printf("Size of int: %ld bytes\n",sizeof(integerType));//����� ������ �ڷ����� int(������)�̱� ������ 4����Ʈ�� �Ҵ�ȴ�
printf("Size of float: %ld bytes\n",sizeof(floatType));//����� ������ �ڷ����� float(�Ǽ���)�̱� ������ 4����Ʈ�� �Ҵ�ȴ�
printf("Size of double: %ld bytes\n",sizeof(doubleType));//����� ������ �ڷ����� double(�Ǽ���)�̱� ������ 8����Ʈ�� �Ҵ�ȴ�
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //char���� �Ҵ�� �ڷ��� ũ��� 1����Ʈ�̴�
printf("Size of int: %ld bytes\n",sizeof(int));//int���� �Ҵ�� �ڷ��� ũ��� 4����Ʈ�̴�
printf("Size of float: %ld bytes\n",sizeof(float));//float���� �Ҵ�� �ڷ��� ũ��� 4����Ʈ�̴�
printf("Size of double: %ld bytes\n",sizeof(double));//double���� �Ҵ�� �ڷ��� ũ��� 8����Ʈ�̴�
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));/*������ ������ �ּҰ��� �����ϱ� ���� �ڷ����̱� ������ OS Bit�� ���� �޸�
�ּ� ������ ��� ������ ������ ���� �� �ִ� ����� ���� �´� ũ���� �ڷ����̾�� �Ѵ�*/
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
/*�� ������ ������ ��� ���� ũ���� ����Ʈ ���� ������ ������ ������ ������ �ڷ��� ũ�Ⱑ
�ش� os bit ���� �Ǳ� �����̴�*/
return 0;
}