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

---

## 🔍 Penjelasan Implementasi

Klik untuk melihat detail implementasi kode

<details>
  <summary><strong>📋 Struktur AppState</strong></summary>

```cpp
struct AppState {
    vector<int> arr;
    map<int, int> freq;
};
```

📌 Fungsi:

- Menyimpan state lengkap aplikasi, yaitu array nilai dan frekuensi kemunculan setiap nilai

🎯 Tujuan:

- Memungkinkan penyimpanan dan pemulihan state untuk fungsi undo/redo

</details>

<details>
  <summary><strong>🗂️ Stack untuk Undo/Redo</strong></summary>

```cpp
stack<AppState> undoStack;
stack<AppState> redoStack;
```

📌 Fungsi:

- Dua stack digunakan untuk mengimplementasikan fitur undo/redo
- 📥 `undoStack`: Menyimpan state sebelum setiap operasi (edit/hapus)
- 📤 `redoStack`: Menyimpan state yang telah di-undo untuk memungkinkan redo

🎯 Tujuan:

- Menciptakan riwayat perubahan yang dapat dibatalkan dan dikembalikan

</details>

<details>
  <summary><strong>💾 Fungsi saveState()</strong></summary>

```cpp
void saveState(const vector<int>& arr, const map<int, int>& freq) {
    AppState state;
    state.arr = arr;
    state.freq = freq;
    undoStack.push(state);

    // Clear redo stack saat ada perubahan baru
    while (!redoStack.empty()) {
        redoStack.pop();
    }
}
```

📌 Fungsi:

- Menyimpan state saat ini ke undo stack
- Membersihkan redo stack saat ada perubahan baru

🎯 Tujuan:

- Dipanggil sebelum setiap operasi yang mengubah data (edit/hapus) untuk memungkinkan undo

⚠️ Penting:

- Membersihkan redo stack saat ada perubahan baru untuk menjaga konsistensi riwayat

</details>

<details>
  <summary><strong>↩️ Fungsi undo() dan redo()</strong></summary>

```cpp
void undo(vector<int>& arr, map<int, int>& freq) {
    if (undoStack.empty()) {
        cout << "Tidak ada operasi yang bisa di-undo!\n";
        return;
    }

    // Simpan state sekarang untuk redo
    AppState currentState;
    currentState.arr = arr;
    currentState.freq = freq;
    redoStack.push(currentState);

    // Kembalikan state sebelumnya
    AppState previousState = undoStack.top();
    arr = previousState.arr;
    freq = previousState.freq;
    undoStack.pop();

    cout << "Undo berhasil!\n";
    tampilkanNilai(arr);
}
```

📌 Fungsi:

- ↩️ Undo: Memindahkan state saat ini ke redo stack dan mengembalikan state sebelumnya dari undo stack
- 🔁 Redo: Melakukan operasi sebaliknya (mengembalikan operasi yang di-undo)

🎯 Tujuan:

- Memberikan kontrol penuh kepada pengguna untuk membatalkan dan mengulangi operasi

⚠️ Penting:

- Selalu memeriksa apakah stack tidak kosong sebelum melakukan operasi

</details>

<details>
  <summary><strong>✏️ Fungsi editNilai()</strong></summary>

```cpp
void editNilai(vector<int>& arr, map<int, int>& freq) {
    tampilkanNilai(arr);

    int index, newValue;
    cout << "\nMasukkan indeks nilai yang ingin diedit (1-" << arr.size() << "): ";
    cin >> index;

    if (index < 1 || index > arr.size()) {
        cout << "ERROR: Indeks tidak valid!\n";
        return;
    }

    int oldValue = arr[index - 1];
    cout << "Masukkan nilai baru (1-100): ";
    cin >> newValue;

    if (newValue < 1 || newValue > 100) {
        cout << "ERROR: Nilai harus antara 1-100!\n";
        return;
    }

    if (newValue != oldValue && freq[newValue] > 0) {
        cout << "ERROR: Nilai " << newValue << " sudah ada di data!\n";
        return;
    }

    saveState(arr, freq);

    // Update frekuensi
    freq[oldValue]--;
    if (freq[oldValue] == 0) {
        freq.erase(oldValue);
    }

    arr[index - 1] = newValue;
    freq[newValue]++;

    cout << "Nilai berhasil diubah!\n";
    tampilkanNilai(arr);
}
```

