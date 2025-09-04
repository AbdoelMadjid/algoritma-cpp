# Bubble Sort dengan Fitur Lengkap

Program C++ yang mengimplementasikan algoritma Bubble Sort dengan berbagai fitur tambahan untuk manipulasi data, statistik, dan manajemen state.

## 🌟 Fitur-Fitur Unggulan

<details>
  <summary><strong>Klik untuk melihat semua fitur (7 fitur utama)</strong></summary>
  
### 1. 📝 **Input Data**
- ✅ Menentukan jumlah nilai yang akan diinput
- ✅ Validasi range nilai (1-100)
- ✅ Deteksi dan penolakan duplikat
- 📌 *Memastikan data input valid dan unik sejak awal*

### 2. ✏️ **Edit Nilai**

- ✅ Memilih nilai berdasarkan indeks
- ✅ Validasi range nilai baru
- ✅ Pencegahan duplikat
- ✅ Update frekuensi otomatis
- 📌 _Modifikasi data yang aman dengan validasi lengkap_

### 3. 🗑️ **Hapus Nilai**

- ✅ Memilih nilai berdasarkan indeks
- ✅ Validasi indeks
- ✅ Update frekuensi otomatis
- ✅ Penanganan array kosong
- 📌 _Penghapusan data yang aman dengan notifikasi jelas_

### 4. 📊 **Statistik Lengkap**

- ✅ Jumlah nilai
- ✅ Nilai minimum
- ✅ Nilai maksimum
- ✅ Rata-rata
- ✅ Total nilai
- 📌 _Analisis data komprehensif dengan perhitungan otomatis_

### 5. 💾 **Simpan ke File**

- ✅ Memilih nama file
- ✅ Menyimpan jumlah nilai dan data nilai
- ✅ Validasi pembukaan file
- 📌 _Ekspor data yang mudah dengan format yang jelas_

### 6. ↩️ **Undo/Redo System**

- ✅ Undo untuk membatalkan operasi terakhir
- ✅ Redo untuk mengembalikan operasi yang di-undo
- ✅ Manajemen state dengan stack
- 📌 _Kontrol perubahan data dengan riwayat lengkap_

### 7. 🔄 **Sorting**

- ✅ Bubble Sort untuk mengurutkan nilai
- ✅ Menampilkan hasil sorting
- 📌 _Pengurutan data yang efisien dengan algoritma klasik_

</details>

---

### 💡 Keunggulan Implementasi:

- **Validasi Komprehensif**: Setiap input divalidasi dengan ketentuan jelas
- **Manajemen State Canggih**: Sistem undo/redo dengan stack untuk riwayat lengkap
- **Antarmuka Intuitif**: Menu interaktif dengan pesan error yang jelas
- **Efisiensi Data**: Penggunaan struktur data optimal (vector, map, stack)
- **Modularitas**: Kode terorganisir dalam fungsi-fungsi terpisah

---

## 🚀 Cara Menjalankan Program

<details>
  <summary><strong>Klik untuk melihat panduan instalasi</strong></summary>

### Prasyarat

- 💻 **Compiler C++** (salah satu):
  - `g++` (GCC)
  - `clang` (LLVM)
  - MSVC (Visual Studio)

### Langkah-langkah

1. 📁 **Simpan kode** ke file `bubble_sort.cpp`
2. ⚙️ **Compile program**:
   ```bash
   g++ -o bubble_sort bubble_sort.cpp -std=c++11
   ```
3. ▶️ Jalankan program
   ```bash
   ./bubble_sort
   ```
   atau di windows
   ```bash
   bubble_sort.exe
   ```

💡 Catatan: Pastikan compiler Anda mendukung C++11 atau lebih baru

</details>

---

## 🎮 Contoh Interaksi Program

<details>
  <summary><strong><strong>📝 Contoh 1: Input, Edit, dan Undo</strong></summary>
    
        Masukkan jumlah nilai yang akan diinput: 3
        Masukkan 3 nilai (1-100, tanpa duplikat):
        Nilai ke-1: 50
        Nilai ke-2: 30
        Nilai ke-3: 80

        Nilai yang sudah diinput:
        1: 50
        2: 30
        3: 80

        === MENU UTAMA ===
        1. Edit nilai
        2. Hapus nilai
        3. Tampilkan statistik
        4. Simpan data ke file
        5. Undo
        6. Redo
        7. Selesai dan sortir
        Pilihan Anda: 1

        Nilai yang sudah diinput:
        1: 50
        2: 30
        3: 80

        Masukkan indeks nilai yang ingin diedit (1-3): 2
        Masukkan nilai baru (1-100): 45
        ✅ Nilai berhasil diubah!

        Nilai yang sudah diinput:
        1: 50
        2: 45
        3: 80

        === MENU UTAMA ===
        1. Edit nilai
        2. Hapus nilai
        3. Tampilkan statistik
        4. Simpan data ke file
        5. Undo
        6. Redo
        7. Selesai dan sortir
        Pilihan Anda: 5
        ↩️ Undo berhasil!

        Nilai yang sudah diinput:
        1: 50
        2: 30
        3: 80

