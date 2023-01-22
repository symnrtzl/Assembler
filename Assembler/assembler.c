#include<stdio.h>
// ÞEYMANUR TOZAL (02195076024)  2. SINIF 2. ÖÐRETÝM


/* KOMUTLARIN DOSYADA YAZIM ÞEKLÝ ÞU ÞEKÝLDE OLMALI
		HRK X1,X2 --> bu komutun anlamý X1=X2
		TOP X1,X2 --> bu komutun anlamý X1=X1+X2
		CRP X1,X2 --> bu komutun anlamý X1=X1*X2
		CIK X1,X2 --> bu komutun anlamý X1=X1-X2
		BOL X1,X2 --> bu komutun anlamý: tam kýsmý X1=X1/X2 ve DX=X1 mod X2
		VE X1,X2 
		VEYA X1,X2 
		DEG X1
		SS ADRES
		SSD ADRES
		SN ADRES
		SP ADRES

*/


//VE, VEYA ve DEÐÝL komutlarýnýn binary durumlarýný görüntülemek için Binary(int sayi) fonksiyonu 
int Binary(int sayi){
	int digit,toplam=0,i=1,yedek;
	yedek=sayi;
	while(sayi!=0){
		digit=sayi%2;
		sayi=sayi/2;
		toplam=toplam+digit*i;
		i=i*10;
	}
	printf("%d",toplam);
	
}

