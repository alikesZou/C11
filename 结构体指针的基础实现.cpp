//�ṹ��ָ��Ļ���ʵ�� 
#include<stdio.h>
typedef struct Book{
	char name[20];
	int price;
}Book,*PBook;
Book b = {"С����",50};
Book *pb1 = &b; 
PBook pb2 = &b;

int main(){
	printf("%s\n",(*pb1).name);
	printf("%s\n",(*pb2).name);
	printf("%s\n",b.name);
	printf("%s\n",pb1 -> name);
	printf("%s\n",pb2 -> name);
	//����������ͬ 
}