</details>

<details>
  <summary><strong>🗑️ Contoh 2: Hapus dan Statistik</strong></summary>

    Masukkan jumlah nilai yang akan diinput: 4
    Masukkan 4 nilai (1-100, tanpa duplikat):
    Nilai ke-1: 25
    Nilai ke-2: 60
    Nilai ke-3: 35
    Nilai ke-4: 80

    Nilai yang sudah diinput:
    1: 25
    2: 60
    3: 35
    4: 80

    === MENU UTAMA ===
    1. Edit nilai
    2. Hapus nilai
    3. Tampilkan statistik
    4. Simpan data ke file
    5. Undo
    6. Redo
    7. Selesai dan sortir
    Pilihan Anda: 2

    Nilai yang sudah diinput:
    1: 25
    2: 60
    3: 35
    4: 80

    Masukkan indeks nilai yang ingin dihapus (1-4): 2
    🗑️ Nilai 60 berhasil dihapus!

    Nilai yang sudah diinput:
    1: 25
    2: 35
    3: 80

    === MENU UTAMA ===
    1. Edit nilai
    2. Hapus nilai
    3. Tampilkan statistik
    4. Simpan data ke file
    5. Undo
    6. Redo
    7. Selesai dan sortir
    Pilihan Anda: 3

    === STATISTIK DATA ===
    📊 Jumlah nilai: 3
    ⬇️ Nilai minimum: 25
    ⬆️ Nilai maksimum: 80
    📈 Rata-rata: 46.6667
    🔢 Total nilai: 140

</details>

<details>
  <summary><strong>💾 Contoh 3: Simpan ke File dan Sorting</strong></summary>

    Masukkan jumlah nilai yang akan diinput: 3
    Masukkan 3 nilai (1-100, tanpa duplikat):
    Nilai ke-1: 40
    Nilai ke-2: 70
    Nilai ke-3: 55

    Nilai yang sudah diinput:
    1: 40
    2: 70
    3: 55

    === MENU UTAMA ===
    1. Edit nilai
    2. Hapus nilai
    3. Tampilkan statistik
    4. Simpan data ke file
    5. Undo
    6. Redo
    7. Selesai dan sortir
    Pilihan Anda: 4
    Masukkan nama file (contoh: data.txt): nilai.txt
    💾 Data berhasil disimpan ke nilai.txt

    === MENU UTAMA ===
    1. Edit nilai
    2. Hapus nilai
    3. Tampilkan statistik
    4. Simpan data ke file
    5. Undo
    6. Redo
    7. Selesai dan sortir
    Pilihan Anda: 7
    🔄 Mengurutkan data...

    Hasil setelah diurutkan:
    40 55 70

</details>

---

### 💡 Tips Penggunaan:

| Tips | Deskripsi                                                                                       |
| ---- | ----------------------------------------------------------------------------------------------- |
| 🔄   | **Gunakan fitur Undo/Redo** untuk bereksperimen dengan data tanpa khawatir kehilangan data asli |
| 💾   | **Simpan hasil ke file** dengan format **.txt** atau **.csv** untuk dokumentasi                 |
| 📊   | **Cek Statistik** untuk analisis cepat data Anda                                                |
| ✅   | **Pastikan input nilai** dalam rentang **1-100** dan unik                                       |

---

## 🎓 Konsep yang Diajarkan

<details>
  <summary><strong>Klik untuk melihat semua konsep pemrograman (7 kategori)</strong></summary>

### 1. 📚 Struktur Data

- **Vector** untuk penyimpanan data dinamis
- **Map** untuk tracking frekuensi
- **Stack** untuk manajemen state (undo/redo)

### 2. ⚙️ Algoritma

- **Bubble Sort** untuk pengurutan data
- Algoritma untuk pencarian nilai minimum/maksimum
- Algoritma untuk menghitung statistik

### 3. 🧩 Pemrograman Modular

- Pemecahan kode menjadi fungsi-fungsi kecil
- Enkapsulasi logika dalam fungsi
- Parameter passing dan return value

### 4. 🔍 Validasi Input

- Pemeriksaan range nilai
- Pencegahan duplikat
- Validasi indeks

### 5. 💽 File I/O

- Menulis data ke file
- Penanganan error file

### 6. 🔄 Manajemen State

- Konsep undo/redo
- Penyimpanan dan pemulihan state aplikasi

### 7. ⚠️ Error Handling

- Penanganan input tidak valid
- Pesan error yang informatif

</details>
