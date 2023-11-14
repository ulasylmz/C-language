#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	const float PI=3.14;
	int islemdegeri;
	float fahrenheit, celcius;
	float yaricap, yukseklik, sonuc;
	int saat, dakika, sonuc2 ;
	float aci1, aci2;
	float taban, yukseklik2;
	printf("Yapmak istediginiz islemi girin: \n");
	printf("1-fah=>celcius \n");
	printf("2-koni hacmi hesaplama: \n");
	printf("3-saat dakika hesaplama: \n");
	printf("4-3. aci hesaplama: \n");
	printf("5-Ucgen alani hesaplama: \n");	
	scanf("%d", &islemdegeri);
    
    
    switch(islemdegeri){
    	case 1:
    		printf("fahrenheit derecesi girin:  ");
    		scanf("%f", &fahrenheit);
    		if((fahrenheit>-459.67)&& (fahrenheit<671.67)){
		    		celcius=0.555*(fahrenheit-32);
    		printf("Celcius : %.3f", celcius);
    	
	}
			else{
				printf("gecersiz deger...");
				
			}
    		break;

	  	case 2:
	  		printf("koni yaricapi girin:  ");
	  		scanf("%f", &yaricap);
	  		printf("koni yukseklik girin:  ");
	  		scanf("%f", &yukseklik);
	  		sonuc=0.333*PI*yaricap*yaricap*yukseklik;
	  		printf("KONI hacmi:  %.2f ", sonuc);
	        break;
		
		case 3:
			
			printf("anlik saniye bilgisi ogrenme \n");
			printf("saat bilgisi giriniz:   ");
			scanf("%d", &saat);
			printf("dakika bilgisi giriniz:   ");
			scanf("%d", &dakika);
			sonuc2=3600*saat+60*dakika;
			printf(" %d saat %d dakika = %d saniye ", saat, dakika, sonuc2);
			
			break;
	    	 
	    case 4:
	    	printf("1. aci : ");
	    	scanf("%f", &aci1);
	    	printf("2. aci : ");
	    	scanf("%f", &aci2);
	    	sonuc=180-aci1-aci2;
	    	printf("verilmeyen 3. aci degeri: %.2f", sonuc);
	    	break;
	    	
	    case 5:
	    	printf("Ucgen alanı hesaplamak icin taban uzunlugu giriniz:  ");
	    	scanf("%f", &taban);
	    	printf("Ucgen alanı hesaplamak icin yukseklik degeri giriniz:  ");
	    	scanf("%f", &yukseklik2);
	    	sonuc=taban*yukseklik2/2;
	    	printf("Ucgeninizin alani : %.2f", sonuc);
	    	break;
	    	
	    default:
		     printf("gecersiz islem degeri girdiniz...");	
	    	
}
	return 0;
}


