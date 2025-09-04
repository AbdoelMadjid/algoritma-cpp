#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <fstream>
#include <limits>
#include <numeric>
using namespace std;

// Struktur untuk menyimpan state aplikasi
struct AppState {
    vector<int> arr;
    map<int, int> freq;
};

stack<AppState> undoStack;
stack<AppState> redoStack;

// Fungsi untuk menampilkan nilai
void tampilkanNilai(const vector<int>& arr) {
    cout << "\nNilai yang sudah diinput:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << i + 1 << ": " << arr[i] << endl;
    }
}

// Fungsi untuk menyimpan state ke undo stack
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

// Fungsi untuk rebuild frekuensi dari array
void rebuildFreq(vector<int>& arr, map<int, int>& freq) {
    freq.clear();
    for (int num : arr) {
        freq[num]++;
    }
}

// Fungsi untuk menampilkan statistik
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

// Fungsi untuk menyimpan data ke file
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

// Fungsi untuk mengedit nilai
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

// Fungsi untuk menghapus nilai
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

// Fungsi untuk undo
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

// Fungsi untuk redo
void redo(vector<int>& arr, map<int, int>& freq) {
    if (redoStack.empty()) {
        cout << "Tidak ada operasi yang bisa di-redo!\n";
        return;
    }
    
    // Simpan state sekarang untuk undo
    AppState currentState;
    currentState.arr = arr;
    currentState.freq = freq;
    undoStack.push(currentState);
    
    // Kembalikan state berikutnya
    AppState nextState = redoStack.top();
    arr = nextState.arr;
    freq = nextState.freq;
    redoStack.pop();
    
    cout << "Redo berhasil!\n";
    tampilkanNilai(arr);
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "\n=== MENU UTAMA ===\n";
    cout << "1. Edit nilai\n";
    cout << "2. Hapus nilai\n";
    cout << "3. Tampilkan statistik\n";
    cout << "4. Simpan data ke file\n";
    cout << "5. Undo\n";
    cout << "6. Redo\n";
    cout << "7. Selesai dan sortir\n";
    cout << "Pilihan Anda: ";
}

int main() {
    int n;
    vector<int> arr;
    map<int, int> freq;

    // Input jumlah nilai
    cout << "Masukkan jumlah nilai yang akan diinput: ";
    cin >> n;

    // Validasi input
    if (n <= 0) {
        cout << "Jumlah nilai harus lebih dari 0!";
        return 0;
    }

    // Input nilai-nilai dengan validasi
    cout << "Masukkan " << n << " nilai (1-100, tanpa duplikat):\n";
    for (int i = 0; i < n; ) {
        int num;
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> num;

        // Validasi range
        if (num < 1 || num > 100) {
            cout << "ERROR: Nilai harus antara 1-100!\n";
            continue;
        }

        // Validasi duplikat
        if (freq[num] > 0) {
            cout << "ERROR: Nilai " << num << " sudah diinput sebelumnya!\n";
            continue;
        }

        arr.push_back(num);
        freq[num]++;
        i++;
    }

    // Simpan state awal
    saveState(arr, freq);

    // Menu utama
    int pilihan;
    do {
        tampilkanNilai(arr);
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                editNilai(arr, freq);
                break;
            case 2:
                hapusNilai(arr, freq);
                break;
            case 3:
                tampilkanStatistik(arr);
                break;
            case 4:
                simpanKeFile(arr);
                break;
            case 5:
                undo(arr, freq);
                break;
            case 6:
                redo(arr, freq);
                break;
            case 7:
                cout << "Mengurutkan data...\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 7);

    // Bubble Sort
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Tampilkan hasil sorting
    cout << "\nHasil setelah diurutkan:\n";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}