#include <stdio.h>  

// Case 1  
void nhapmang(int *array, int *size) {  
    printf("Nhap so luong phan tu: ");  
    scanf("%d", size);  
    for (int i = 0; i < *size; i++) {  
        printf("Nhap phan tu thu %d: ", i + 1);  
        scanf("%d", &array[i]);  
    }  
}  

// Case 2  
void hienthimang(int *array, int size) {  
    printf("Cac phan tu trong mang: ");  
    for (int i = 0; i < size; i++) {  
        printf("%d ", array[i]);  
    }  
    printf("\n");  
}  

// Case 3  
int tinhdodaimang(int size) {  
    return size;  
}  

// Case 4  
int tinhtongmang(int *array, int size) {  
    int sum = 0;  
    for (int i = 0; i < size; i++) {  
        sum += array[i];  
    }  
    return sum;  
}  

// Case 5  
int timphanTulonnhat(int *array, int size) {  
    int max = array[0];  
    for (int i = 1; i < size; i++) {  
        if (array[i] > max) {  
            max = array[i];  
        }  
    }  
    return max;  
}  

int main() {  
    int array[100], size, choice;  
    
    do {  
        printf("\nMENU\n");  
        printf("1. Nhap vao so phan tu va tung phan tu\n");  
        printf("2. Hien thi cac phan tu trong mang\n");  
        printf("3. Tinh do dai mang\n");  
        printf("4. Tinh tong cac phan tu trong mang\n");  
        printf("5. Hien thi phan tu lon nhat\n");  
        printf("6. Thoat\n");  
        printf("Chon chuc nang: ");  
        scanf("%d", &choice);  

        switch (choice) {  
            // Nhap vao so phan tu va tung phan tu  
            case 1:  
                nhapmang(array, &size);  
                break;  
            // Hien thi cac phan tu trong mang  
            case 2:  
                hienthimang(array, size);  
                break;  
            // Tinh do dai mang  
            case 3:  
                printf("Do dai mang: %d\n", tinhdodaimang(size));  
                break;  
            // Tinh tong cac phan tu trong mang  
            case 4:  
                printf("Tong cac phan tu trong mang: %d\n", tinhtongmang(array, size));  
                break;  
            // Hien thi phan tu lon nhat  
            case 5:  
                printf("Phan tu lon nhat: %d\n", timphanTulonnhat(array, size));  
                break;  
            //  Thoat  
            case 6:  
                printf("Thoat chuong trinh.\n");  
                break;  
            default:  
                printf("Lua chon khong hop le. Vui long thu lai.\n");  
        }  
    } while (choice != 6);  

    return 0;  
}
