//Bu program vücut kitle endeksinizi hesaplar
#include<stdio.h>
int main (){
	float kilo, boy, vki;
	printf("Lutfen kilonuzu giriniz\n");
	scanf("%f",&kilo);
	printf("Lutfen boyunuzu giriniz\n");
	scanf("%f",&boy);
	vki= kilo/(boy*boy);
	
	printf("Vucut kitle indexiniz %f olarak hesaplanmistir.\n\n",vki);
	printf("Cikan sonuc 20-24 arasi ise normal bir indexe sahipsinizdir.");
	
		
	
	
	
	
	
	
	
	
	return 0 ;
}
