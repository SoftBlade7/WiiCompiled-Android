#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800754F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800754F0;

loc_800754F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800754FC:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075520;
    }
}

loc_80075518:
{
    r3 = 0;
    goto loc_800756C8;
}

loc_80075520:
{
    r0 = MemoryInline::FlatRead32((r3 + 312));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80075528:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800756C4;
    }
}

loc_8007552C:
{
    r3 = r0;
    r4 = 65536;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = r31;
    r4 = (r4 + 3);
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80075550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 388));
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 312), r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80075560:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075578;
    }
}

loc_80075564:
{
    r0 = MemoryInline::FlatRead32((r31 + 324));
    r3 = 1;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 324), r0);
    goto loc_800756C8;
}

loc_80075578:
{
    r0 = MemoryInline::FlatRead32((r31 + 376));
}

loc_80075580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800755E4;
    }
}

loc_80075584:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r3 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    // inline leaf 0x8004E550 (13 guest instruction(s))
}

loc_inl0_0x8004E550:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x8004E55C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004E568;
    }
}

loc_inl0_0x8004E560:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004E56C;
}

loc_inl0_0x8004E568:
{
    r3 = 0;
}

loc_inl0_0x8004E56C:
{
}

loc_inl0_0x8004E570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004E57C;
    }
}

loc_inl0_0x8004E574:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004E550;
}

loc_inl0_0x8004E57C:
{
    r3 = 0;
}

loc_inl0_cont_8004E550:
{
    // end of inlined leaf 0x8004E550
    r30 = r3;
    r28 = 0;
    r29 = 0;
    goto loc_800755DC;
}

loc_800755A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E4F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r4 = MemoryInline::FlatRead32((r31 + 376));
    r4_addr_2 = (r4 + r29);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_800755C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800755D4;
    }
}

loc_800755CC:
{
    r3 = (r1 + 40);
    ctx->lr = 0x800755D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80052540u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800755D4:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800755DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r30));
}

loc_800755E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800755A4;
    }
}

loc_800755E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 380));
}

loc_800755EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075650;
    }
}

loc_800755F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8004E6A0 (13 guest instruction(s))
}

loc_inl1_0x8004E6A0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl1_0x8004E6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E6B8;
    }
}

loc_inl1_0x8004E6B0:
{
    r3 = (r3 + r0);
    goto loc_inl1_0x8004E6BC;
}

loc_inl1_0x8004E6B8:
{
    r3 = 0;
}

loc_inl1_0x8004E6BC:
{
}

loc_inl1_0x8004E6C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E6CC;
    }
}

loc_inl1_0x8004E6C4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_8004E6A0;
}

loc_inl1_0x8004E6CC:
{
    r3 = 0;
}

loc_inl1_cont_8004E6A0:
{
    // end of inlined leaf 0x8004E6A0
    r30 = r3;
    r28 = 0;
    r29 = 0;
    goto loc_80075648;
}

loc_80075610:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E640u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r4 = MemoryInline::FlatRead32((r31 + 380));
    r4_addr_5 = (r4 + r29);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_80075634:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80075640;
    }
}

loc_80075638:
{
    r3 = (r1 + 36);
    ctx->lr = 0x80075640u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80052620u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80075640:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80075648:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r30));
}

loc_8007564C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80075610;
    }
}

loc_80075650:
{
    r0 = MemoryInline::FlatRead32((r31 + 384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80075658:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800756BC;
    }
}

loc_8007565C:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    // inline leaf 0x8004E7F0 (13 guest instruction(s))
}

loc_inl2_0x8004E7F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_inl2_0x8004E7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004E808;
    }
}

loc_inl2_0x8004E800:
{
    r3 = (r3 + r0);
    goto loc_inl2_0x8004E80C;
}

loc_inl2_0x8004E808:
{
    r3 = 0;
}

loc_inl2_0x8004E80C:
{
}

loc_inl2_0x8004E810:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004E81C;
    }
}

loc_inl2_0x8004E814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl2_cont_8004E7F0;
}

loc_inl2_0x8004E81C:
{
    r3 = 0;
}

loc_inl2_cont_8004E7F0:
{
    // end of inlined leaf 0x8004E7F0
    r30 = r3;
    r28 = 0;
    r29 = 0;
    goto loc_800756B4;
}

loc_8007567C:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E790u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r4 = MemoryInline::FlatRead32((r31 + 384));
    r4_addr_8 = (r4 + r29);
    r4 = MemoryInline::FlatRead32(r4_addr_8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_800756A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800756AC;
    }
}

loc_800756A4:
{
    r3 = (r1 + 32);
    ctx->lr = 0x800756ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80052700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800756AC:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800756B4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r30));
}

loc_800756B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8007567C;
    }
}

loc_800756BC:
{
    r3 = 1;
    goto loc_800756C8;
}

loc_800756C4:
{
    ctx->lr = 0x800756C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80072510u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800756C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x800754F0 func_800754F0 preserves=true fpr_mask=0x00000000
