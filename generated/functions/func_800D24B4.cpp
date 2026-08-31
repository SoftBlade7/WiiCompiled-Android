#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D24B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800D24B4;

loc_800D24B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r13 + -26896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D24D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D24DC;
    }
}

loc_800D24D4:
{
    r3 = 0;
    goto loc_800D262C;
}

loc_800D24DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D24E8;
    }
}

loc_800D24E0:
{
    r3 = 0;
    goto loc_800D2538;
}

loc_800D24E8:
{
    r31 = 0x802F0000u;
    r4 = 0;
    r3 = (r31 + 5344);
    r5 = 32;
    ctx->lr = 0x800D24FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r31 + 5344);
    r31 = 0;
    goto loc_800D2520;
}

loc_800D2508:
{
    r3 = r31;
    // inline leaf 0x800E7E6C (10 guest instruction(s))
}

loc_inl0_0x800E7E6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_inl0_0x800E7E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_0x800E7E8C;
    }
}

loc_inl0_0x800E7E7C:
{
    r0 = (r3 * 48);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_inl0_cont_800E7E6C;
}

loc_inl0_0x800E7E8C:
{
    r3 = 0;
}

loc_inl0_cont_800E7E6C:
{
    // end of inlined leaf 0x800E7E6C
    r0 = MemoryInline::FlatRead8((r3 + 22));
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r30 = (r30 + 1);
}

loc_800D2520:
{
    // inline leaf 0x800E7C28 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x800E7C28
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r3));
}

loc_800D2528:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800D2508;
    }
}

loc_800D252C:
{
    r31 = 0x802F0000u;
    r31 = (r31 + 5344);
    // inline leaf 0x800E7C28 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x800E7C28
}

loc_800D2538:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D253C:
{
    r0 = 0;
    r11 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800D2628;
    }
}

loc_800D2548:
{
}

loc_800D254C:
{
    r5 = (r3 + -8);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_800D25FC;
    }
}

loc_800D2554:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800D2570;
    }
}

loc_800D255C:
{
    r4 = 0x80000000u;
    r4 = (r4 + -2);
}

loc_800D2568:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_800D2570;
    }
}

loc_800D256C:
{
    r6 = 1;
}

loc_800D2570:
{
}

loc_800D2574:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800D25FC;
    }
}

loc_800D2578:
{
    r4 = (r5 + 7);
    r10 = 1;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870911);
    ctr = r4;
}

loc_800D258C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_800D25FC;
    }
}

loc_800D2590:
{
    r12 = (r31 + r11);
    r31_addr_2 = (r31 + r11);
    r4 = MemoryInline::FlatRead8(r31_addr_2);
    r5 = MemoryInline::FlatRead8((r12 + 1));
    r11 = (r11 + 8);
    r6 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead8((r12 + 2));
    r8 = MemoryInline::FlatRead8((r12 + 3));
    r0 = (r0 | r6);
    r5 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r5));
    r7 = MemoryInline::FlatRead8((r12 + 4));
    r0 = (r0 | r5);
    r9 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
    r6 = MemoryInline::FlatRead8((r12 + 5));
    r0 = (r0 | r9);
    r8 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r8));
    r5 = MemoryInline::FlatRead8((r12 + 6));
    r4 = MemoryInline::FlatRead8((r12 + 7));
    r7 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r7));
    r0 = (r0 | r8);
    r6 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r6));
    r0 = (r0 | r7);
    r5 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r5));
    r0 = (r0 | r6);
    r4 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
    r0 = (r0 | r5);
    r0 = (r0 | r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D2590;
    }
}

loc_800D25FC:
{
    r4 = (r3 - r11);
    r5 = (r31 + r11);
    r6 = 1;
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r3));
}

loc_800D2610:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2628;
    }
}

loc_800D2614:
{
    r3 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    r3 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    r0 = (r0 | r3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D2614;
    }
}

loc_800D2628:
{
    r3 = r0;
}

loc_800D262C:
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D24B4 func_800D24B4 preserves=true fpr_mask=0x00000000
