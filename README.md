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

## Cara Menjalankan Program

1. Pastikan Anda memiliki compiler C++ (g++, clang, atau MSVC)
2. Simpan kode ke file `bubble_sort.cpp`
3. Compile program:

   ```bash
   g++ -o bubble_sort bubble_sort.cpp -std=c++11


   ```

# Contoh Interaksi Program

**Contoh 1:** Input, Edit, dan Undo

```bash
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
    Nilai berhasil diubah!

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
    Undo berhasil!

    Nilai yang sudah diinput:
    1: 50
    2: 30
    3: 80
```
