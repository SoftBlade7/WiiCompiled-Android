#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F2300(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800F2300;

loc_800F2300:
{
    MemoryInline::FlatWriteRam32((r1 + -816), r1);
    r1 = (r1 + -816);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 820), r0);
    MemoryInline::FlatWriteRam32((r1 + 812), r31);
    MemoryInline::FlatWriteRam32((r1 + 808), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F2320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F232C;
    }
}

loc_800F2324:
{
    r3 = 0;
    goto loc_800F23DC;
}

loc_800F232C:
{
    r0 = 100;
    r5 = (r1 + 4);
    r4 = (r3 + 12);
    r31 = MemoryInline::FlatRead32((r3 + 4));
    ctr = r0;
}

loc_800F2340:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F2340;
    }
}

loc_800F2354:
{
    r3 = (r1 + 8);
    // inline leaf 0x801A98BC (11 guest instruction(s))
}

loc_inl0_0x801A98BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 712));
    r3 = 1;
}

loc_inl0_0x801A98C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_inl0_0x801A98D8;
    }
}

loc_inl0_0x801A98CC:
{
}

loc_inl0_0x801A98D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x801A98D8;
    }
}

loc_inl0_0x801A98D4:
{
    r3 = 0;
}

loc_inl0_0x801A98D8:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_801A98BC:
{
    // end of inlined leaf 0x801A98BC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F2360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F236C;
    }
}

loc_800F2364:
{
    r3 = (r1 + 8);
    ctx->lr = 0x800F236Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AA1D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F236C:
{
    r3 = MemoryInline::FlatRead32((r1 + 800));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F2374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2398;
    }
}

loc_800F2378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2390;
    }
}

loc_800F237C:
{
    r4 = 0x802F0000u;
    r4 = (r4 + 8552);
    r12 = MemoryInline::FlatRead32((r4 + 4));
    ctr = r12;
    ctx->lr = 0x800F2390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F2390:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 800), r0);
}

loc_800F2398:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F23A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F23B8;
    }
}

loc_800F23A4:
{
    r4 = 0x802F0000u;
    r4 = (r4 + 8552);
    r12 = MemoryInline::FlatRead32((r4 + 4));
    ctr = r12;
    ctx->lr = 0x800F23B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F23B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800F23BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F23D8;
    }
}

loc_800F23C0:
{
    r4 = 0x802F0000u;
    r3 = r30;
    r4 = (r4 + 8552);
    r12 = MemoryInline::FlatRead32((r4 + 4));
    ctr = r12;
    ctx->lr = 0x800F23D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F23D8:
{
    r3 = r31;
}

loc_800F23DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 820));
    r31 = MemoryInline::FlatRead32((r1 + 812));
    r30 = MemoryInline::FlatRead32((r1 + 808));
    ctx->lr = r0;
    r1 = (r1 + 816);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F2300 func_800F2300 preserves=true fpr_mask=0x00000000
