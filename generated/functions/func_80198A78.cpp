#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80198A78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_rot_0 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80198A78;

loc_80198A78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (r3 + 60);
    r6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r5 + -1);
    r7 = ~(r0 | r0);
    r11 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r12 = -1;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r5 = MemoryInline::FlatRead16((r3 + 18));
    r10 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 1);
    r5 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r9 = (r9_rot_0 & 134217727);
    goto loc_80198B04;
}

loc_80198AC0:
{
    r8 = MemoryInline::FlatRead32((r10 + 4));
    r31 = (r10 + 16);
    r0 = (r8 + r31);
    r0 = (r0 - r4);
    r30 = (r7 & r0);
    r0 = (r30 - r31);
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80198B00;
    }
}

loc_80198ADC:
{
}

loc_80198AE0:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(r8))) {
        goto loc_80198B00;
    }
}

loc_80198AE4:
{
}

loc_80198AE8:
{
    r11 = r10;
    r12 = r8;
    r5 = r30;
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80198B0C;
    }
}

loc_80198AF8:
{
}

loc_80198AFC:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r4))) {
        goto loc_80198B0C;
    }
}

loc_80198B00:
{
    r10 = MemoryInline::FlatRead32((r10 + 8));
}

loc_80198B04:
{
}

loc_80198B08:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80198AC0;
    }
}

loc_80198B0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_80198B10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198B24;
    }
}

loc_80198B14:
{
    r4 = r11;
    r7 = 1;
    ctx->lr = 0x80198B20u;
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
    InvokeDirectCpu<0x80198798u>(ctx);
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
    xer = ctx->xer;
    goto loc_80198B28;
}

loc_80198B24:
{
    r3 = 0;
}

loc_80198B28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC001FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80198A78 func_80198A78 preserves=true fpr_mask=0x00000000
