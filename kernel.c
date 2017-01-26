#include "lib/keyboard.c"

void kmain(void)
{
    const char *str = "Welcome to Steven Kernel";
    clear_screen();
    kprint(str);
    kprint_newline();
    kprint_newline();

    idt_init();
    kb_init();

    while (1);
}