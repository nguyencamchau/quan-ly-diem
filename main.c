#include <stdio.h>
#include "nhap_lieu.h"
#include "tinh_toan.h"

int main() {
    SinhVien danh_sach[MAX_STUDENTS];
    int so_luong = 0;

    printf("=== CHUONG TRINH QUAN LY DIEM SINH VIEN ===\n");
    
    // 1. Nhập dữ liệu học sinh
    nhap_danh_sach(danh_sach, &so_luong);

    // 2. Tính toán điểm trung bình & Xếp loại
    tinh_diem_trung_binh(danh_sach, so_luong);
    xep_loai_danh_sach(danh_sach, so_luong);

    // 3. Xuất kết quả ra màn hình
    xuat_danh_sach(danh_sach, so_luong);

    return 0;
}