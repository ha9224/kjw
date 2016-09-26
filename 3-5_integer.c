/*
	솔루션 / 프로젝트 / 소스파일: Ch03 /Prj05 / integer.c
	정수형 자료형 변수의 선언과 활용
	v 1.0 2016
*/

#include <stdio.h>

int main(void)
{
	short sVar = 32000;	      //-32676에서 32767까지
	int iVar   = -2140000000; //약 21억 정도까지 저장 가능

	unsigned short int usVar = 65000;
	unsigned int uiVar       = 4280000000;

	printf("저장값: %d %d\n", sVar, iVar);
	printf("저장값: %u %u\n", usVar, uiVar);

	long long dist1 = 2720000000000; //지구와 천왕성 간의 거리(km) 27억 2천
	__int64 dist2   = 4500000000000; //태양과 해왕성 간의 거리(km) 45억

	printf("지구와 천왕성 간의 거리(km): %lld\n", dist1); 
	printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);

	return 0;

}