int main(void){
	
	FILE *dosya;
	char dosyaadi[10000];
	char m[10000];
	char a[10000];
	char b[10000];
	char belge[10000];
	int i=0, z=0, j=0;
	int AX,BX,CX,DX;
	
	printf("Dosya ismini giriniz---->");
	scanf("%s",&dosyaadi);
	dosya=fopen(dosyaadi,"r");
	
	if(dosya== NULL){
		printf("Dosya Bulunamadý...");
	}
	
	printf("\nDOSYADA YAZILAN KOD\n\n");
	while(fgets(belge,10000,dosya)){
		strcat(m,belge);
	}
	printf("%s\n\n",m);
	
	
	for(z; m[z]!='\0';z++){
		b[j]=m[z];
		j++; 
	}
	//printf("%s",b);	
	
	char ax[]="AX"; //char olarak tanýmlanan deðiþken çýktýnýn anlaþýlýr olmasý için belirtildi.
	char bx[]="BX";
	char cx[]="CX";
	char dx[]="DX";
	int sayi;
	// int iax,ibx,icx ve idx iþleme tabi tutulan kayýtçýlardýr(registerlerdir).Burada deðerleri belirtildi.
	int iax=70; 
	int ibx=80;
	int icx=90;
	int idx=100;
	int islem=0;
	int kalan=0;
	int k;
	
	//Kayýtçýlarýn(registerlerin) deðeri ekrana yazýldý.
	printf("AX,BX,CX,DX KAYITCILARININ DEGERLERI \n");
	printf("AX=%d \nBX=%d \nCX=%d \nDX=%d \n\n\n\n",iax,ibx,icx,idx);
	
	
	
	//HRK KOMUTU
	if(b[0]=='H'){
		if(b[4]=='A'){
			if(b[7]=='A'){
				printf("AX = %s",ax);
			}
			else if(b[7]=='B'){
				printf("AX = %s",bx);
			}
			else if(b[7]=='C'){
				printf("AX = %s",cx);
			}
			else if(b[7]=='D'){
				printf("AX = %s",dx);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("AX = %d",sayi);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("AX = %d",sayi);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("AX = %d",sayi);
				}
			}
			
		}
		else if(b[4]=='B'){
			if(b[7]=='A'){
				printf("BX = %s",ax);
			}
			else if(b[7]=='B'){
				printf("BX = %s",bx);
			}
			else if(b[7]=='C'){
				printf("BX = %s",cx);
			}
			else if(b[7]=='D'){
				printf("BX = %s",dx);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("BX = %d",sayi);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("BX = %d",sayi);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("BX = %d",sayi);
				}
				
			}
		}
		else if(b[4]=='C'){
			if(b[7]=='A'){
				printf("CX = %s",ax);
			}
			else if(b[7]=='B'){
				printf("CX = %s",bx);
			}
			else if(b[7]=='C'){
				printf("CX = %s",cx);
			}
			else if(b[7]=='D'){
				printf("CX = %s",dx);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("CX = %d",sayi);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("CX = %d",sayi);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("CX = %d",sayi);
				}	
				
			}
		}
		else if(b[4]=='D'){
			if(b[7]=='A'){
				printf("DX = %s",ax);
			}
			else if(b[7]=='B'){
				printf("DX = %s",bx);
			}
			else if(b[7]=='C'){
				printf("DX = %s",cx);
			}
			else if(b[7]=='D'){
				printf("DX = %s",dx);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("DX = %d",sayi);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("DX = %d",sayi);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("DX = %d",sayi);
				}
			}
		}
		else if(b[4]=='0' || b[4]=='1' || b[4]=='2' || b[4]=='3' || b[4]=='4' || b[4]=='5' || b[4]=='6' || b[4]=='7' || b[4]=='8' || b[4]=='9'){
			if(b[5]==','){
				sayi=((int)b[4]-48) ;
				if(b[6]=='A'){
					printf("Adres(%d) = %s",sayi,ax);
				}
				else if(b[6]=='B'){
					printf("Adres(%d) = %s",sayi,bx);
				}
				else if(b[6]=='C'){
					printf("Adres(%d) = %s",sayi,cx);
				}
				else{
					printf("Adres(%d) = %s",sayi,dx);
				}
			}
			else if(b[6]==','){
				sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
				if(b[7]=='A'){
					printf("Adres(%d) = %s",sayi,ax);
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %s",sayi,bx);
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %s",sayi,cx);
				}
				else{
					printf("Adres(%d) = %s",sayi,dx);
				}
				
			}
			else if(b[7]=','){
				sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
				if(b[8]=='A'){
					printf("Adres(%d) = %s",sayi,ax);
				}
				else if(b[8]=='B'){
					printf("Adres(%d) = %s",sayi,bx);
				}
				else if(b[8]=='C'){
					printf("Adres(%d) = %s",sayi,cx);
				}
				else{
					printf("Adres(%d) = %s",sayi,dx);
				}
				
			}
		}
	}
	//TOPLAMA KOMUTU
	else if(b[0]=='T'){
		if(b[4]=='A'){
			if(b[7]=='A'){
				printf("AX = %s + %s",ax,ax);
				islem=iax+iax;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("AX = %s + %s",ax,bx);
				islem=iax+ibx;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("AX = %s + %s",ax,cx);
				islem=iax+icx;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("AX = %s + %s",ax,dx);
				islem=iax+idx;
				printf("\nAX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("AX = %s + %d",ax,sayi);
					islem=iax+sayi;
					printf("\nAX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("AX = %s + %d",ax,sayi);
					islem=iax+sayi;
					printf("\nAX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("AX = %s + %d",ax,sayi);
					islem=iax+sayi;
					printf("\nAX = %d ",islem);
				}
			}
			
		}
		else if(b[4]=='B'){
			if(b[7]=='A'){
				printf("BX = %s + %s",bx,ax);
				islem=ibx+iax;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("BX = %s + %s",bx,bx);
				islem=ibx+ibx;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("BX = %s + %s",bx,cx);
				islem=ibx+icx;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("BX = %s + %s",bx,dx);
				islem=ibx+idx;
				printf("\nBX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("BX = %s + %d",bx,sayi);
					islem=ibx+sayi;
					printf("\nBX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("BX = %s + %d",bx,sayi);
					islem=ibx+sayi;
					printf("\nBX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("BX = %s + %d",bx,sayi);
					islem=ibx+sayi;
					printf("\nBX = %d ",islem);
				}
				
			}
		}
		else if(b[4]=='C'){
			if(b[7]=='A'){
				printf("CX = %s + %s",cx,ax);
				islem=icx+iax;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("CX = %s + %s",cx,bx);
				islem=icx+ibx;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("CX = %s + %s",cx,cx);
				islem=icx+icx;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("CX = %s + %s",cx,dx);
				islem=icx+idx;
				printf("\nCX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("CX = %s + %d",cx,sayi);
					islem=icx+sayi;
					printf("\nCX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("CX = %s + %d",cx,sayi);
					islem=icx+sayi;
					printf("\nCX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("CX = %s + %d",cx,sayi);
					islem=icx+sayi;
					printf("\nCX = %d ",islem);
				}	
				
			}
		}
		else if(b[4]=='D'){
			if(b[7]=='A'){
				printf("DX = %s + %s",dx,ax);
				islem=idx+iax;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("DX = %s + %s",dx,bx);
				islem=idx+ibx;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("DX = %s + %s",dx,cx);
				islem=idx+icx;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("DX = %s + %s",dx,dx);
				islem=idx+idx;
				printf("\nDX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("DX = %s + %d",dx,sayi);
					islem=idx+sayi;
					printf("\nDX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("DX = %s + %d",dx,sayi);
					islem=idx+sayi;
					printf("\nDX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("DX = %s + %d",dx,sayi);
					islem=idx+sayi;
					printf("\nDX = %d ",islem);
				}
			}
		}
		else if(b[4]=='0' || b[4]=='1' || b[4]=='2' || b[4]=='3' || b[4]=='4' || b[4]=='5' || b[4]=='6' || b[4]=='7' || b[4]=='8' || b[4]=='9'){
			if(b[5]==','){
				sayi=((int)b[4]-48) ;
				if(b[6]=='A'){
					printf("Adres(%d) = %d + %s",sayi,sayi,ax);
					islem=sayi+iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[6]=='B'){
					printf("Adres(%d) = %d + %s",sayi,sayi,bx);
					islem=sayi+ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[6]=='C'){
					printf("Adres(%d) = %d + %s",sayi,sayi,cx);
					islem=sayi+icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d + %s",sayi,sayi,dx);
					islem=sayi+idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
			}
			else if(b[6]==','){
				sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
				if(b[7]=='A'){
					printf("Adres(%d) = %d + %s",sayi,sayi,ax);
					islem=sayi+iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %d + %s",sayi,sayi,bx);
					islem=sayi+ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %d + %s",sayi,sayi,cx);
					islem=sayi+icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d + %s",sayi,sayi,dx);
					islem=sayi+idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				
			}
			else if(b[7]=','){
				sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
				if(b[8]=='A'){
					printf("Adres(%d) = %d + %s",sayi,sayi,ax);
					islem=sayi+iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[8]=='B'){
					printf("Adres(%d) = %d + %s",sayi,sayi,bx);
					islem=sayi+ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[8]=='C'){
					printf("Adres(%d) = %d + %s",sayi,sayi,cx);
					islem=sayi+icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d + %s",sayi,sayi,dx);
					islem=sayi+idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				
			}
		}
	}
	//ÇARPMA KOMUTU
	else if(b[0]=='C' && b[1]=='R'){
		if(b[4]=='A'){
			if(b[7]=='A'){
				printf("AX = %s * %s",ax,ax);
				islem=iax*iax;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("AX = %s * %s",ax,bx);
				islem=iax*ibx;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("AX = %s * %s",ax,cx);
				islem=iax*icx;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("AX = %s * %s",ax,dx);
				islem=iax*idx;
				printf("\nAX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("AX = %s * %d",ax,sayi);
					islem=iax*sayi;
					printf("\nAX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("AX = %s * %d",ax,sayi);
					islem=iax*sayi;
					printf("\nAX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("AX = %s * %d",ax,sayi);
					islem=iax*sayi;
					printf("\nAX = %d ",islem);
				}
			}
			
		}
		else if(b[4]=='B'){
			if(b[7]=='A'){
				printf("BX = %s * %s",bx,ax);
				islem=ibx*iax;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("BX = %s * %s",bx,bx);
				islem=ibx*ibx;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("BX = %s * %s",bx,cx);
				islem=ibx*icx;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("BX = %s * %s",bx,dx);
				islem=ibx*idx;
				printf("\nBX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("BX = %s * %d",bx,sayi);
					islem=ibx*sayi;
					printf("\nBX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("BX = %s * %d",bx,sayi);
					islem=ibx*sayi;
					printf("\nBX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("BX = %s * %d",bx,sayi);
					islem=ibx*sayi;
					printf("\nBX = %d ",islem);
				}
				
			}
		}
		else if(b[4]=='C'){
			if(b[7]=='A'){
				printf("CX = %s * %s",cx,ax);
				islem=icx*iax;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("CX = %s * %s",cx,bx);
				islem=icx*ibx;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("CX = %s * %s",cx,cx);
				islem=icx*icx;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("CX = %s * %s",cx,dx);
				islem=icx*idx;
				printf("\nCX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("CX = %s * %d",cx,sayi);
					islem=icx*sayi;
					printf("\nCX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("CX = %s * %d",cx,sayi);
					islem=icx*sayi;
					printf("\nCX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("CX = %s * %d",cx,sayi);
					islem=icx*sayi;
					printf("\nCX = %d ",islem);
				}	
				
			}
		}
		else if(b[4]=='D'){
			if(b[7]=='A'){
				printf("DX = %s * %s",dx,ax);
				islem=idx*iax;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("DX = %s * %s",dx,bx);
				islem=idx*ibx;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("DX = %s * %s",dx,cx);
				islem=idx*icx;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("DX = %s * %s",dx,dx);
				islem=idx*idx;
				printf("\nDX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("DX = %s * %d",dx,sayi);
					islem=idx*sayi;
					printf("\nDX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("DX = %s * %d",dx,sayi);
					islem=idx*sayi;
					printf("\nDX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("DX = %s * %d",dx,sayi);
					islem=idx*sayi;
					printf("\nDX = %d ",islem);
				}
			}
		}
		else if(b[4]=='0' || b[4]=='1' || b[4]=='2' || b[4]=='3' || b[4]=='4' || b[4]=='5' || b[4]=='6' || b[4]=='7' || b[4]=='8' || b[4]=='9'){
			if(b[5]==','){
				sayi=((int)b[4]-48) ;
				if(b[6]=='A'){
					printf("Adres(%d) = %d * %s",sayi,sayi,ax);
					islem=sayi*iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[6]=='B'){
					printf("Adres(%d) = %d * %s",sayi,sayi,bx);
					islem=sayi*ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[6]=='C'){
					printf("Adres(%d) = %d * %s",sayi,sayi,cx);
					islem=sayi*icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d * %s",sayi,sayi,dx);
					islem=sayi*idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
			}
			else if(b[6]==','){
				sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
				if(b[7]=='A'){
					printf("Adres(%d) = %d * %s",sayi,sayi,ax);
					islem=sayi*iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %d * %s",sayi,sayi,bx);
					islem=sayi*ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %d * %s",sayi,sayi,cx);
					islem=sayi*icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d * %s",sayi,sayi,dx);
					islem=sayi*idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				
			}
			else if(b[7]=','){
				sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
				if(b[8]=='A'){
					printf("Adres(%d) = %d * %s",sayi,sayi,ax);
					islem=sayi*iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[8]=='B'){
					printf("Adres(%d) = %d * %s",sayi,sayi,bx);
					islem=sayi*ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[8]=='C'){
					printf("Adres(%d) = %d * %s",sayi,sayi,cx);
					islem=sayi*icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d * %s",sayi,sayi,dx);
					islem=sayi*idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				
			}
		}
	}
	//ÇIKARMA KOMUTU
	else if(b[0]=='C' && b[1]=='I'){
		if(b[4]=='A'){
			if(b[7]=='A'){
				printf("AX = %s - %s",ax,ax);
				islem=iax-iax;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("AX = %s - %s",ax,bx);
				islem=iax-ibx;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("AX = %s - %s",ax,cx);
				islem=iax-icx;
				printf("\nAX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("AX = %s - %s",ax,dx);
				islem=iax-idx;
				printf("\nAX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("AX = %s - %d",ax,sayi);
					islem=iax-sayi;
					printf("\nAX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("AX = %s - %d",ax,sayi);
					islem=iax-sayi;
					printf("\nAX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("AX = %s - %d",ax,sayi);
					islem=iax-sayi;
					printf("\nAX = %d ",islem);
				}
			}
			
		}
		else if(b[4]=='B'){
			if(b[7]=='A'){
				printf("BX = %s - %s",bx,ax);
				islem=ibx-iax;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("BX = %s - %s",bx,bx);
				islem=ibx-ibx;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("BX = %s - %s",bx,cx);
				islem=ibx-icx;
				printf("\nBX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("BX = %s - %s",bx,dx);
				islem=ibx-idx;
				printf("\nBX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("BX = %s - %d",bx,sayi);
					islem=ibx-sayi;
					printf("\nBX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("BX = %s - %d",bx,sayi);
					islem=ibx-sayi;
					printf("\nBX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("BX = %s - %d",bx,sayi);
					islem=ibx-sayi;
					printf("\nBX = %d ",islem);
				}
				
			}
		}
		else if(b[4]=='C'){
			if(b[7]=='A'){
				printf("CX = %s - %s",cx,ax);
				islem=icx-iax;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("CX = %s - %s",cx,bx);
				islem=icx-ibx;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("CX = %s - %s",cx,cx);
				islem=icx-icx;
				printf("\nCX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("CX = %s - %s",cx,dx);
				islem=icx-idx;
				printf("\nCX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("CX = %s - %d",cx,sayi);
					islem=icx-sayi;
					printf("\nCX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("CX = %s - %d",cx,sayi);
					islem=icx-sayi;
					printf("\nCX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("CX = %s - %d",cx,sayi);
					islem=icx-sayi;
					printf("\nCX = %d ",islem);
				}	
				
			}
		}
		else if(b[4]=='D'){
			if(b[7]=='A'){
				printf("DX = %s - %s",dx,ax);
				islem=idx-iax;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='B'){
				printf("DX = %s - %s",dx,bx);
				islem=idx-ibx;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='C'){
				printf("DX = %s - %s",dx,cx);
				islem=idx-icx;
				printf("\nDX = %d ",islem);
			}
			else if(b[7]=='D'){
				printf("DX = %s - %s",dx,dx);
				islem=idx-idx;
				printf("\nDX = %d ",islem);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("DX = %s - %d",dx,sayi);
					islem=idx-sayi;
					printf("\nDX = %d ",islem);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("DX = %s - %d",dx,sayi);
					islem=idx-sayi;
					printf("\nDX = %d ",islem);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("DX = %s - %d",dx,sayi);
					islem=idx-sayi;
					printf("\nDX = %d ",islem);
				}
			}
		}
		else if(b[4]=='0' || b[4]=='1' || b[4]=='2' || b[4]=='3' || b[4]=='4' || b[4]=='5' || b[4]=='6' || b[4]=='7' || b[4]=='8' || b[4]=='9'){
			if(b[5]==','){
				sayi=((int)b[4]-48) ;
				if(b[6]=='A'){
					printf("Adres(%d) = %d - %s",sayi,sayi,ax);
					islem=sayi-iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[6]=='B'){
					printf("Adres(%d) = %d - %s",sayi,sayi,bx);
					islem=sayi-ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[6]=='C'){
					printf("Adres(%d) = %d - %s",sayi,sayi,cx);
					islem=sayi-icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d - %s",sayi,sayi,dx);
					islem=sayi-idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
			}
			else if(b[6]==','){
				sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
				if(b[7]=='A'){
					printf("Adres(%d) = %d - %s",sayi,sayi,ax);
					islem=sayi-iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %d - %s",sayi,sayi,bx);
					islem=sayi-ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %d - %s",sayi,sayi,cx);
					islem=sayi-icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d - %s",sayi,sayi,dx);
					islem=sayi-idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				
			}
			else if(b[7]=','){
				sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
				if(b[8]=='A'){
					printf("Adres(%d) = %d - %s",sayi,sayi,ax);
					islem=sayi-iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[8]=='B'){
					printf("Adres(%d) = %d - %s",sayi,sayi,bx);
					islem=sayi-ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else if(b[8]=='C'){
					printf("Adres(%d) = %d - %s",sayi,sayi,cx);
					islem=sayi-icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				else{
					printf("Adres(%d) = %d - %s",sayi,sayi,dx);
					islem=sayi-idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
				}
				
			}
		}
	}
	//BÖLME KOMUTU
	else if(b[0]=='B' ){
		if(b[4]=='A'){
			if(b[7]=='A'){
				printf("AX = %s / %s",ax,ax);
				islem=iax/iax;
				kalan=iax % iax;
				printf("\nAX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='B'){
				printf("AX = %s / %s",ax,bx);
				islem=iax/ibx;
				kalan=iax % ibx;
				printf("\nAX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='C'){
				printf("AX = %s / %s",ax,cx);
				islem=iax/icx;
				kalan=iax % icx;
				printf("\nAX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='D'){
				printf("AX = %s / %s",ax,dx);
				islem=iax/idx;
				kalan=iax % idx;
				printf("\nAX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("AX = %s / %d",ax,sayi);
					islem=iax/sayi;
					kalan=iax % sayi;
					printf("\nAX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("AX = %s / %d",ax,sayi);
					islem=iax/sayi;
					kalan=iax % sayi;
					printf("\nAX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("AX = %s / %d",ax,sayi);
					islem=iax/sayi;
					kalan=iax % sayi;
					printf("\nAX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
			}
			
		}
		else if(b[4]=='B'){
			if(b[7]=='A'){
				printf("BX = %s / %s",bx,ax);
				islem=ibx/iax;
				kalan=ibx % iax;
				printf("\nBX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='B'){
				printf("BX = %s / %s",bx,bx);
				islem=ibx/ibx;
				kalan=ibx % ibx;
				printf("\nBX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='C'){
				printf("BX = %s / %s",bx,cx);
				islem=ibx/icx;
				kalan=ibx % icx;
				printf("\nBX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='D'){
				printf("BX = %s / %s",bx,dx);
				islem=ibx/idx;
				kalan=ibx % idx;
				printf("\nBX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("BX = %s / %d",bx,sayi);
					islem=ibx/sayi;
					kalan=ibx % sayi;
					printf("\nBX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("BX = %s / %d",bx,sayi);
					islem=ibx/sayi;
					kalan=ibx % sayi;
					printf("\nBX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("BX = %s / %d",bx,sayi);
					islem=ibx/sayi;
					kalan=ibx % sayi;
					printf("\nBX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				
			}
		}
		else if(b[4]=='C'){
			if(b[7]=='A'){
				printf("CX = %s / %s",cx,ax);
				islem=icx/iax;
				kalan=icx % iax;
				printf("\nCX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='B'){
				printf("CX = %s / %s",cx,bx);
				islem=icx/ibx;
				kalan=icx % ibx;
				printf("\nCX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='C'){
				printf("CX = %s / %s",cx,cx);
				islem=icx/icx;
				kalan=icx % icx;
				printf("\nCX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='D'){
				printf("CX = %s / %s",cx,dx);
				islem=icx/idx;
				kalan=icx % idx;
				printf("\nCX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("CX = %s / %d",cx,sayi);
					islem=icx/sayi;
					kalan=icx % sayi;
					printf("\nCX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("CX = %s / %d",cx,sayi);
					islem=icx/sayi;
					kalan=icx % sayi;
					printf("\nCX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("CX = %s / %d",cx,sayi);
					islem=icx/sayi;
					kalan=icx % sayi;
					printf("\nCX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}	
				
			}
		}
		else if(b[4]=='D'){
			if(b[7]=='A'){
				printf("DX = %s / %s",dx,ax);
				islem=idx/iax;
				kalan=idx % iax;
				printf("\nDX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='B'){
				printf("DX = %s / %s",dx,bx);
				islem=idx/ibx;
				kalan=idx % ibx;
				printf("\nDX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='C'){
				printf("DX = %s / %s",dx,cx);
				islem=idx/icx;
				kalan=idx % icx;
				printf("\nDX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else if(b[7]=='D'){
				printf("DX = %s / %s",dx,dx);
				islem=idx/idx;
				kalan=idx % idx;
				printf("\nDX = %d ",islem);
				printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
			}
			else{
				if(b[8]==NULL){
					sayi=((int)b[7]-48) ;
					printf("DX = %s / %d",dx,sayi);
					islem=idx/sayi;
					kalan=idx % sayi;
					printf("\nDX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[9]==NULL){
					sayi=((int)b[7]-48)*10 + ((int)b[8]-48);
					printf("DX = %s / %d",dx,sayi);
					islem=idx/sayi;
					kalan=idx % sayi;
					printf("\nDX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					sayi=(b[7]-48)*100 + (b[8]-48)*10 + (b[9]-48);
					printf("DX = %s / %d",dx,sayi);
					islem=idx/sayi;
					kalan=idx % sayi;
					printf("\nDX = %d ",islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
			}
		}
		else if(b[4]=='0' || b[4]=='1' || b[4]=='2' || b[4]=='3' || b[4]=='4' || b[4]=='5' || b[4]=='6' || b[4]=='7' || b[4]=='8' || b[4]=='9'){
			if(b[5]==','){
				sayi=((int)b[4]-48) ;
				if(b[6]=='A'){
					printf("Adres(%d) = %d / %s",sayi,sayi,ax);
					islem=sayi/iax;
					kalan=sayi % iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[6]=='B'){
					printf("Adres(%d) = %d / %s",sayi,sayi,bx);
					islem=sayi/ibx;
					kalan=sayi % ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[6]=='C'){
					printf("Adres(%d) = %d / %s",sayi,sayi,cx);
					islem=sayi/icx;
					kalan=sayi % icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					printf("Adres(%d) = %d / %s",sayi,sayi,dx);
					islem=sayi/idx;
					kalan=sayi % idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
			}
			else if(b[6]==','){
				sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
				if(b[7]=='A'){
					printf("Adres(%d) = %d / %s",sayi,sayi,ax);
					islem=sayi/iax;
					kalan=sayi % iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %d / %s",sayi,sayi,bx);
					islem=sayi/ibx;
					kalan=sayi % ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %d / %s",sayi,sayi,cx);
					islem=sayi/icx;
					kalan=sayi % icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					printf("Adres(%d) = %d / %s",sayi,sayi,dx);
					islem=sayi/idx;
					kalan=sayi % idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				
			}
			else if(b[7]=','){
				sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
				if(b[8]=='A'){
					printf("Adres(%d) = %d / %s",sayi,sayi,ax);
					islem=sayi/iax;
					kalan=sayi % iax;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[8]=='B'){
					printf("Adres(%d) = %d / %s",sayi,sayi,bx);
					islem=sayi/ibx;
					kalan=sayi % ibx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else if(b[8]=='C'){
					printf("Adres(%d) = %d / %s",sayi,sayi,cx);
					islem=sayi/icx;
					kalan=sayi % icx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				else{
					printf("Adres(%d) = %d / %s",sayi,sayi,dx);
					islem=sayi/idx;
					kalan=sayi % idx;
					printf("\nAdres(%d) = %d ",sayi,islem);
					printf("\nBolme Islemi Sonucu Kalan Deger = %d ",kalan);
				}
				
			}
		}
	}
	//VE(AND) MANTIKSAL OPERATÖRÜ
	else if(b[0]=='V' && b[2]==' '){
		if(b[3]=='A'){
			if(b[6]=='A'){
				printf("AX = %s and %s",ax,ax);
				islem=iax&iax;
				printf("\nAX = %d \n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") and %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
				
			}
			else if(b[6]=='B'){
				printf("AX = %s and %s",ax,bx);
				islem=iax&ibx;
				printf("\nAX = %d\n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") and %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='C'){
				printf("AX = %s and %s",ax,cx);
				islem=iax&icx;
				printf("\nAX = %d\n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") and %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='D'){
				printf("AX = %s and %s",ax,dx);
				islem=iax&idx;
				printf("\nAX = %d\n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") and %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[7]==NULL){
					sayi=((int)b[6]-48) ;
					printf("AX = %s and %d",ax,sayi);
					islem=iax&sayi;
					printf("\nAX = %d\n",islem);
					printf("%d(",iax);Binary(iax);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[8]==NULL){
					sayi=((int)b[6]-48)*10 + ((int)b[7]-48);
					printf("AX = %s and %d",ax,sayi);
					islem=iax&sayi;
					printf("\nAX = %d\n",islem);
					printf("%d(",iax);Binary(iax);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[6]-48)*100 + (b[7]-48)*10 + (b[8]-48);
					printf("AX = %s and %d",ax,sayi);
					islem=iax&sayi;
					printf("\nAX = %d\n",islem);
					printf("%d(",iax);Binary(iax);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
			}
			
		}
		else if(b[3]=='B'){
			if(b[6]=='A'){
				printf("BX = %s and %s",bx,ax);
				islem=ibx&iax;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") and %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='B'){
				printf("BX = %s and %s",bx,bx);
				islem=ibx&ibx;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") and %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='C'){
				printf("BX = %s and %s",bx,cx);
				islem=ibx&icx;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") and %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='D'){
				printf("BX = %s and %s",bx,dx);
				islem=ibx&idx;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") and %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[7]==NULL){
					sayi=((int)b[6]-48) ;
					printf("BX = %s and %d",bx,sayi);
					islem=ibx&sayi;
					printf("\nBX = %d\n",islem);
					printf("%d(",ibx);Binary(ibx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[8]==NULL){
					sayi=((int)b[6]-48)*10 + ((int)b[7]-48);
					printf("BX = %s and %d",bx,sayi);
					islem=ibx&sayi;
					printf("\nBX = %d\n",islem);
					printf("%d(",ibx);Binary(ibx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[6]-48)*100 + (b[7]-48)*10 + (b[8]-48);
					printf("BX = %s and %d",bx,sayi);
					islem=ibx&sayi;
					printf("\nBX = %d\n",islem);
					printf("%d(",ibx);Binary(ibx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				
			}
		}
		else if(b[3]=='C'){
			if(b[6]=='A'){
				printf("CX = %s and %s",cx,ax);
				islem=icx&iax;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") and %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='B'){
				printf("CX = %s and %s",cx,bx);
				islem=icx&ibx;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") and %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='C'){
				printf("CX = %s and %s",cx,cx);
				islem=icx&icx;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") and %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='D'){
				printf("CX = %s and %s",cx,dx);
				islem=icx&idx;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") and %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[7]==NULL){
					sayi=((int)b[6]-48) ;
					printf("CX = %s and %d",cx,sayi);
					islem=icx&sayi;
					printf("\nCX = %d\n",islem);
					printf("%d(",icx);Binary(icx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[8]==NULL){
					sayi=((int)b[6]-48)*10 + ((int)b[7]-48);
					printf("CX = %s and %d",cx,sayi);
					islem=icx&sayi;
					printf("\nCX = %d\n",islem);
					printf("%d(",icx);Binary(icx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[6]-48)*100 + (b[7]-48)*10 + (b[8]-48);
					printf("CX = %s and %d",cx,sayi);
					islem=icx&sayi;
					printf("\nCX = %d\n",islem);
					printf("%d(",icx);Binary(icx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}	
				
			}
		}
		else if(b[3]=='D'){
			if(b[6]=='A'){
				printf("DX = %s and %s",dx,ax);
				islem=idx&iax;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") and %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='B'){
				printf("DX = %s and %s",dx,bx);
				islem=idx&ibx;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") and %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='C'){
				printf("DX = %s and %s",dx,cx);
				islem=idx&icx;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") and %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[6]=='D'){
				printf("DX = %s and %s",dx,dx);
				islem=idx&idx;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") and %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[7]==NULL){
					sayi=((int)b[6]-48) ;
					printf("DX = %s and %d",dx,sayi);
					islem=idx&sayi;
					printf("\nDX = %d\n",islem);
					printf("%d(",idx);Binary(idx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[8]==NULL){
					sayi=((int)b[6]-48)*10 + ((int)b[7]-48);
					printf("DX = %s and %d",dx,sayi);
					islem=idx&sayi;
					printf("\nDX = %d\n",islem);
					printf("%d(",idx);Binary(idx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[6]-48)*100 + (b[7]-48)*10 + (b[8]-48);
					printf("DX = %s and %d",dx,sayi);
					islem=idx&sayi;
					printf("\nDX = %d\n",islem);
					printf("%d(",idx);Binary(idx);
					printf(") and %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
			}
		}
		else if(b[3]=='0' || b[3]=='1' || b[3]=='2' || b[3]=='3' || b[3]=='4' || b[3]=='5' || b[3]=='6' || b[3]=='7' || b[3]=='8' || b[3]=='9'){
			if(b[4]==','){
				sayi=((int)b[3]-48) ;
				if(b[5]=='A'){
					printf("Adres(%d) = %d and %s",sayi,sayi,ax);
					islem=sayi&iax;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",iax);Binary(iax);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[5]=='B'){
					printf("Adres(%d) = %d and %s",sayi,sayi,bx);
					islem=sayi&ibx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",ibx);Binary(ibx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[5]=='C'){
					printf("Adres(%d) = %d and %s",sayi,sayi,cx);
					islem=sayi&icx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",icx);Binary(icx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					printf("Adres(%d) = %d and %s",sayi,sayi,dx);
					islem=sayi&idx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",idx);Binary(idx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
			}
			else if(b[5]==','){
				sayi=((int)b[3]-48)*10 + ((int)b[4]-48);
				if(b[6]=='A'){
					printf("Adres(%d) = %d and %s",sayi,sayi,ax);
					islem=sayi&iax;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",iax);Binary(iax);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[6]=='B'){
					printf("Adres(%d) = %d and %s",sayi,sayi,bx);
					islem=sayi&ibx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",ibx);Binary(ibx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[6]=='C'){
					printf("Adres(%d) = %d and %s",sayi,sayi,cx);
					islem=sayi&icx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",icx);Binary(icx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					printf("Adres(%d) = %d and %s",sayi,sayi,dx);
					islem=sayi&idx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",idx);Binary(idx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				
			}
			else if(b[6]=','){
				sayi=(b[3]-48)*100 + (b[4]-48)*10 + (b[5]-48);
				if(b[7]=='A'){
					printf("Adres(%d) = %d and %s",sayi,sayi,ax);
					islem=sayi&iax;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",iax);Binary(iax);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %d and %s",sayi,sayi,bx);
					islem=sayi&ibx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",ibx);Binary(ibx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %d and %s",sayi,sayi,cx);
					islem=sayi&icx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",icx);Binary(icx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					printf("Adres(%d) = %d and %s",sayi,sayi,dx);
					islem=sayi&idx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") and %d(",idx);Binary(idx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				
			}
		}
	}
	//VEYA(OR) MANTIKSAL OPERATÖRÜ
	else if(b[0]=='V' && b[1]=='E' && b[2]=='Y' && b[3]=='A'){
		if(b[5]=='A'){
			if(b[8]=='A'){
				printf("AX = %s or %s",ax,ax);
				islem=iax|iax;
				printf("\nAX = %d \n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") or %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
				
			}
			else if(b[8]=='B'){
				printf("AX = %s or %s",ax,bx);
				islem=iax|ibx;
				printf("\nAX = %d\n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") or %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='C'){
				printf("AX = %s or %s",ax,cx);
				islem=iax|icx;
				printf("\nAX = %d\n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") or %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='D'){
				printf("AX = %s or %s",ax,dx);
				islem=iax|idx;
				printf("\nAX = %d\n",islem);
				printf("%d(",iax);Binary(iax);
				printf(") or %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[9]==NULL){
					sayi=((int)b[8]-48) ;
					printf("AX = %s or %d",ax,sayi);
					islem=iax|sayi;
					printf("\nAX = %d\n",islem);
					printf("%d(",iax);Binary(iax);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[10]==NULL){
					sayi=((int)b[8]-48)*10 + ((int)b[9]-48);
					printf("AX = %s or %d",ax,sayi);
					islem=iax|sayi;
					printf("\nAX = %d\n",islem);
					printf("%d(",iax);Binary(iax);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[8]-48)*100 + (b[9]-48)*10 + (b[10]-48);
					printf("AX = %s or %d",ax,sayi);
					islem=iax|sayi;
					printf("\nAX = %d\n",islem);
					printf("%d(",iax);Binary(iax);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
			}
			
		}
		else if(b[5]=='B'){
			if(b[8]=='A'){
				printf("BX = %s or %s",bx,ax);
				islem=ibx|iax;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") or %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='B'){
				printf("BX = %s or %s",bx,bx);
				islem=ibx|ibx;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") or %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='C'){
				printf("BX = %s or %s",bx,cx);
				islem=ibx|icx;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") or %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='D'){
				printf("BX = %s or %s",bx,dx);
				islem=ibx|idx;
				printf("\nBX = %d\n",islem);
				printf("%d(",ibx);Binary(ibx);
				printf(") or %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[9]==NULL){
					sayi=((int)b[8]-48) ;
					printf("BX = %s or %d",bx,sayi);
					islem=ibx|sayi;
					printf("\nBX = %d\n",islem);
					printf("%d(",ibx);Binary(ibx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[10]==NULL){
					sayi=((int)b[8]-48)*10 + ((int)b[9]-48);
					printf("BX = %s or %d",bx,sayi);
					islem=ibx|sayi;
					printf("\nBX = %d\n",islem);
					printf("%d(",ibx);Binary(ibx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[8]-48)*100 + (b[9]-48)*10 + (b[10]-48);
					printf("BX = %s or %d",bx,sayi);
					islem=ibx|sayi;
					printf("\nBX = %d\n",islem);
					printf("%d(",ibx);Binary(ibx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				
			}
		}
		else if(b[5]=='C'){
			if(b[8]=='A'){
				printf("CX = %s or %s",cx,ax);
				islem=icx|iax;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") or %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='B'){
				printf("CX = %s or %s",cx,bx);
				islem=icx|ibx;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") or %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='C'){
				printf("CX = %s or %s",cx,cx);
				islem=icx|icx;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") or %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='D'){
				printf("CX = %s or %s",cx,dx);
				islem=icx|idx;
				printf("\nCX = %d\n",islem);
				printf("%d(",icx);Binary(icx);
				printf(") or %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[9]==NULL){
					sayi=((int)b[8]-48) ;
					printf("CX = %s or %d",cx,sayi);
					islem=icx|sayi;
					printf("\nCX = %d\n",islem);
					printf("%d(",icx);Binary(icx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[10]==NULL){
					sayi=((int)b[8]-48)*10 + ((int)b[9]-48);
					printf("CX = %s or %d",cx,sayi);
					islem=icx|sayi;
					printf("\nCX = %d\n",islem);
					printf("%d(",icx);Binary(icx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[8]-48)*100 + (b[9]-48)*10 + (b[10]-48);
					printf("CX = %s or %d",cx,sayi);
					islem=icx|sayi;
					printf("\nCX = %d\n",islem);
					printf("%d(",icx);Binary(icx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}	
				
			}
		}
		else if(b[5]=='D'){
			if(b[8]=='A'){
				printf("DX = %s or %s",dx,ax);
				islem=idx|iax;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") or %d(",iax);Binary(iax);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='B'){
				printf("DX = %s or %s",dx,bx);
				islem=idx|ibx;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") or %d(",ibx);Binary(ibx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='C'){
				printf("DX = %s or %s",dx,cx);
				islem=idx|icx;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") or %d(",icx);Binary(icx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else if(b[8]=='D'){
				printf("DX = %s or %s",dx,dx);
				islem=idx|idx;
				printf("\nDX = %d\n",islem);
				printf("%d(",idx);Binary(idx);
				printf(") or %d(",idx);Binary(idx);
				printf(") = %d(",islem);Binary(islem);
				printf(")");
			}
			else{
				if(b[9]==NULL){
					sayi=((int)b[8]-48) ;
					printf("DX = %s or %d",dx,sayi);
					islem=idx|sayi;
					printf("\nDX = %d\n",islem);
					printf("%d(",idx);Binary(idx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[10]==NULL){
					sayi=((int)b[8]-48)*10 + ((int)b[9]-48);
					printf("DX = %s or %d",dx,sayi);
					islem=idx|sayi;
					printf("\nDX = %d\n",islem);
					printf("%d(",idx);Binary(idx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					sayi=(b[8]-48)*100 + (b[9]-48)*10 + (b[10]-48);
					printf("DX = %s or %d",dx,sayi);
					islem=idx|sayi;
					printf("\nDX = %d\n",islem);
					printf("%d(",idx);Binary(idx);
					printf(") or %d(",sayi);Binary(sayi);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
			}
		}
		else if(b[5]=='0' || b[5]=='1' || b[5]=='2' || b[5]=='3' || b[5]=='4' || b[5]=='5' || b[5]=='6' || b[5]=='7' || b[5]=='8' || b[5]=='9'){
			if(b[6]==','){
				sayi=((int)b[5]-48) ;
				if(b[7]=='A'){
					printf("Adres(%d) = %d or %s",sayi,sayi,ax);
					islem=sayi|iax;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",iax);Binary(iax);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[7]=='B'){
					printf("Adres(%d) = %d or %s",sayi,sayi,bx);
					islem=sayi|ibx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",ibx);Binary(ibx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[7]=='C'){
					printf("Adres(%d) = %d or %s",sayi,sayi,cx);
					islem=sayi|icx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",icx);Binary(icx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					printf("Adres(%d) = %d or %s",sayi,sayi,dx);
					islem=sayi|idx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",idx);Binary(idx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
			}
			else if(b[7]==','){
				sayi=((int)b[5]-48)*10 + ((int)b[6]-48);
				if(b[8]=='A'){
					printf("Adres(%d) = %d or %s",sayi,sayi,ax);
					islem=sayi|iax;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",iax);Binary(iax);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[8]=='B'){
					printf("Adres(%d) = %d or %s",sayi,sayi,bx);
					islem=sayi|ibx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",ibx);Binary(ibx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[8]=='C'){
					printf("Adres(%d) = %d or %s",sayi,sayi,cx);
					islem=sayi|icx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",icx);Binary(icx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					printf("Adres(%d) = %d or %s",sayi,sayi,dx);
					islem=sayi|idx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",idx);Binary(idx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				
			}
			else if(b[8]=','){
				sayi=(b[5]-48)*100 + (b[6]-48)*10 + (b[7]-48);
				if(b[9]=='A'){
					printf("Adres(%d) = %d or %s",sayi,sayi,ax);
					islem=sayi|iax;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",iax);Binary(iax);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[9]=='B'){
					printf("Adres(%d) = %d or %s",sayi,sayi,bx);
					islem=sayi|ibx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",ibx);Binary(ibx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else if(b[9]=='C'){
					printf("Adres(%d) = %d or %s",sayi,sayi,cx);
					islem=sayi|icx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",icx);Binary(icx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				else{
					printf("Adres(%d) = %d or %s",sayi,sayi,dx);
					islem=sayi|idx;
					printf("\nAdres(%d) = %d\n",sayi,islem);
					printf("%d(",sayi);Binary(sayi);
					printf(") or %d(",idx);Binary(idx);
					printf(") = %d(",islem);Binary(islem);
					printf(")");
				}
				
			}
		}
	}
	//DEÐÝL(NOT) OPERATÖRÜ
	else if(b[0]=='D'){
		if(b[4]=='A'){
			unsigned char dax=iax;
			k= (dax= ~dax );
			printf("AX   = %d\n",iax); printf("(AX)'= %d\n",k);
			printf("AX   = "); Binary(iax);
			printf("\n(AX)'="); Binary(k);
		}
		else if(b[4]=='B'){
			unsigned char dbx=ibx;
			k= (dbx= ~dbx );
			printf("BX   = %d\n",ibx); printf("(BX)'= %d\n",k);
			printf("BX   = "); Binary(ibx);
			printf("\n(BX)'="); Binary(k);
		}
		else if(b[4]=='C'){
			unsigned char dcx=icx;
			k= (dcx= ~dcx );
			printf("CX   = %d\n",icx); printf("(CX)'= %d\n",k);
			printf("CX   = "); Binary(icx);
			printf("\n(CX)'="); Binary(k);
		}
		else if(b[4]=='D'){
			unsigned char ddx=idx;
			k= (ddx= ~ddx );
			printf("DX   = %d\n",idx); printf("(DX)'= %d\n",k);
			printf("DX   = "); Binary(idx);
			printf("\n(DX)'="); Binary(k);
		}
		else{
				if(b[5]==NULL){
					sayi=((int)b[4]-48) ;
					unsigned char dsayi=sayi;
					k= (dsayi= ~dsayi );
					printf("SAYI   = %d\n",sayi); printf("(SAYI)'= %d\n",k);
					printf("SAYI   = "); Binary(sayi);
					printf("\n(SAYI)'="); Binary(k);
				}
				else if(b[6]==NULL){
					sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
					unsigned char dsayi=sayi;
					k= (dsayi= ~dsayi );
					printf("SAYI   = %d\n",sayi); printf("(SAYI)'= %d\n",k);
					printf("SAYI   = "); Binary(sayi);
					printf("\n(SAYI)'="); Binary(k);
					
				}
				else{
					sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
					unsigned char dsayi=sayi;
					k= (dsayi= ~dsayi );
					printf("SAYI   = %d\n",sayi); printf("(SAYI)'= %d\n",k);
					printf("SAYI   = "); Binary(sayi);
					printf("\n(SAYI)'="); Binary(k);
					
				}
			}
	}
	
	// SS ADRES , SSD ADRES , SN ADRES , SP ADRES KOMUTLARI
	else if(b[0]='S'){
		int oi; //Önceki iþlem(oi)
		printf("Onceki islemin sonucunu giriniz...");
		scanf("%d",&oi);//Önceki iþlemin deðeri kullanýcýdan alýnýr.Hangi komut ise ona göre hareket eder.
		
		if(b[1]=='S' && b[2]==' '){
			printf("%s\n",b);
			printf("SS ADRES komutu : Komuttan once yapilan islemin sonucu sifirsa, ADRES olarak verilen yere gider.\n");
			if( oi==0 ){
				if(b[4]==NULL){
					sayi=((int)b[3]-48) ;
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else if(b[5]==NULL){
					sayi=((int)b[3]-48)*10 + ((int)b[4]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else{
					sayi=(b[3]-48)*100 + (b[4]-48)*10 + (b[5]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
			}
		}
		else if(b[0]=='S' && b[1]=='S' && b[2]=='D'){
			printf("%s\n",b);
			printf("SSD ADRES komutu : Komuttan once yapilan islemin sonucu sifir degilse , ADRES olarak verilen yere gider.\n");
			if( oi != 0 ){
				if(b[5]==NULL){
					sayi=((int)b[4]-48) ;
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else if(b[6]==NULL){
					sayi=((int)b[4]-48)*10 + ((int)b[5]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else{
					sayi=(b[4]-48)*100 + (b[5]-48)*10 + (b[6]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
			}
		}
		else if(b[0]=='S' && b[1]=='N'){
			printf("%s\n",b);
			printf("SN ADRES komutu : Komuttan once yapilan islemin sonucu negatifse , ADRES olarak verilen yere gider.\n");
			if( oi<0 ){
				if(b[4]==NULL){
					sayi=((int)b[3]-48) ;
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else if(b[5]==NULL){
					sayi=((int)b[3]-48)*10 + ((int)b[4]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else{
					sayi=(b[3]-48)*100 + (b[4]-48)*10 + (b[5]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
			}
		}
		else if(b[0]=='S' && b[1]=='P'){
			printf("%s\n",b);
			printf("SP ADRES komutu : Komuttan once yapilan islemin sonucu pozitifse , ADRES olarak verilen yere gider.\n");
			if( oi>0 ){
				if(b[4]==NULL){
					sayi=((int)b[3]-48) ;
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else if(b[5]==NULL){
					sayi=((int)b[3]-48)*10 + ((int)b[4]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
				else{
					sayi=(b[3]-48)*100 + (b[4]-48)*10 + (b[5]-48);
					printf("-->Yapilan islem %d adresine gider.",sayi);
				}
			}
		}
	}
	

	return 0;
}