📌 Fungsi:

- Memungkinkan pengguna untuk mengedit nilai berdasarkan indeks

🎯 Tujuan:

- Modifikasi data yang aman dengan validasi lengkap

⚠️ Penting:

- Melakukan validasi indeks, range nilai baru, dan duplikat sebelum mengubah data

</details>

<details>
  <summary><strong>🗑️ Fungsi hapusNilai()</strong></summary>

```cpp
void hapusNilai(vector<int>& arr, map<int, int>& freq) {
    if (arr.empty()) {
        cout << "Tidak ada data yang bisa dihapus!\n";
        return;
    }

    tampilkanNilai(arr);

    int index;
    cout << "\nMasukkan indeks nilai yang ingin dihapus (1-" << arr.size() << "): ";
    cin >> index;

    if (index < 1 || index > arr.size()) {
        cout << "ERROR: Indeks tidak valid!\n";
        return;
    }

    saveState(arr, freq);

    int deletedValue = arr[index - 1];
    arr.erase(arr.begin() + index - 1);

    // Update frekuensi
    freq[deletedValue]--;
    if (freq[deletedValue] == 0) {
        freq.erase(deletedValue);
    }

    cout << "Nilai " << deletedValue << " berhasil dihapus!\n";
    tampilkanNilai(arr);
}
```

📌 Fungsi:

- Memungkinkan pengguna untuk menghapus nilai berdasarkan indeks

🎯 Tujuan:

- Penghapusan data yang aman dengan notifikasi jelas

⚠️ Penting:

- Memeriksa apakah array kosong dan validasi indeks sebelum penghapusan

</details>

<details>
  <summary><strong>📊 Fungsi tampilkanStatistik()</strong></summary>

```cpp
void tampilkanStatistik(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Tidak ada data untuk ditampilkan statistiknya.\n";
        return;
    }

    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    double avg = sum / arr.size();
    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());

    cout << "\n=== STATISTIK DATA ===\n";
    cout << "Jumlah nilai: " << arr.size() << endl;
    cout << "Nilai minimum: " << min_val << endl;
    cout << "Nilai maksimum: " << max_val << endl;
    cout << "Rata-rata: " << avg << endl;
    cout << "Total nilai: " << sum << endl;
}
```

📌 Fungsi:

- Menghitung dan menampilkan statistik data

🎯 Tujuan:

- Analisis data komprehensif dengan perhitungan otomatis

⚠️ Penting:

- Menggunakan algoritma STL seperti accumulate, min_element, dan max_element

</details>

<details>
  <summary><strong>💾 Fungsi simpanKeFile()</strong></summary>

```cpp
void simpanKeFile(const vector<int>& arr) {
    string filename;
    cout << "Masukkan nama file (contoh: data.txt): ";
    cin >> filename;

    ofstream file(filename);
    if (!file) {
        cout << "Gagal membuka file!\n";
        return;
    }

    file << "Jumlah nilai: " << arr.size() << endl;
    file << "Data nilai:\n";
    for (int num : arr) {
        file << num << " ";
    }
    file.close();

    cout << "Data berhasil disimpan ke " << filename << endl;
}
```

📌 Fungsi:

- Memungkinkan pengguna untuk menyimpan data ke file

🎯 Tujuan:

- Ekspor data yang mudah dengan format yang jelas

⚠️ Penting:

- Validasi pembukaan file sebelum menulis data

</details>

<details>
  <summary><strong>🔄 Bubble Sort</strong></summary>

```cpp
for (int i = 0; i < arr.size() - 1; i++) {
    for (int j = 0; j < arr.size() - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
}
```

📌 Fungsi:

- Mengurutkan nilai dalam array secara ascending

🎯 Tujuan:

- Pengurutan data yang efisien dengan algoritma klasik

⚠️ Penting:

- Membandingkan pasangan elemen yang berdekatan dan menukarnya jika mereka dalam urutan yang salah

</details>
