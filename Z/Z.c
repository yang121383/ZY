#include <stdio.h>
int main()
{
	//��������
	int r[64] =
	{
		4,4,4,4,4,4,4,0,
		4,5,5,5,5,5,4,0,
		4,5,6,6,6,5,4,0,
		4,5,6,7,6,5,4,0,
		4,5,6,6,6,5,4,0,
		4,5,5,5,5,5,4,0,
		4,4,4,4,4,4,4,0,
		4,4,4,4,4,4,4,0,
	};
	int n[64] = { 0 };//�½�һ������
	double p[64] = { 0 };
	int i = 0;
	double sum, sun = 0.0;
	int zshu = 0;
	double xshu = 0.0;


	for (i = 0; i < 64; i++)
	{
		n[r[i]]++;//������������Ԫ�أ����Ԫ������һ�������Ӧλ�������ӳ���+1
	}
	for (i = 0; i < 8; i++)
	{
		printf("ԭʼ�Ҷȼ�rk����%d \n", i);
	}
	for (i = 0; i < 8; i++)
	{

		if (n[i] >= 0)
		{
			printf("%d(rk)��������(nk)����%d\n", i, n[i]);
			p[i] = n[i] / 64.0;  // �� n[i] ��ֵ���� p[i]  
		}
	}

	for (i = 0; i < 8; i++)
	{
		printf("ԭʼֱ��ͼ����%d��Pr(rk)�ǣ�%f\n", i, p[i]); // ���p[i]��ֵ 
	}


	for (i = 0; i < 8; i++)
	{
		sun += p[i];
		sum = sun;
		sum = sum * 7.0;
		printf("%d��rk���ļ������ͼ��Ҷ�Sk����%f\n", i, sum);

		if (sum > 0)
		{
			int zshu = (int)sum;

			xshu = sum - zshu;
			//printf("%f\n",i,xshu);
			if (xshu >= 0.5)
			{
				zshu += 1;
				printf("%d (rk)ȡ��SkΪ����%d\n", i, zshu);
			}
			else {
				printf("%d (rk)ȡ��SkΪ����%d\n", i, zshu);
			}
		}
	}
	return 0;
}