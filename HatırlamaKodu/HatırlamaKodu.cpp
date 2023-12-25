// HatırlamaKodu.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>
#include <string.h>

void arttirma(int i) {
	i += 3;
	printf("%d",i);
}

void swap(int* i, int* j) {
	// i=5, j=6
	int i = 5, j = 6;
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main()
{
/*	int i = 9;
	printf("%d\n",i);
	
	double k=32;
	printf("%f",k);

	short int si = 5;
	long int li = 98;
	char c = 'M';

	printf(" %d %d %d %f %c",i,si,li,k,c);*/

/*	printf("%d\n", 10 + 3);
	printf("%d\n",10-7);
	printf("%d\n",10*3);	
	printf("%f\n",(double)10/3);
	printf("%d\n",10%3);*/	
	
	//int a;
	//scanf_s("%d",&a);
	//printf("Ekrana Yazilan Deger=%d ",a);

	/*int process;

	printf("islem sirasi sec ");
	scanf_s("%d",&process);
	

	switch (process) {
		case 1: printf("1.durum");
			break;
		case 2: printf("2.durum");
			break;
		}
	*/

	//for (int i = 0; i <= 5; i++) {
	//	printf("i'nin degeri=%d\n",i);
	// }

	//int dizi[] = {3,5,7,10};
	//printf("dizinin degeri=%d",dizi[2]);

	//char isim[] = "Ozgur";
	//printf("ismim:%s",isim);

	//arttirma(4);

	/*int i = 5;
	int *p = &i;

	printf("%u\n",p);
	printf("%d\n",*p);

	(*p)++;
	printf("%d",*p);
	*/
	
	/*char name[] = "ozgur";
	char *ptr=name;
	do{
		printf("%c", *ptr);
		(*ptr)++;
		
		if(size_t(name) == "ozgur") {
			break;
		}
	}while (true);
	*/

	/*char name[] = "ozgur";
	char* ptr = name;
	
	for (int i = 0; i <= 4; i++){
		printf("%c", ptr[i]);
	}
	*/











	return 0;
}