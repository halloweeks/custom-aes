# Custom AES-128 CBC Encryption Algorithm

This is a modified version of the AES-128 CBC encryption algorithm, designed to meet specific security and convenience requirements. In this custom implementation, encryption and decryption are possible without requiring an Initialization Vector (IV). Instead, the IV is dynamically generated from the last round key during the decryption process.

## Features

- **No Padding:** This custom algorithm does not support padding for data that doesn't fit into complete 16-byte blocks. Data must be preprocessed to ensure it aligns with the block size.

- **Simplified Use:** When data is prepared in 16-byte blocks, this algorithm provides a straightforward means to encrypt and decrypt it without the need for external IV management.

- **Security:** The data is divided into 16-byte blocks, and each block is XORed with the previous ciphertext block before being encrypted with the 128-bit key. This results in secure data that can only be decrypted using this custom algorithm.

## Usage

To encrypt data:

```c
EncryptData(data, size, key);
```

To decrypt data:

```c
DecryptData(data, size, key);
```

Output is returned in the same memory location as the input data.

**Note:** Data encrypted with this custom algorithm cannot be decrypted using the standard AES-128 decryption process, making it suitable for specific security requirements where traditional AES encryption may not suffice.
