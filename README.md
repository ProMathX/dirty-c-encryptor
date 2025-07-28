This is a basic XOR encrypter in C

It takes a string from the user -> computes a simple hash(while looping the sum of the ASCII characters in the key)
-> XORS every character from hash -> outputs the result


```c
5 ^3  = 6

```

```sh
./bin/encrypter mykey < src/asset/secret > src/asset/encryptedsecret

```
