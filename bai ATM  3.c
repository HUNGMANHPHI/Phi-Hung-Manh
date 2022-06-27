#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int login(int use, int pass) /* goi ham logic*/ 
{

if(use==456 && pass==789)	
	return (1);
}
int sdu () /* goi ham sd*/
{
double sd;
sd=7000000;
return sd;
}

int ruttien()
{
int ruttien,st;
printf("Moi ban nhap so tien can rut\n");
scanf("%d",&ruttien);
st=sdu();
if(ruttien>st+1)
{
printf("So tien rut lon hon so tien hien co|n\t vui long thuc hien lai\n")	;
}
else
{printf("Ban rut thanh cong so tien%d VND\n",ruttien);


}
return 0;
}
int chuyenkhoan()
{int stk,stchuyen,st;
st=sdu();
printf("Moi ban nhap stk ngan hang can chuyen \n");
scanf("%d",&stk);
printf("So tien can chuyen \n");
scanf("%d",&stchuyen);
if(stchuyen>st)
{
printf("So tien chuyen lon hon so tien hien co \n\t Vui long thuc hien lai\n");
}
else
{
printf("\n Ban chuyen thanh cong so tien %d VND cho stk %d",stchuyen,stk);
}

}
int sodu()
{
int sotien;
sotien=sdu();
printf("So du trong tai khoan cua ban la: %d VND\n",sotien)	;
}
int main(int argc, char *argv[]) {
int use,pass,tien,stk,gt;
char lap;
do{
printf("\nChao mung ban, moi ban nhap the\n")	;
scanf("%d",&use);
printf("Moi ban nhap mat khau:\n");
scanf("%d",&pass);
if(login(use,pass)==1)
{
printf("\n\t Ban da dang nhap thanh cong\n")	;
do{
printf("1. Rut tien\n")	;
printf("2. Chuyen khoan\n");
printf("3. Xem so du\n");
printf("4. Moi ban chon:\n");
fflush(stdin);
scanf("%d",&gt);
switch(gt)
{
case 1:
ruttien();
break;	
case 2:
chuyenkhoan()	;
	break;
case 3:
	sodu();
	break;
case 4:
	break;
}
printf("\n chon y de tieo tuc:\n");
fflush(stdin);
scanf("%c",&lap);	
}
while(lap=='y');
}
else
{
	printf("\n Sai mat khau, moi ban nhap lai\n");
	}
	}
while(login(use,pass)==0);
	return 0;
	}

