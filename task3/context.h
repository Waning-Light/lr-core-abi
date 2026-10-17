/* 要求：完整保存程序执行所需上下文；切回后调用者应能继续往下执行。 */
#ifndef CONTEXT_H
#define CONTEXT_H

typedef struct {
    unsigned long rbx;
    unsigned long rbp;
    unsigned long r12;
    unsigned long r13;
    unsigned long r14;
    unsigned long r15;
    unsigned long rsp;  
    unsigned long rip;  
} context_t;

int set_ctx(context_t *ctx);
void jmp_to(context_t *ctx, int val);

#endif