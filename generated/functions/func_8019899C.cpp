#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019899C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019899C;

loc_8019899C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = (r3 + 60);
    r6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r5 + -1);
    r8 = ~(r0 | r0);
    r12 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = -1;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r7 = MemoryInline::FlatRead16((r3 + 18));
    r11 = MemoryInline::FlatRead32(r3);
    r0 = (r7 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r10 = (r10_rot_0 & 134217727);
    goto loc_80198A34;
}

loc_801989E8:
{
    r29 = (r11 + 16);
    r9 = MemoryInline::FlatRead32((r11 + 4));
    r7 = (r5 + r29);
    r0 = (r7 + -1);
    r7 = (r8 & r0);
    r0 = (r7 - r29);
    r0 = (r4 + r0);
}

loc_80198A08:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r0))) {
        goto loc_80198A30;
    }
}

loc_80198A0C:
{
}

loc_80198A10:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r9))) {
        goto loc_80198A30;
    }
}

loc_80198A14:
{
}

loc_80198A18:
{
    r12 = r11;
    r31 = r9;
    r30 = r7;
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80198A3C;
    }
}

loc_80198A28:
{
}

loc_80198A2C:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r4))) {
        goto loc_80198A3C;
    }
}

loc_80198A30:
{
    r11 = MemoryInline::FlatRead32((r11 + 12));
}

loc_80198A34:
{
}

loc_80198A38:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_801989E8;
    }
}

loc_80198A3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80198A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198A58;
    }
}

loc_80198A44:
{
    r4 = r12;
    r5 = r30;
    r7 = 0;
    ctx->lr = 0x80198A54u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80198A5C;
}

loc_80198A58:
{
    r3 = 0;
}

loc_80198A5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC001FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019899C func_8019899C preserves=true fpr_mask=0x00000000
