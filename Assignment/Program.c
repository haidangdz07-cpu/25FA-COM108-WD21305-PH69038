// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void kiem_tra_so_nguyen() {
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);

    if (n > 0) printf("Day la so nguyen duong.\n");
    else if (n < 0) printf("Day la so nguyen am.\n");
    else printf("Day la so 0.\n");
}
void tim_uoc_va_boi_chung() {
    int a, b, i, gcd, lcm;
    printf("Nhap 2 so: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0) gcd = i;

    lcm = (a * b) / gcd;

    printf("Uoc chung lon nhat: %d\n", gcd);
    printf("Boi chung nho nhat: %d\n", lcm);
}
void tinh_tien_ke_toan() {
    double tien, tong;
    printf("Nhap so tien: ");
    scanf("%lf", &tien);

    tong = tien * 1.10;
    printf("Tong tien sau VAT: %.2lf\n", tong);
}
void tinh_dien_nuoc() {
    int so;
    printf("Nhap so kWh dien: ");
    scanf("%d", &so);

    int tien = so * 3000;
    printf("Tien dien: %d VND\n", tien);
}
void doi_tien() {
    double usd;
    printf("Nhap so tien USD: ");
    scanf("%lf", &usd);

    printf("Quy doi: %.0lf VND\n", usd * 24000);
}
void lai_suat_ngan_hang() {
    double goc, lai, nam;
    printf("Nhap so tien gui: ");
    scanf("%lf", &goc);
    printf("Lai suat (%%/nam): ");
    scanf("%lf", &lai);
    printf("So nam gui: ");
    scanf("%lf", &nam);

    double tong = goc * pow((1 + lai / 100), nam);

    printf("So tien nhan duoc: %.2lf VND\n", tong);
}

void tinh_tien_mua_xe() {
    double gia;
    printf("Nhap gia xe: ");
    scanf("%lf", &gia);

    double tong = gia * 1.10 * 1.12;
    printf("Tong tien phai tra: %.2lf VND\n", tong);
}


void sap_xep_sinh_vien() {
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    double a[100];
    for (int i = 0; i < n; i++) {
        printf("Nhap diem SV %d: ", i + 1);
        scanf("%lf", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                double t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    printf("Diem sau sap xep: ");
    for (int i = 0; i < n; i++)
        printf("%.1lf ", a[i]);
    printf("\n");
}
void xay_dung_game_fpoly_lott() {
    srand(time(0));
    int so = rand() % 10 + 1;
    int doan;

    printf("Doan so (1 den 10): ");
    scanf("%d", &doan);

    if (doan == so) printf("Chinh xac! Ban da trung giai!\n");
    else printf("Sai roi! So dung la %d\n", so);
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void tinh_toan_phan_so() {
    int tu, mau;
    printf("Nhap tu so: ");
    scanf("%d", &tu);
    printf("Nhap mau so: ");
    scanf("%d", &mau);

    int uc = gcd(tu, mau);
    tu /= uc;
    mau /= uc;

    printf("Phan so rut gon: %d/%d\n", tu, mau);
}

//menu
int main() {
    int chon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc va boi chung\n");
        printf("3. Tinh tien ke toan\n");
        printf("4. Tinh dien nuoc\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat ngan hang\n");
        printf("7. Tinh tien mua xe\n");
        printf("8. Sap xep sinh vien\n");
        printf("9. Game FPOLY LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        switch (chon) {
        case 1: kiem_tra_so_nguyen(); break;
        case 2: tim_uoc_va_boi_chung(); break;
        case 3: tinh_tien_ke_toan(); break;
        case 4: tinh_dien_nuoc(); break;
        case 5: doi_tien(); break;
        case 6: lai_suat_ngan_hang(); break;
        case 7: tinh_tien_mua_xe(); break;
        case 8: sap_xep_sinh_vien(); break;
        case 9: xay_dung_game_fpoly_lott(); break;
        case 10: tinh_toan_phan_so(); break;
        case 0: printf("Thoat chuong trinh...\n"); break;
        default: printf("Lua chon khong hop le!\n");
        }

    } while (chon != 0);

    return 0;
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184