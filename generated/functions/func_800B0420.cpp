#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B0420(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B0420;

loc_800B0420:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r8 = MemoryInline::FlatRead32((r3 + 24));
    r9 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r8 + r5);
    r5 = (r5 + 31);
    r0 = (r9 + 31);
    r5 = (r5 & -32);
    r0 = (r0 & -32);
}

loc_800B0460:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_800B0470;
    }
}

loc_800B0464:
{
    r5 = (r9 - r8);
    r0 = (r5 + 31);
    r30 = (r0 & -32);
}

loc_800B0470:
{
    r11 = MemoryInline::FlatRead32((r3 + 24));
    r9 = 1;
    r10 = MemoryInline::FlatRead32((r3 + 20));
    r5 = r30;
    r8 = (r11 + r30);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    r6 = (r8 + 31);
    r0 = (r10 + 31);
    r6 = (r6 & -32);
    MemoryInline::FlatWrite32((r3 + 16), r7);
    r0 = (r0 & -32);
}

loc_800B04A0:
{
    MemoryInline::FlatWrite8((r3 + 108), static_cast<uint8_t>(r9));
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r0))) {
        goto loc_800B04B4;
    }
}

loc_800B04A8:
{
    r5 = (r10 - r11);
    r0 = (r5 + 31);
    r5 = (r0 & -32);
}

loc_800B04B4:
{
    r8 = MemoryInline::FlatRead32((r3 + 104));
    r7 = 0x800B0000u;
    r6 = r11;
    r3 = (r3 + 40);
    r7 = (r7 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8015E74Cu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r29 = (r29_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800B04D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B04EC;
    }
}

loc_800B04DC:
{
    r4 = r30;
    r3 = (r31 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AFF10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800B04F4;
}

loc_800B04EC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 108), static_cast<uint8_t>(r0));
}

loc_800B04F4:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000FFB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B0420 func_800B0420 preserves=true fpr_mask=0x00000000
