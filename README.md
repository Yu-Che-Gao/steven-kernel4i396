## 指令

```sh
nasm -f elf32 kernel.asm -o bin/kasm.o
gcc -m32 -c kernel.c -o bin/kc.o
ld -T link.ld -o bin/kernel bin/kasm.o bin/kc.o -build-id=none
objcopy -O elf32-i386 bin/kernel bin/kernel.elf
qemu-system-i386 -kernel bin/kernel.elf
```