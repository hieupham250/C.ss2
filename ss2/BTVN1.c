#include<stdio.h>

int main(){
	float edge, lenght, height, radius;
	const float PI = 3.14;
	printf("nhap canh hinh vuong: ");
	scanf("%f",&edge);
	float S_HV = edge*edge;
	float CV_HV = edge*4;
	printf("hinh vuong co dien tich la: %f va chu vi la: %f", S_HV,CV_HV);
	printf("\nnhap chieu dai va chieu rong hinh chu nhat: ");
	scanf("%f %f",&lenght,&height);
	float S_HCN = lenght*height;
	float CV_HCN = (lenght+height)*2;
	printf("hinh chu nhat co dien tich la: %f va chu vi: %f", S_HCN,CV_HCN);
	printf("\nnhap ban kinh r: ");
	scanf("%f",&radius);
	float S_htron = PI*radius*radius;
	float CV_htron = (radius*2)*PI;
	printf("hinh tron co dien tich la: %f va chu vi: %f", S_htron, CV_htron);
}
