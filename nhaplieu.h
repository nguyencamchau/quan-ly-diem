/* nhap_lieu.h */
#ifndef NHAP_LIEU_H
#define NHAP_LIEU_H

#define MAX_SV 100

typedef struct {
    char maSV[20];
    char hoTen[50];
    float diem;
} SinhVien;

void nhapDanhSach(SinhVien ds[], int *n);
void xuatDanhSach(SinhVien ds[], int n);

#endif