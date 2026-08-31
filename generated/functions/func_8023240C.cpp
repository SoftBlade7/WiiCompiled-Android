#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023240C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023240C;

loc_8023240C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r4;
    r4 = r5;
    r5 = r6;
    ctx->lr = 0x80232434u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E4980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80232438:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-9))) {
        goto loc_8023246C;
    }
}

loc_80232440:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-41));
}

loc_80232444:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802324A4;
    }
}

loc_80232448:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80232458;
    }
}

loc_8023244C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-46));
}

loc_80232450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802324A4;
    }
}

loc_80232454:
{
    goto loc_802324CC;
}

loc_80232458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_8023245C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802324CC;
    }
}

loc_80232460:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-21));
}

loc_80232464:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802324A4;
    }
}

loc_80232468:
{
    goto loc_802324CC;
}

loc_8023246C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_80232470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802324B8;
    }
}

loc_80232474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80232484;
    }
}

loc_80232478:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_8023247C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802324CC;
    }
}

loc_80232480:
{
    goto loc_802324B8;
}

loc_80232484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80232488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232490;
    }
}

loc_8023248C:
{
    goto loc_802324CC;
}

loc_80232490:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_802324DC;
}

loc_802324A4:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 8), r31);
    goto loc_802324DC;
}

loc_802324B8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_802324DC;
}

loc_802324CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_802324DC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r0;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023240C func_8023240C preserves=true fpr_mask=0x00000000
