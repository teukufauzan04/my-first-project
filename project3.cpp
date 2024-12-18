#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengenkripsi teks menggunakan Caesar Cipher
string encrypt(string text, int shift) {
    string result = "";
    
    // Iterasi setiap karakter dalam teks
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];
        
        // Enkripsi untuk huruf kapital
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Enkripsi untuk huruf kecil
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + shift) % 26) + 'a';
        }
        
        result += ch;
    }
    
    return result;
}

// Fungsi untuk mendekripsi teks menggunakan Caesar Cipher
string decrypt(string text, int shift) {
    string result = "";
    
    // Iterasi setiap karakter dalam teks
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];
        
        // Dekripsi untuk huruf kapital
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - shift + 26) % 26) + 'A';
        }
        // Dekripsi untuk huruf kecil
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - shift + 26) % 26) + 'a';
        }
        
        result += ch;
    }
    
    return result;
}

int main() {
    string text;
    int shift;
    
    // Input teks dan jumlah pergeseran
    cout << "Masukkan teks untuk enkripsi: ";
    getline(cin, text);
    
    cout << "Masukkan jumlah pergeseran: ";
    cin >> shift;
    
    // Enkripsi
    string encryptedText = encrypt(text, shift);
    cout << "Teks yang dienkripsi: " << encryptedText << endl;
    
    // Dekripsi
    string decryptedText = decrypt(encryptedText, shift);
    cout << "Teks yang didekripsi: " << decryptedText << endl;
    
    return 0;
}

