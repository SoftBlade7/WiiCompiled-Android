#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802324F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802324F8;

loc_802324F8:
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
    r6 = r7;
    r7 = r8;
    ctx->lr = 0x80232528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E4AC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023252C:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-9))) {
        goto loc_80232560;
    }
}

loc_80232534:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-41));
}

loc_80232538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232594;
    }
}

loc_8023253C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023254C;
    }
}

loc_80232540:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-46));
}

loc_80232544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232594;
    }
}

loc_80232548:
{
    goto loc_802325BC;
}

loc_8023254C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_80232550:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802325BC;
    }
}

loc_80232554:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-21));
}

loc_80232558:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80232594;
    }
}

loc_8023255C:
{
    goto loc_802325BC;
}

loc_80232560:
{
}

loc_80232564:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-3))) {
        goto loc_80232574;
    }
}

loc_80232568:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_8023256C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802325BC;
    }
}

loc_80232570:
{
    goto loc_802325A8;
}

loc_80232574:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80232578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80232580;
    }
}

loc_8023257C:
{
    goto loc_802325BC;
}

loc_80232580:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_802325CC;
}

loc_80232594:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 8), r31);
    goto loc_802325CC;
}

loc_802325A8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_802325CC;
}

loc_802325BC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_802325CC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802324F8 func_802324F8 preserves=true fpr_mask=0x00000000
