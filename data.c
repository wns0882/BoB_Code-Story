#include <stdio.h>
int main()
{
    int i; //int�� ���� i����
    int *ptr;//int�� ������ ���� ����
    int **dptr;//int�� ������ ���� ����
    i = 1234;
    printf("[----- [���ؿ�] [2019038010] -----]\n");
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);//���� i�� ���� ����Ѵ�
    printf("address of i == %p\n", &i);//���� i�� �ּҸ� ����Ѵ�
    printf("value of ptr == %p\n", ptr);//������ ������ ���� ����Ѵ�, ptr�� ���� �ʱ�ȭ���� �ʾ����Ƿ� ������ ���� ��µȴ�
    printf("address of ptr == %p\n", &ptr);//������ ���� ptr�� �ּҸ� ����Ѵ�
    ptr = &i; // ������ ������ i�� �ּҰ��� �ִ´�
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);//���� i�� ���� ����Ѵ�
    printf("address of i == %p\n", &i);//���� i�� �ּҸ� ����Ѵ�
    printf("value of ptr == %p\n", ptr);//������ ���� ptr�� ���� ����Ѵ�, ������ ����ptr�� i�� �ּҰ��� �־ i�� �ּҰ� ��µȴ�
    printf("address of ptr == %p\n", &ptr);//������ ���� ptr�� �ּҸ� ����Ѵ�
    printf("value of *ptr == %d\n", *ptr);//������ ���� ptr�� ����Ű�� �ּ��� �������� ����Ѵ� �� i�� �ּ��� �Ҵ�� ���� 1234�� ��µȴ�
    dptr = &ptr; //������ ���� dptr�� ������ ���� ptr�� �ּҸ� �Ҵ�
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);//���� i�� ���� ����Ѵ�
    printf("address of i == %p\n", &i);//���� i�� �ּҸ� ����Ѵ�
    printf("value of ptr == %p\n", ptr);//������ ���� ptr�� ���� ����Ѵ�, ������ ����ptr�� i�� �ּҰ��� �־ i�� �ּҰ� ��µȴ�
    printf("address of ptr == %p\n", &ptr);//������ ���� ptr�� �ּҸ� ����Ѵ�
    printf("value of *ptr == %d\n", *ptr);//������ ���� ptr�� ����Ű�� �ּ��� �������� ����Ѵ� �� i�� �ּ��� �Ҵ�� ���� 1234�� ��µȴ�
    printf("value of dptr == %p\n", dptr);//������ ���� dptr�� ���� ����Ѵ�,dptr�� &ptr�� ���� �Ҵ��߱� ������ ������ ���� ptr�� �ּҰ� ���
    printf("address of dptr == %p\n", &dptr);//������ ���� dprt�� �ּҸ� ����Ѵ�
    printf("value of *dptr == %p\n", *dptr);/*������ ���� dprt�� ����Ű�� �ּ��� ���� ����Ѵ�,dprt�� ptr�� �ּҰ� �Ҵ�Ǽ� ptr�� ����
    i�� �ּ� ��� */
    printf("value of **dptr == %d\n", **dptr);//*dptr�� �������߱� ������ �Ҵ�� i�� �ּҿ��� i�� �Ҵ�� 1234�� ����Ѵ�
    *ptr = 7777; /* changing the value of *ptr */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);//*ptr�� i�� ���� ����Ű�� ������  *ptr�� 7777�� �Ҵ��߱� ������ i�� ���� 7777�� ����
    printf("value of *ptr == %d\n", *ptr);//*ptr�� 7777�� �Ҵ��߱� ������ 7777���
    printf("value of **dptr == %d\n", **dptr);//**dptr�� i�� ���� ����Ű�� ������  7777���
    **dptr = 8888; /* changing the value of **dptr */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);//**dptr�� i�� ���� ����Ű�� ������ i�� ���� 8888�� ����
    printf("value of *ptr == %d\n", *ptr);//*ptr ���� i�� ���� ����Ű�� ������ i�� ���� 8888�� ����Ǿ� *ptr�� 8888���
    printf("value of **dptr == %d\n", **dptr);//**dptr�� 8888�� �Ҵ��߱� ������ 8888���
    return 0;
}