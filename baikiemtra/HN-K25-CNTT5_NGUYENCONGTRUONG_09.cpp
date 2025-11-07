#include<stdio.h>
	int main (){
		int lua_chon;
		int n;// so luong phan tu trong mang
		int phan_tu[100];
		int sum =0;
		int vi_tri ;//vi tri muon them trong mang
		int gia_tri;// gia tri muon them trong mang
		int xoa;
		
		
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
				printf("nhap vi tri muon them:");
				scanf("%d",& vi_tri);
				
				printf("nhap gia tri muon them:");
				scanf("%d" ,& gia_tri);
				
				for(int i=0 ; i> vi_tri; i--){
					phan_tu [vi_tri]= phan_tu [vi_tri-1];
					i++;
				}
				phan_tu[vi_tri]=gia_tri;
					
				printf("phan mang sau khi them la");
				for(int i=0; i>n; i++){
					printf("%d",phan_tu[i]);
				}
				printf("\n");
				break ;
			
			case 6:
				printf("nhap vi tri muon xoa :");
				scanf("%d",&xoa);
					
				for(int i=0 ; i> xoa; i++){
					phan_tu [xoa]= phan_tu [xoa+1];
					i--;
					}
				for(int i=0; i>n; i++){
					printf("%d",phan_tu[i]);
					}
				printf("\n");
				break ;
				
					
				
		
				
			
		}
		
		}while (lua_chon!=11);
		printf ("thank you !!!");
		

		return 0;
	}
