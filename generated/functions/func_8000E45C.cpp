#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000E45C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000E45C;

loc_8000E45C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8000E468:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r5 = MemoryInline::FlatRead32((r3 + 28));
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r3 + 36), r5);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 52), r6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E4A8;
    }
}

loc_8000E4A4:
{
    MemoryInline::FlatWrite32((r3 + 40), r4);
}

loc_8000E4A8:
{
    r12 = MemoryInline::FlatRead32((r31 + 60));
    r5 = (r31 + 40);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r31 + 28));
    r6 = MemoryInline::FlatRead32((r31 + 72));
    ctr = r12;
    ctx->lr = 0x8000E4C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8000E4C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8000E4D4;
    }
}

loc_8000E4CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_8000E4D4:
{
}

loc_8000E4D8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000E4E4;
    }
}

loc_8000E4DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8000E4E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E4F0;
    }
}

loc_8000E4EC:
{
    goto loc_8000E540;
}

loc_8000E4F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E4FC:
{
    r3 = MemoryInline::FlatRead32((r31 + 40));
    r0 = (r4 + r3);
    MemoryInline::FlatWrite32((r31 + 24), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E53C;
    }
}

loc_8000E50C:
{
    r4 = MemoryInline::FlatRead32((r31 + 28));
    ctr = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E53C;
    }
}

loc_8000E51C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8000E528:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E538;
    }
}

loc_8000E52C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_8000E538:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000E51C;
    }
}

loc_8000E53C:
{
    r3 = 0;
}

loc_8000E540:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000E45C func_8000E45C preserves=true fpr_mask=0x00000000
