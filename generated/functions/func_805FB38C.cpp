#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FB38C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805FB38C;

loc_805FB38C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r7 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r7 = (r7 + -24800);
    r0 = 9;
    r9 = (r1 + 4);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r8 = (r7 + -4);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    ctr = r0;
}

loc_805FB3B8:
{
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r8 = (r8 + 8);
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r9 + 4), r7);
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FB3B8;
    }
}

loc_805FB3CC:
{
    r7 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 156));
    r7 = MemoryInline::FlatRead32((r7 + 7736));
    r9 = (r1 + 8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r8 = MemoryInline::FlatRead32((r6 + 168));
    r7 = MemoryInline::FlatRead32(r7);
    r10 = (r0 * 36);
    r0 = MemoryInline::FlatRead8((r7 + 911));
    r8 = (r8 * 12);
    r7 = (r9 + r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FB3FC:
{
    r8_addr_0 = (r8 + r7);
    r10 = MemoryInline::FlatRead32(r8_addr_0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FB45C;
    }
}

loc_805FB404:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r7 = 0x80890000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r8 = (r8_rot_0 & -16);
    r5 = 0x809C0000u;
    r31 = (r3 + r0);
    r7 = (r7 + 25352);
    r9 = (r7 + r8);
    r3 = MemoryInline::FlatRead32((r5 + 11760));
    r5 = r6;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r30 = (r4 * 36);
    r7 = MemoryInline::FlatRead32((r9 + 8));
    r8 = MemoryInline::FlatRead32((r9 + 4));
    r6 = r10;
    r9 = MemoryInline::FlatRead8((r9 + 12));
    r4 = (r0 + r30);
    ctx->lr = 0x805FB448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80781290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 1;
    r3 = (r0 + r30);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r4));
    goto loc_805FB4B4;
}

loc_805FB45C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r7 = 0x80890000u;
    r9 = (r3 + r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r5 = (r5_rot_1 & -16);
    r11 = (r4 * 36);
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r7 = (r7 + 25352);
    r4 = 0;
    r3 = (r0 + r11);
    r7 = (r7 + r5);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r4));
    r3 = 0x809C0000u;
    r5 = r6;
    r6 = r10;
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r8 = MemoryInline::FlatRead32((r7 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 11760));
    r4 = (r0 + r11);
    r9 = MemoryInline::FlatRead32((r7 + 4));
    r10 = MemoryInline::FlatRead8((r7 + 12));
    r7 = (r4 + 32);
    ctx->lr = 0x805FB4B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078235Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
}

loc_805FB4B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF9FE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FB38C func_805FB38C preserves=true fpr_mask=0x00000000
