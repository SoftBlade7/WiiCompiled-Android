#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055D448(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8055D448;

loc_8055D448:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r30 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 & 2097152);
}

loc_8055D468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D478;
    }
}

loc_8055D46C:
{
    r0 = (r6 & 67108864);
}

loc_8055D470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D478;
    }
}

loc_8055D474:
{
    r4 = 1;
}

loc_8055D478:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8055D47C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D540;
    }
}

loc_8055D480:
{
    r4 = MemoryInline::FlatRead32((r3 + 68));
    r5 = 16842752;
    r5 = (r5 + 257);
    r31 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r5 & ~r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055D4A0;
    }
}

loc_8055D49C:
{
    r31 = 1;
}

loc_8055D4A0:
{
    r0 = (r6 & 800);
}

loc_8055D4A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D4C0;
    }
}

loc_8055D4A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 72));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = ~(r0 | r0);
    r0 = (r0 & 15);
}

loc_8055D4B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055D4C0;
    }
}

loc_8055D4BC:
{
    r31 = 1;
}

loc_8055D4C0:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8055D4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D540;
    }
}

loc_8055D4D0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    r29 = r30;
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r27 = 0;
}

loc_8055D4E0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    r6 = 0;
    r4 = MemoryInline::FlatRead32(r4);
    ctr = r12;
    ctx->lr = 0x8055D504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_8055D510:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8055D4E0;
    }
}

loc_8055D514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8055D518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D52C;
    }
}

loc_8055D51C:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r0 | 32783);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    goto loc_8055D540;
}

loc_8055D52C:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r3 = (r0 & 32752);
    r0 = (r0 & -65536);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_8055D540:
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
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8055D448 func_8055D448 preserves=true fpr_mask=0x00000000
