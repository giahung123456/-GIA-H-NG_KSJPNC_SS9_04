#include <stdio.h>  

int main() {
    int arr[100];  
    int n = 0;  
    int choice, pos, value, new_value;

    do {
        
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                printf("Nhap so phan tu muon nhap (toi da 100): ");
                scanf("%d", &n);

                if (n > 100) {
                    printf("So phan tu vuot qua gioi han 100!\n");
                    n = 0;
                    break;
                }

                printf("Nhap gia tri cho %d phan tu:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                
                if (n == 0) {
                    printf("Mang rong!\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                
                if (n >= 100) {
                    printf("Mang da day, khong the them phan tu!\n");
                    break;
                }

                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (0 den %d): ", n);
                scanf("%d", &pos);

                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;  

                n++;  
                break;

            case 4:
                
                printf("Nhap vi tri can sua (0 den %d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                printf("Nhap gia tri moi: ");
                scanf("%d", &new_value);

                arr[pos] = new_value;  
                break;

            case 5:
                
                printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                n--;  
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (choice != 6);  

    return 0;
}