#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BCDC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r30_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805BCDC4;

loc_805BCDC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x809C0000u;
    r4 = 2;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r29 = r3;
    r6 = MemoryInline::FlatRead8((r3 + 5998));
    r0 = MemoryInline::FlatRead8((r3 + 5996));
    r5 = (r6 + -2);
    r7 = MemoryInline::FlatRead32((r7 + -10456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BCDF4:
{
    r4 = (r6 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r31 = (r7 + 6144);
    r0 = (r4 - r0);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30 = (r30_rot_0 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCEA4;
    }
}

loc_805BCE0C:
{
    r28 = 0;
}

loc_805BCE10:
{
    r0 = (r28 & 255);
    r5 = MemoryInline::FlatRead8((r29 + 5996));
    r0 = (r0 * 372);
    r6 = r30;
    r4 = 11;
    r3 = (r29 + r0);
    r3 = (r3 + 1532);
    ctx->lr = 0x805BCE30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BBBD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(12));
}

loc_805BCE38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BCE10;
    }
}

loc_805BCE3C:
{
    r28 = 0;
    goto loc_805BCE90;
}

loc_805BCE44:
{
    r0 = (r28 & 255);
    r0 = (r0 * 240);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 212));
    r3 = MemoryInline::FlatRead8((r3 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BCE5C:
{
    r0 = (r3 + -1);
    r3 = (r0 & 255);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BCE70;
    }
}

loc_805BCE68:
{
    r0 = (r3 + 6);
    r3 = (r0 & 255);
}

loc_805BCE70:
{
    r0 = (r3 * 372);
    r5 = MemoryInline::FlatRead8((r29 + 5996));
    r6 = r30;
    r4 = (r28 & 255);
    r3 = (r29 + r0);
    r3 = (r3 + 1532);
    ctx->lr = 0x805BCE8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BBBD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_805BCE90:
{
    r0 = MemoryInline::FlatRead8((r29 + 5999));
    r3 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805BCE9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BCE44;
    }
}

loc_805BCEA0:
{
    goto loc_805BCF1C;
}

loc_805BCEA4:
{
    r28 = 0;
    goto loc_805BCEDC;
}

loc_805BCEAC:
{
    r4 = (r28 & 255);
    r5 = MemoryInline::FlatRead8((r29 + 5996));
    r0 = (r4 * 240);
    r6 = r30;
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 232));
    r0 = (r3 + -1);
    r0 = (r0 * 372);
    r3 = (r29 + r0);
    r3 = (r3 + 1532);
    ctx->lr = 0x805BCED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BBBD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_805BCEDC:
{
    r27 = MemoryInline::FlatRead8((r29 + 5999));
    r0 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_805BCEE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BCEAC;
    }
}

loc_805BCEEC:
{
    goto loc_805BCF10;
}

loc_805BCEF0:
{
    r4 = (r27 & 255);
    r5 = MemoryInline::FlatRead8((r29 + 5996));
    r0 = (r4 * 372);
    r6 = r30;
    r3 = (r29 + r0);
    r3 = (r3 + 1532);
    ctx->lr = 0x805BCF0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805BBBD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = (r27 + 1);
}

loc_805BCF10:
{
    r0 = (r27 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_805BCF18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BCEF0;
    }
}

loc_805BCF1C:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BCDC4 func_805BCDC4 preserves=true fpr_mask=0x00000000
