#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 1. Kiểm tra số nguyên
void kiem_tra_so_nguyen() {
    int n;
    printf("Nhap 1 so: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("%d la so nguyen duong hoac 0.\n", n);
    else
        printf("%d la so nguyen am.\n", n);
}

// 2. Tìm ước và bội chung
void tim_uoc_va_boi_chung() {
    int a, b;
    printf("Nhap 2 so nguyen duong: ");
    scanf("%d %d", &a, &b);

    // GCD
    int x = a, y = b, temp;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    int uoc = x;

    // LCM
    int boi_chung = (a * b) / uoc;

    printf("Uoc chung lon nhat: %d\n", uoc);
    printf("Boi chung nho nhat: %d\n", boi_chung);
}

// 3. Tính tiền
void tinh_tien() {
    double tien;
    printf("Nhap so tien ban dau: ");
    scanf("%lf", &tien);
    double thue = tien * 0.1;
    printf("Tien phai tra sau thue 10%%: %.2lf\n", tien + thue);
}

// 4. Tính điện nước
void tinh_dien_nuoc() {
    double so_dien, so_nuoc;
    printf("Nhap so dien (kWh): ");
    scanf("%lf", &so_dien);
    printf("Nhap so nuoc (m3): ");
    scanf("%lf", &so_nuoc);

    double tien_dien = so_dien * 3500;
    double tien_nuoc = so_nuoc * 25000;

    printf("Tien dien: %.0lf VND\n", tien_dien);
    printf("Tien nuoc: %.0lf VND\n", tien_nuoc);
}

// 5. Đổi tiền
void doi_tien() {
    double usd;
    printf("Nhap so tien USD: ");
    scanf("%lf", &usd);
    double vnd = usd * 24000;
    printf("%.2lf USD = %.0lf VND\n", usd, vnd);
}

// 6. Lãi suất ngân hàng
void lai_suat_ngan_hang() {
    double tien_gui, lai_suat;
    int thang;
    printf("Nhap so tien gui (VND): ");
    scanf("%lf", &tien_gui);
    printf("Nhap lai suat nam (%%): ");
    scanf("%lf", &lai_suat);
    printf("Nhap so thang gui: ");
    scanf("%d", &thang);

    double tien_lai = tien_gui * (lai_suat / 100) * thang / 12;
    printf("Tien lai sau %d thang: %.0lf VND\n", thang, tien_lai);
}

// 7. Tính tiền mua xe
void tinh_tien_mua_xe() {
    double gia_xe, tra_truoc, lai_suat;
    int thang;
    printf("Nhap gia xe (VND): ");
    scanf("%lf", &gia_xe);
    printf("Nhap so tien tra truoc (VND): ");
    scanf("%lf", &tra_truoc);
    printf("Nhap lai suat vay (%%/nam): ");
    scanf("%lf", &lai_suat);
    printf("Nhap so thang vay: ");
    scanf("%d", &thang);

    double tien_vay = gia_xe - tra_truoc;
    double tien_lai = tien_vay * (lai_suat / 100) * thang / 12;
    double tong_phai_tra = tien_vay + tien_lai;
    printf("Tien phai tra sau %d thang: %.0lf VND\n", thang, tong_phai_tra);
}

// 8. Sắp xếp thông tin sinh viên
void sap_xep_thong_tin_sinh_vien() {
    int n= 0;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", 60);
    char ten[60][50];
    double diem[60];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        getchar(); // xóa \n
        fgets(ten[i], 50, stdin);
        ten[i][strcspn(ten[i], "\n")] = 0; // loại bỏ \n
        printf("Nhap diem: ");
        scanf("%lf", &diem[i]);
    }

    // Sắp xếp giảm dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diem[i] < diem[j]) {
                double tmpD = diem[i]; diem[i] = diem[j]; diem[j] = tmpD;
                char tmpT[50]; strcpy(tmpT, ten[i]); strcpy(ten[i], ten[j]); strcpy(ten[j], tmpT);
            }
        }
    }

    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2lf\n", ten[i], diem[i]);
    }
}

// 9. Game FPOLY - LOTT
void xay_dung_game_fpoly_lott() {
    int so_doan, random_number;
    srand(time(NULL));
    random_number = rand() % 10 + 1;

    printf("Doan 1 so tu 1 den 10: ");
    scanf("%d", &so_doan);

    if (so_doan == random_number)
        printf("Chuc mung! Ban doan dung so %d\n", random_number);
    else
        printf("Sai roi! So dung la %d\n", random_number);
}

// 10. Tính toán phân số
void tinh_toan_phan_so() {
    int tu1, mau1, tu2, mau2;
    printf("Nhap phan so 1 (tu/mau): ");
    scanf("%d/%d", &tu1, &mau1);
    printf("Nhap phan so 2 (tu/mau): ");
    scanf("%d/%d", &tu2, &mau2);

    int tu = tu1 * mau2 + tu2 * mau1;
    int mau = mau1 * mau2;
    printf("Tong hai phan so: %d/%d\n", tu, mau);
}

// ===================== MAIN MENU =====================
int main() {
    int chon;

    do {
        system("cls");
        printf("=========== MENU ==========\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc va boi chung cua 2 so\n");
        printf("3. Tinh tien\n");
        printf("4. Tinh dien nuoc\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat ngan hang\n");
        printf("7. Tinh tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY - LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("Chon chuc nang: ");

        scanf("%d", &chon);
        while (getchar() != '\n');

        system("cls");

        switch (chon) {
        case 1: kiem_tra_so_nguyen(); break;
        case 2: tim_uoc_va_boi_chung(); break;
        case 3: tinh_tien(); break;
        case 4: tinh_dien_nuoc(); break;
        case 5: doi_tien(); break;
        case 6: lai_suat_ngan_hang(); break;
        case 7: tinh_tien_mua_xe(); break;
        case 8: sap_xep_thong_tin_sinh_vien(); break;
        case 9: xay_dung_game_fpoly_lott(); break;
        case 10: tinh_toan_phan_so(); break;
        case 0: printf("Thoat chuong trinh\n"); break;
        default: printf("Lua chon khong hop le!\n"); break;
        }

        if (chon != 0) {
            printf("\nNhan Enter de quay lai menu...");
            getchar();
        }

    } while (chon != 0);

    return 0;
}