#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ROWS 2
#define COLUM 3
int add(int a,int b);

int add(int a,int b){
	int c;
	c = a + b;
	return c;
}
int main(int argc, char *argv[]) {
	int m = 6,n = 2;
	int c;
	c = add(m,n);
	printf("%d\n",c);
	
//	int maze[ROWS][COLUM] = {{1,2,3},
//							 {4,5,6}};	
//	int i,j;
//	for (i = 0; i < ROWS;i++){
//		for (j = 0; j < COLUM;j++){
//			printf("%d\t",maze[i][j]);
//		}
//		printf("\n");
//	}						 
	
//	int number[5] = {0,1,2,3,4};
//	int len = sizeof(number)/sizeof(number[0]);
//	int i;
//	printf("%d\n",sizeof(number));
//	printf("%d\n",sizeof(number[0]));
//	printf("%d\n",sizeof(number)/sizeof(number[0]));
//	for (i = 0; i < len;i++){
//		printf("%d ",number[i]);
//	}
//	printf("\n");

	//int len = 
	
//	int arr[LENGTH] = {0};
//	int i;
//	for(i = 0;i < LENGTH;i++){
//		printf("%d ",arr[i]);
//	}
//	putchar('\n');
//	for (i = 0; i < LENGTH;i++){
//		arr[i] = i;
//	}
//	for (i = 0; i < LENGTH;i++){
//		printf("%d ",arr[i]);
//	}
//	putchar('\n');
//	int input = 0;
//	do{
//		printf("�п�J�_��:");
//		scanf("%d",&input);
//		if (input %2 != 0){
//			printf("%d�O�_��!",input);
//			break;
//		}
//		printf("%d�O����!�A�դ@��\n",input);
//	}while(1);
	
//	int score = 0;
//	int sum = 0;
//	int count = 0;
//	int i;
//	for (i = 0; i < 5;i++){
//		 printf("��J����:");
//		 scanf("%d",&score);
//		 if (score < 0 || score > 100){
//		 	printf("���ƿ��~:%d\n",score);
//		 	continue;
//		 }		 
//		 count++;
//		 sum += score;
//	}
//	printf("�`��:%d,�H��:%d\n",sum,count);
//	printf("����:%f\n",(double)sum/count);
//	
//	int input = 0;
//	int replay = 0;
//	do{
//		printf("��J��ƭ�:");
//		scanf("%d",&input);
//		printf("��J�Ƭ��_��?%c\n",(input%2 ?'Y':'N'));
//		printf("�~��1����0?");
//		scanf("%d",&replay);
//	}while(replay);
	
//	int score = 0;
//	int sum = 0;
//	int count = -1;
//	while(score != -1){
//		count++;
//		sum+=score;
//		printf("��J���Ʃ�-1����");	
//		scanf("%d",&score);
//	}
//	printf("����:%f\n",(double)sum/count);

//	int r,c;
//	for(r = 2; r < 10; r++){
//	 	for (c = 1; c < 10; c++){
//	 		printf("%d*%d=%2d ",r,c,r*c);
//		 }
//		 printf("\n");
//	} 

//	int i,k;
//	
//	for(i = 1;i<=5;i++){
//		for (k = 1;k<=i;k++){
//			printf("*");
//		}
//		printf("\n");
//	}
	
//	int i;
//	
//	for (i = 0; i < 10 ;i++){
//		printf("%d ",i);
//	}
	
	
	
/*	
	int score = 80;
	int level = score / 10;
	switch(level){
		case 10:
		case 9:
			puts("A");
			break;
		case 8:
			puts("B");
		 	break;
		case 7:
			puts("C");
		 	break; 
		case 6:
			puts("D");	 	
			break;
		default:
		    puts("F");
	}*/
	
	/*int score = 0;
	printf("��J����:");
	scanf("%d",&score);
	
	if (score >= 90)
		puts("A");
	else if(score >= 80 )
		puts("B");
	else if(score >= 70 )
		puts("C");
	else if(score >= 60)
		puts("D");
	else
		puts("F");*/
	
	
//	if (score >= 90){
//		puts("A");
//	}else if(score >= 80 && score < 90){
//		puts("B");
//	}else if(score >= 70 && score < 80){
//		puts("C");
//	}else if(score >= 60 && score < 70){
//		puts("D");
//	}else{
//		puts("F");
//	}
	
//	int input = 0;
//	int remain = 0;
//	printf("��J���:");
//	scanf("%d",&input);
//	
//	remain =  input % 2;
//	if (remain == 1){
//		printf("%d���_��\n",input);
//	}else{
//		printf("%d������\n",input);
//	}

	
//	int input = 7;
//	printf("�O�_���_��?%c\n",input % 2 ? 'Y' : 'N');		 

	/*int input1;
	float input2;
	char input3[10];
	printf("��J���:");
	scanf("%d",&input1);
	printf("��J�B�I��:");
	scanf("%f",&input2);
	printf("��J��r:");
	scanf("%10s",&input3);

	printf("�Ʀr:%d\n",input1);
	printf("�B�I��:%f\n",input2);
	printf("��r:%s\n",input3);*/
	
	
	/*
	printf("%lu\n",sizeof(short));
	printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(long));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(double));*/
    
    
	/*printf("%c\n",'A');
	printf("%d\n",'A');
	printf("%c\n",65);
	printf("%d\n",15);
	printf("%o\n",15);
	printf("%x\n",15);
	printf("%e\n",0.001234);
	printf("Test!!");*/ 
	return 0;
}

