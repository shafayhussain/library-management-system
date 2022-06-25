#include<stdio.h>
int main ()
{
	char mid[5];
	char mn[20],pn[20],ar[20];
	
	char bn[30]; 
	char isd[10];
	char rd[10];
	char fe[5];
	char st[10];
	
	printf("-----------------------library management system------------------------------\n");
	printf("___enter student data _____\n");
	
	printf("member id:");gets(mid);
	printf("member NAME:");gets(mn);
	printf("member PHONE NUMBER:");gets(pn);
	printf("BOOK NAME:");gets(bn);
	printf("AUTHOR NAME:");gets(ar);
	printf("ISSUE DATE :");gets(isd);
	printf("RETURN DATE:");gets(rd);
	printf("FEES:");gets(fe);
	printf("STATUS:");gets(st);
	printf("\n-------------------------------------------------------------------------------------------------------------------\n");
	printf("\n|MID\t|MEMBER NAME\t|PHONE N0.\t|BOOK NAME\t|author\t|ISSUE DATE\t|RETURN DATE\t|FEES\t|Status |\n");
	printf("\n-------------------------------------------------------------------------------------------------------------------\n");
	
	
	FILE *A;	
    A=fopen("library.txt","a");
    
    fprintf(A,"|%s\t|%s\t\t|%s\t\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s|\n\n",mid,mn,pn,bn,ar,isd,rd,fe,st);
      
    fclose(A);
 
  	char ch;
 	FILE*R;
	R=fopen("library.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(R);
		printf("%c",ch);
	}
	fclose(R);
return 0;
}
