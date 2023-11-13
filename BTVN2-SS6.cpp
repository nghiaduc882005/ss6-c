#include <stdio.h>
//choice(su lua chon); sum(tong); signal(hieu);accumulation(tich); quotient(thuong); remainder(du); 
int main() {
    int a, b, choice, sum, signal, accumulation, quotient, remainder;
    
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    
    do{
        printf("\nMENU\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                sum = a + b;
                printf("Tong 2 so la: %d\n", sum);
                break;
            case 2:
                signal = a - b;
                printf("Hieu 2 so la: %d\n", signal);
                break;
            case 3:
                accumulation = a * b;
                printf("Tich 2 so la: %d\n", accumulation);
                break;
            case 4:
                quotient = a / b;
                printf("Thuong 2 so la: %d\n", quotient);
                break;
            case 5:
                remainder = a % b;
                printf("So du trong phep chia 2 so la: %d\n", remainder);
                break;
            case 6:
                // tinh uoc chung lon nhat
                int UCLN;
				for(int i = 1 ; i <= a || i <= b ; i++){
					if(a % i == 0 && b % i == 0){
						UCLN = i;
					}
				}
				printf("UCLN la %d \n",UCLN);
                break;
            case 7:
                // tinh boi chung nho nhat
                printf("BCNN la %d \n", (a*b)/UCLN);
				break;
            case 8:
                printf("Tam biet!\n");
                break;
            default: //khac voi nhung lua chon con lai
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while(choice != 8);
    
}
