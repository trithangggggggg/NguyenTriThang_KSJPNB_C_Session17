#include <stdio.h>  

//case1: nguoi dung nhap chuoi 
void nhapchuoi(char *input_str, int max_size) {  
    printf("Nhap vao chuoi: ");  
    fgets(input_str, max_size, stdin);  
    input_str[strcspn(input_str, "\n")] = 0;  
}  

// case2: in ra chuoi vua nhap 
void inchuoi(char *input_str) {  
    printf("Chuoi ban vua nhap: %s\n", input_str);  
}  

// case3: so luong chu cai trong chuoi 
int chucai(char *input_str) {  
    int count = 0;  
    for (int i = 0; input_str[i] != '\0'; i++) {  
        if (isalpha(input_str[i])) {  
            count++;  
        }  
    }  
    return count;  
}  

//case4: so luong chu so trong chuo i 
int chuso(char *input_str) {  
    int count = 0;  
    for (int i = 0; input_str[i] != '\0'; i++) {  
        if (isdigit(input_str[i])) {  
            count++;  
        }  
    }  
    return count;  
}  

//case5:so luong ki tu dac biet trong chuoi 
int kytudacbiet(char *input_str) {  
    int count = 0;  
    for (int i = 0; input_str[i] != '\0'; i++) {  
        if (!isalnum(input_str[i]) && !isspace(input_str[i])) {  
            count++;  
        }  
    }  
    return count;  
}  

int main() {  
    char chuoi[100];  
    int choice;  

    do {  
        printf("\nMENU\n");  
        printf("1. Nhap vao chuoi\n");  
        printf("2. In ra chuoi\n");  
        printf("3. So luong chu cai trong chuoi\n");  
        printf("4. So luong chu so trong chuoi\n");  
        printf("5. So luong ky tu dac biet trong chuoi\n");  
        printf("6. Thoat\n");  
        printf("Chon chuc nang: ");  
        scanf("%d", &choice);  
        getchar();

        switch (choice) {  
            case 1: //nhap vaof chuoi   
                nhapchuoi(chuoi, sizeof(chuoi));  
                break;  
            case 2: // In ra chuoi  
                inchuoi(chuoi);  
                break;  
            case 3: // So luong chu cai  
                printf("So luong chu cai trong chuoi: %d\n", chucai(chuoi));  
                break;  
            case 4: // So luong chu so  
                printf("So luong chu so trong chuoi: %d\n", chuso(chuoi));  
                break;  
            case 5: // So luong ky tu dac biet  
                printf("So luong ky tu dac biet trong chuoi: %d\n", kytudacbiet(chuoi));  
                break;  
            case 6: // Thoat  
                printf("Thoat chuong trinh.\n");  
                break;  
            default:  
                printf("Lua chon khong hop le. Vui long thu lai.\n");  
        }  
    } while (choice != 6);  

    return 0;  
}
