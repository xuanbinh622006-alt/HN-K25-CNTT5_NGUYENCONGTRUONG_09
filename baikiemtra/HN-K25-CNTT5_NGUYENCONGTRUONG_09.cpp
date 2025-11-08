#include<stdio.h>
	int main (){
		int lua_chon;
		int n;// so luong phan tu trong mang
		int phan_tu[100];
		int sum =0;
		int vi_tri ;//vi tri muon them trong mang
		int gia_tri;// gia tri muon them trong mang
		int xoa;
		int a, b;
		 int temp;
    	int x;
    	int ton_tai = 0;
		
		do{
		printf("-------------------------MENU---------------------------- \n");
		printf("1.Nhap so luong phan tu va gia tri tung phan tu cho mang \n");
		printf("2.In ra gia tri cac phan tu trong mang \n");
		printf("3.Tinh tong cua tat ca so am va so duong trong mang \n");
		printf("4.In cac phan tu chia het cho 3 trong mang \n");
		printf("5.Them moi mot phan tu vao  vi tri bat ky cua mang \n");
		printf("6.Xoa mot vi tri bat ki \n");
		printf("7.Xap sep mang theo thu tu giam dan \n");
		printf("8.Kiem tra su ton tai cua pha thu trong mang \n");
		printf("9.In ra cac phan tu trong khoang [a,b] \n");
		printf("10.Dao nguoc cac phan tu trong mang \n");
		printf("11.thoat chuong trinh \n");
		printf("--------------------------------------------------------- \n");
		
		
		printf ("vui long chon menu:");
		scanf("%d",&lua_chon);
		
		switch(lua_chon){
			case 1:
				printf ("nhap so luong phan tu: ");
				scanf ("%d",&n);
				for (int i= 0; i<n; i++){
					printf ("gia tri phan tu trong mang[%d]: ",i);
					scanf ("%d",& phan_tu[i]);
				}
				break;
			
			case 2:
				printf ("gia tri vua nhap la ");
				for (int i= 0; i<n; i++){
					printf("%d ",phan_tu[i]); 
				}
				printf("\n");
				break;
				
			case 3:
				printf ("tong cac phan tu trong mang la: ");
				for (int i=0; i<n; i++){
					sum = sum+phan_tu[i];
					i++;
				}
				printf ("%d",sum);
				printf ("\n");
				break;
			
			case 4:
				printf ("cac phan tu chia het cho 3 trong mang la ");
				for (int i=0; i<n; i++){
					if(phan_tu[i] %3== 0){
						printf("%d ",phan_tu[i]);
					}
				}
				printf("\n");
				break;
			
			case 5:
                printf("Nhap vi tri muon them (0 -> %d): ", n);
                scanf("%d", &vi_tri);
                if (vi_tri < 0 || vi_tri > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri muon them: ");
                scanf("%d", &gia_tri);
                for (int i = n; i > vi_tri; i--) {
                    phan_tu[i] = phan_tu[i - 1];
                }
                phan_tu[vi_tri] = gia_tri;
                n++;
                printf("Mang sau khi them: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", phan_tu[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Nhap vi tri muon xoa (0 -> %d): ", n - 1);
                scanf("%d", &xoa);
                if (xoa < 0 || xoa >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (int i = xoa; i < n - 1; i++) {
                    phan_tu[i] = phan_tu[i + 1];
                }
                n--;
                printf("Mang sau khi xoa: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", phan_tu[i]);
                }
                printf("\n");
                break;
			 case 7:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (phan_tu[i] < phan_tu[j]) {
                            temp = phan_tu[i];
                            phan_tu[i] = phan_tu[j];
                            phan_tu[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", phan_tu[i]);
                }
                printf("\n");
                break;

            case 8:
                printf("Nhap gia tri can kiem tra: ");
                scanf("%d", &x);
                ton_tai = 0;
                for (int i = 0; i < n; i++) {
                    if (phan_tu[i] == x) {
                        ton_tai = 1;
                        break;
                    }
                }
                if (ton_tai)
                    printf("Gia tri %d co ton tai trong mang!\n", x);
                else
                    printf("Gia tri %d khong ton tai trong mang!\n", x);
                break;

            case 9:
                printf("Nhap khoang [a, b]:\n");
                printf("a = "); scanf("%d", &a);
                printf("b = "); scanf("%d", &b);
                printf("Cac phan tu trong khoang [%d, %d]: ", a, b);
                for (int i = 0; i < n; i++) {
                    if (phan_tu[i] >= a && phan_tu[i] <= b)
                        printf("%d ", phan_tu[i]);
                }
                printf("\n");
                break;
				
					
				
		
				
			
		}
		
		}while (lua_chon!=11);
		printf ("thank you !!!");
		

		return 0;
	}

