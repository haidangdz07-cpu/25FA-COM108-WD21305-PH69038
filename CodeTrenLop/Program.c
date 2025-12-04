#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}

void sapXepPhanTuMang()
{
	int mangSoNguyen[4];
	int tmp;
	int kichthuoc;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &kichthuoc);
	printf("Nhap du lieu cho mang %d phan tu\n", kichthuoc);
	for (int i = 0; i < kichthuoc; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &mangSoNguyen[i]);
	}
	printf("Sap xep tang dan cho mang %d phan tu\n", kichthuoc);
	for (int i = 0; i < kichthuoc - 1; i++)
	{
		if (mangSoNguyen[i] > mangSoNguyen[i + 1])
		{
			tmp = mangSoNguyen[i];
			mangSoNguyen[i] = mangSoNguyen[i + 1];
			mangSoNguyen[i + 1] = tmp;
			i = -1;
		}
	}

	printf("Xuat du lieu cho mang %d phan tu\n", kichthuoc);
	for (int i = 0; i < kichthuoc; i++)
	{
		printf("mang[%d] = %d\n", i, mangSoNguyen[i]);
	}

}

void mangHaiChieu()
{
	char mangKyTu[10] = "ANH";
	puts(mangKyTu);
	gets(mangKyTu);
	int array[2][3];
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2 ;i++)
		{
			printf("mang[%d][%d] = ", j, i);
			scanf("%d", &array[i][j]);
		}
	}



	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d,", array[i][j]);

		}
		printf("\n");
	}
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepPhanTuMang;
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

void demoString()
// string - string.h
{
	char name[10] = "ANH";
	//gets (mangKyTu)
	while (getchar() != '\n');

	printf("nhap ten cua ban");
	//su dung ham fgets thay cho hàm gets
	fgets(name, sizeof(name), stdin);
	printf("%s", name);
	printf("\n");
	//xuat du lieu su dung ham "puts"- in them dau xuong dong(tu dong)
	char mangKyTU[100] = "NAM";

	while (getchar() != '\n')

		printf("Nhap du lieu String: ");
	fgets(mangKyTU, sizeof(mangKyTU), stdin);

	printf("%s", mangKyTU);
	printf("\n");

	printf("%d", strlen(mangKyTU) - 1);
	printf("\n");

	printf("%d", strcmp("A", "B"));
	printf("\n");
	char str[5] = "ABC";
	printf("%s", _strrev(str));
	printf("\n");

	printf("%s", _strlwr(str));
	printf("\n");

	printf("%s", _strupr(str));
	printf("\n");

	if (strstr("ABC", "D") != NULL;
	{
		printf(strstr("ABC", "D"))
	}
	else
	{
		printf("NOT FOUND");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. demoString");
		printf("\n");
		printf("3. mangHaiChieu");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		int tiepTuc = 1;
		while (tiepTuc == 1)
		{
			switch (chonChucNang)
			{
			case 1:
				kiemTraSoNguyen();
				break;
			case 2:
				sapXepPhanTuMang();
				break;
			case 3:
				mangHaiChieu();
				break;
			case 4:
				demoString();
				break;
			default:
				printf("Chon sai. Chuc nang hop le [0-3]");
				break;
			}
			printf("Tiep tuc thuc hien chuc nang nay? [1=co | 0=Khong]:");
			scanf("%d", &tiepTuc);
		}
	} while (chonChucNang != 0);
}


// GV: AnhTT184