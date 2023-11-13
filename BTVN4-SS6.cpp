#include <stdio.h>
int main(){
	int a, sum, choice, odd_max;
	
	printf("Nhap vao 1 so nguyen :");
	scanf("%d", &a);
	
	do{
		printf("1. In day so chia het cho 2 va giam dan (n>=so>=2)\n");
		printf("2. In cac so nho hon n va tinh tong\n");
		printf("3. In ra cac uoc so chan cua n\n");
		printf("4. In ra cac uoc so le va so luong cac uoc le cua n\n ");
		printf("5. In ra uoc so le lon nhat cua n\n");
		printf("6. Thoat\n");
		
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("day so chia het cho 2 la : ");
				for(int i = 0; i <= a ; i++){
					if(i % 2 == 0){
						printf("%d \n",i);
					}
				}
				printf("\a");
				break;
			case 2:
				for(int i = 0 ; i <= a ; i++){
					sum += i;
				}
				printf("tong cua day la : %d \n",sum);
				break;
			case 3:
				printf("uoc so chan cua day la : ");
				for(int i = 1 ; i <= a ; i++){
					if(a % i == 0){
						if(i % 2 == 0){
							printf("%d \t", i);
						}
					}
				}
				printf("\n");
				break;
			case 4:
				printf("uoc so le cua day la : ");
				for(int i = 1 ; i <= a ; i++){
					if(a % i == 0){
						if(i % 2 != 0){
							printf("%d \n",i);
						}
					}
				}
				printf("\n");
				break;
			case 5:
				for(int i = 1 ; i <= a ; i++){
					if(a % i == 0){
						if(i % 2 != 0){
							if(i > odd_max){
								odd_max = i;
							}		
						}
					}
				}
				printf("uoc so le lon nhat la : %d \n", odd_max);
				break;
			case 6:
				printf("Tam biet!");
				break;
			default:
				printf("lua chon cua ban khong hop le. Vui long lua chon lai !!");
		}
	}while(choice != 6);
}
				
