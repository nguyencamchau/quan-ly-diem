# quan-ly-diem

# Dự Án Quản Lý Quy Trình Phát Triển Phần Mềm

Chào mừng bạn đến với kho lưu trữ mã nguồn của dự án. Dưới đây là thông tin chi tiết về cơ cấu phân chia công việc và quy trình quản lý các nhánh Git được áp dụng trong đội ngũ phát triển.

## 👥 Phân Công Nhánh Git Theo Thành Viên

Để đảm bảo tính độc lập và quản lý mã nguồn hiệu quả, dự án được phân chia thành các nhánh chức năng tương ứng với từng thành viên như sau:

| Thành Viên       | Tên Nhánh           | Mô Tả Nhiệm Vụ                                                                          |
| :--------------- | :------------------ | :-------------------------------------------------------------------------------------- |
| **Thành viên A** | `feature/nhap-lieu` | Phát triển các chức năng và giao diện giao tiếp liên quan đến nhập liệu hệ thống.       |
| **Thành viên B** | `feature/tinh-toan` | Xây dựng logic xử lý, thuật toán và hệ thống các tính toán cốt lõi.                     |
| **Thành viên C** | `test/kiem-thu`     | Viết kịch bản kiểm thử, thực hiện test tự động/thủ công để đảm bảo chất lượng mã nguồn. |
| **Thành viên D** | `docs/readme`       | Xây dựng, biên soạn tài liệu kỹ thuật, hướng dẫn sử dụng và bảo trì hệ thống tài liệu.  |

## 🚀 Quy Trình Làm Việc Chuẩn (Git Workflow)

### 1. Đồng bộ mã nguồn mới nhất

Trước khi bắt đầu code, luôn luôn chuyển về nhánh chung (`main` hoặc `develop`) để cập nhật phiên bản mới nhất từ server:

```bash
git checkout develop
git pull origin develop
```

### 2. Di chuyển vào nhánh làm việc cá nhân

Chuyển sang đúng nhánh mà bạn được phân công dựa theo bảng trên:

```bash
git checkout <ten-nhanh-cua-ban>
```

_Ví dụ (Thành viên A):_

```bash
git checkout feature/nhap-lieu
```

### 3. Cập nhật mã nguồn chung vào nhánh riêng

Để hạn chế tối đa việc xung đột mã nguồn (conflict) khi gộp mã nguồn sau này, hãy thường xuyên cập nhật code từ nhánh chung vào nhánh cá nhân của bạn:

```bash
git merge develop
```

### 4. Đẩy các thay đổi lên Remote Repository

Sau khi hoàn thành một phần việc và đảm bảo code chạy ổn định trên máy local, thực hiện commit và push lên hệ thống:

```bash
git add .
git commit -m "feat: mô tả ngắn gọn chức năng hoặc thay đổi vừa thực hiện"
git push origin <ten-nhanh-cua-ban>
```

### 5. Tạo Pull Request (PR)

Khi tính năng đã hoàn thiện hoàn toàn:

1. Truy cập vào giao diện web của hệ thống lưu trữ mã nguồn (GitHub / GitLab / Bitbucket).
2. Tạo một **Pull Request** từ nhánh làm việc cá nhân của bạn vào nhánh `develop`.
3. Chỉ định người kiểm duyệt (Reviewer) để tiến hành duyệt code trước khi chính thức gộp vào nhánh chính.
