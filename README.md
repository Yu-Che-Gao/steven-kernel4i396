## 指令

```sh
nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding -nostdlib -nostdinc
ld -T link.ld -o kernel kasm.o kc.o -build-id=none
objcopy -O elf32-i386 kernel kernel.elf
qemu-system-i386 -kernel kernel.elf
```