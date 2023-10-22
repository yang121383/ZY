#include <stdio.h>
int main()
{
	//给定数组
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
	int n[64] = { 0 };//新建一个数组
	double p[64] = { 0 };
	int i = 0;
	double sum, sun = 0.0;
	int zshu = 0;
	double xshu = 0.0;


	for (i = 0; i < 64; i++)
	{
		n[r[i]]++;//如果出现了这个元素，这个元素在另一个数组对应位置上面的映射就+1
	}
	for (i = 0; i < 8; i++)
	{
		printf("原始灰度级rk——%d \n", i);
	}
	for (i = 0; i < 8; i++)
	{

		if (n[i] >= 0)
		{
			printf("%d(rk)的像素数(nk)——%d\n", i, n[i]);
			p[i] = n[i] / 64.0;  // 将 n[i] 的值赋给 p[i]  
		}
	}

	for (i = 0; i < 8; i++)
	{
		printf("原始直方图——%d的Pr(rk)是：%f\n", i, p[i]); // 输出p[i]的值 
	}


	for (i = 0; i < 8; i++)
	{
		sun += p[i];
		sum = sun;
		sum = sum * 7.0;
		printf("%d（rk）的计算输出图像灰度Sk——%f\n", i, sum);

		if (sum > 0)
		{
			int zshu = (int)sum;

			xshu = sum - zshu;
			//printf("%f\n",i,xshu);
			if (xshu >= 0.5)
			{
				zshu += 1;
				printf("%d (rk)取整Sk为——%d\n", i, zshu);
			}
			else {
				printf("%d (rk)取整Sk为——%d\n", i, zshu);
			}
		}
	}
	return 0;
}