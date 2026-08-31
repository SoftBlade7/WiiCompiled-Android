#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F13EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_801F13EC;

loc_801F13EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r4 + 18));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1420;
    }
}

loc_801F1414:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F141C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1508;
    }
}

loc_801F1420:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r4 + 8));
    ctr = r12;
    ctx->lr = 0x801F1434u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1438:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1458;
    }
}

loc_801F1440:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1450;
    }
}

loc_801F144C:
{
    // inline leaf 0x801F3EAC (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    // end of inlined leaf 0x801F3EAC
}

loc_801F1450:
{
    r3 = 21;
    goto loc_801F1518;
}

loc_801F1458:
{
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r3 = r30;
    r4 = (r31 + 24);
    r12 = MemoryInline::FlatRead32((r5 + 28));
    ctr = r12;
    ctx->lr = 0x801F1470u;
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

loc_801F1474:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F14A8;
    }
}

loc_801F147C:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F148C;
    }
}

loc_801F1488:
{
    // inline leaf 0x801F3EAC (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    // end of inlined leaf 0x801F3EAC
}

loc_801F148C:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r4 + 12));
    ctr = r12;
    ctx->lr = 0x801F14A0u;
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
    r3 = 21;
    goto loc_801F1518;
}

loc_801F14A8:
{
    r0 = MemoryInline::FlatRead16((r31 + 32));
    r0 = (r0 & 511);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F14B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F14D0;
    }
}

loc_801F14B4:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r4 + 12));
    ctr = r12;
    ctx->lr = 0x801F14C8u;
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
    r3 = 22;
    goto loc_801F1518;
}

loc_801F14D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F14D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F14EC;
    }
}

loc_801F14DC:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801F14F8;
}

loc_801F14EC:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F14F8:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 2);
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F1508:
{
    r4 = MemoryInline::FlatRead16((r31 + 18));
    r3 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
}

loc_801F1518:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F13EC func_801F13EC preserves=true fpr_mask=0x00000000
