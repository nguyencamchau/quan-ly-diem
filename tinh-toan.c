#include <string.h>
#include "tinh_toan.h"

void tinh_diem_trung_binh(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        ds[i].diem_trung_binh = (ds[i].diem_toan + ds[i].diem_van) / 2.0;
    }
}

void xep_loai_danh_sach(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        if (ds[i].diem_trung_binh >= 8.5) {
            strcpy(ds[i].xep_loai, "Gioi");
        } else if (ds[i].diem_trung_binh >= 6.5) {
            strcpy(ds[i].xep_loai, "Kha");
        } else if (ds[i].diem_trung_binh >= 5.0) {
            strcpy(ds[i].xep_loai, "Trung Binh");
        } else {
            strcpy(ds[i].xep_loai, "Yeu");
        }
    }
}