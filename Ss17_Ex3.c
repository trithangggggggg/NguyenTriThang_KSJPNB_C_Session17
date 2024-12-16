#include <stdio.h>  

void nhapchuoi(char *input_str, int max_size) {  
    printf("Nhap vao chuoi: ");  
    fgets(input_str, max_size, stdin);  
    input_str[strcspn(input_str, "\n")] = 0; // Xóa ki tu newline  
}  
  
void inchuoi(char *input_str) {  
    printf("Chuoi ban vua nhap: %s\n", input_str);  
}  
  
void daochuoi(char *input_str) {  
    int len = strlen(input_str);  
    for (int i = len - 1; i >= 0; i--) {  
        putchar(input_str[i]);  
    }  
    printf("\n");  
}  

int demtu(char *input_str) {  
    int count = 0;  
    char *token = strtok(input_str, " ");  
    while (token != NULL) {  
        count++;  
        token = strtok(NULL, " ");  
    }  
    return count;  
}  
 
void sosanhchuoi(char *chuoi_dau, char *chuoi_khac) {  
    int cmp = strcmp(chuoi_dau, chuoi_khac);  
    if (cmp < 0) {  
        printf("Chuoi khac ngan hon chuoi ban dau.\n");  
    } else if (cmp > 0) {  
        printf("Chuoi khac dai hon chuoi ban dau.\n");  
    } else {  
        printf("Hai chuoi bang nhau.\n");  
    }  
}  

 
void inhoa(char *input_str) {  
    for (int i = 0; input_str[i] != '\0'; i++) {  
        putchar(toupper(input_str[i]));  
    }  
    printf("\n");  
}  
  
void themchuoi(char *chuoi_dau, char *chuoi_khac) {  
    strcat(chuoi_dau, chuoi_khac);  
}  

int main() {  
    char chuoi[100], chuoi_khac[100];  
    int choice;  

    do {  
        printf("\nMENU\n");  
        printf("1. Nhap vao chuoi\n");  
        printf("2. In ra chuoi dao nguoc\n");  
        printf("3. Dem so luong tu trong chuoi\n");  
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");  
        printf("5. In hoa tat ca chu cai trong chuoi\n");  
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");  
        printf("7. Thoat\n");  
        printf("Chon chuc nang: ");  
        scanf("%d", &choice);  
        getchar(); 

        switch (choice) {  
            case 1: // Nhap vao chuoi  
                nhapchuoi(chuoi, sizeof(chuoi));  
                break;  
            case 2: // In ra chuoi dao nguoc  
                printf("Chuoi dao nguoc: ");  
                daochuoi(chuoi);  
                break;  
            case 3: // Dem so luong tu  
                {  
                    char temp[100];  
                    strcpy(temp, chuoi);
                    printf("So luong tu trong chuoi: %d\n", demtu(temp));  
                }  
                break;  
            case 4: // So sanh chuoi  
                nhapchuoi(chuoi_khac, sizeof(chuoi_khac));  
                sosanhchuoi(chuoi, chuoi_khac);  
                break;  
            case 5: // In hoa tat ca chu cai  
                printf("Chuoi in hoa: ");  
                inhoa(chuoi);  
                break;  
            case 6: // Them chuoi  
                nhapchuoi(chuoi_khac, sizeof(chuoi_khac));  
                themchuoi(chuoi, chuoi_khac);  
                printf("Chuoi sau khi them: %s\n", chuoi);  
                break;  
            case 7: // Thoat  
                printf("Thoat chuong trinh.\n");  
                break;  
            default:  
                printf("Lua chon khong hop le. Vui long thu lai.\n");  
        }  
    } while (choice != 7);  

    return 0;  
}
