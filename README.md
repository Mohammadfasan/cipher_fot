# Cipher_FOT 🔐

A cryptographic implementation using circular queue data structure for encryption and decryption operations. This assignment project demonstrates practical application of data structures in cryptography.

## 📋 Project Structure

```
cipher_fot/
├── queue.h          # Circular queue implementation and functions
├── main.c           # Program entry point with encrypt/decrypt functions
└── README.md        # Project documentation
```

## 🚀 Features

- **Circular Queue Implementation**: Efficient memory usage with FIFO operations
- **Encryption Function**: Transforms plain text to cipher text
- **Decryption Function**: Recovers original text from cipher text
- **Uppercase Support**: Currently supports uppercase letters only

## 🛠️ Technical Details

### Data Structures
- **Circular Queue**: Used as the underlying data structure for cryptographic operations
- **Array-based Implementation**: Efficient memory management

### Functions in `queue.h`
- Queue initialization and management
- Enqueue and dequeue operations
- Queue status checks (full, empty)
- Circular buffer handling

### Functions in `main.c`
- `encrypt()`: Converts plaintext to ciphertext
- `decrypt()`: Recovers plaintext from ciphertext
- Main program with user interface

## 📝 Usage

### Prerequisites
- C compiler (GCC recommended)
- Standard C library

### Compilation
```bash
gcc -o cipher_fot main.c
```

### Execution
```bash
./cipher_fot
```

## ⚠️ Limitations

- Currently supports **UPPERCASE letters only**
- Limited character set (A-Z)
- No special characters or numbers
- No space handling in current version

## 🔧 Future Enhancements

- [ ] Add lowercase support
- [ ] Include numbers and special characters
- [ ] Space and punctuation handling
- [ ] File encryption/decryption
- [ ] Key-based encryption
- [ ] GUI interface

## 📚 Academic Context

This project is part of Programming II assignment focusing on:
- Data structures implementation
- Algorithm design
- Cryptographic concepts
- C programming best practices

## 👨‍💻 Development

### Code Style
- Modular design
- Comprehensive comments
- Error handling
- Memory efficiency

### Testing
Test with various uppercase inputs to verify encryption/decryption cycle:

**Example:**
```
Input: HELLO
Encrypted: [cipher text]
Decrypted: HELLO
```

## 📄 License

Academic Project - Programming II Assignment

---

*Note: This implementation is for educational purposes and should not be used for securing sensitive information.*
