//�������ļ�  fp=fopen("E:\\Project\\fish.txt","w")   w �������ļ�����֮ǰ���������ļ���ɾȥ֮ǰ���ļ� 

#include "stdio.h"
#include "stdlib.h"

void main()
	{
		FILE *fp;
		if( !( fp=fopen("E:\\Project\\fish.txt","w") ) )  ///���߼�ȡ��   �����ȼ���  if( (fp=fopen("E:\\Project\\fish.txt","w") == NULL) 
			{
				printf("can not open E:\\Project\\fish.txt");
				system("pause");
			}
		else
			{
				printf("open success!\n");
			}
	 } 
 
