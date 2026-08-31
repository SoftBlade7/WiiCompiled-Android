#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_800BC810;

loc_800BC810:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    // inline leaf 0x800BC420 (7 guest instruction(s))
}

loc_inl0_0x800BC420:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800BC428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800BC434;
    }
}

loc_inl0_0x800BC42C:
{
    r3 = 0;
    goto loc_inl0_cont_800BC420;
}

loc_inl0_0x800BC434:
{
    r3 = (r3 + 192);
}

loc_inl0_cont_800BC420:
{
    // end of inlined leaf 0x800BC420
    r6 = MemoryInline::FlatRead32((r3 + 148));
    r0 = 3;
    r4 = r3;
    r5 = 0;
    r6 = MemoryInline::FlatRead16((r6 + 2));
    MemoryInline::FlatWrite16((r3 + 156), static_cast<uint16_t>(r6));
    ctr = r0;
}

loc_800BC844:
{
    r0 = (r5 + 1);
    r31 = MemoryInline::FlatRead32((r3 + 148));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & -4);
    r9 = (r5 + 2);
    r31_addr_2 = (r31 + r12);
    r0 = MemoryInline::FlatRead32(r31_addr_2);
    r8 = (r5 + 3);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & -4);
    r7 = (r5 + 4);
    r30 = (r31 + r0);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    r11 = MemoryInline::FlatRead16(r30);
    r6 = (r5 + 5);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r11));
    r0 = (r5 + 6);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r11 = MemoryInline::FlatRead16((r30 + 2));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r11));
    r5 = (r5 + 6);
    r31_addr_3 = (r31 + r12);
    r11 = MemoryInline::FlatRead32(r31_addr_3);
    r0 = (r11 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r0);
    r11 = MemoryInline::FlatRead32((r3 + 148));
    r11_addr_2 = (r11 + r10);
    r0 = MemoryInline::FlatRead32(r11_addr_2);
    r12 = (r11 + r0);
    r11_addr_3 = (r11 + r0);
    r0 = MemoryInline::FlatRead16(r11_addr_3);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r12 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), static_cast<uint16_t>(r0));
    r11_addr_4 = (r11 + r10);
    r10 = MemoryInline::FlatRead32(r11_addr_4);
    r0 = (r10 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r0);
    r10 = MemoryInline::FlatRead32((r3 + 148));
    r10_addr_2 = (r10 + r9);
    r0 = MemoryInline::FlatRead32(r10_addr_2);
    r11 = (r10 + r0);
    r10_addr_3 = (r10 + r0);
    r0 = MemoryInline::FlatRead16(r10_addr_3);
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r11 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), static_cast<uint16_t>(r0));
    r10_addr_4 = (r10 + r9);
    r9 = MemoryInline::FlatRead32(r10_addr_4);
    r0 = (r9 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r0);
    r9 = MemoryInline::FlatRead32((r3 + 148));
    r9_addr_2 = (r9 + r8);
    r0 = MemoryInline::FlatRead32(r9_addr_2);
    r10 = (r9 + r0);
    r9_addr_3 = (r9 + r0);
    r0 = MemoryInline::FlatRead16(r9_addr_3);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r10 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), static_cast<uint16_t>(r0));
    r9_addr_4 = (r9 + r8);
    r8 = MemoryInline::FlatRead32(r9_addr_4);
    r0 = (r8 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r0);
    r8 = MemoryInline::FlatRead32((r3 + 148));
    r8_addr_2 = (r8 + r7);
    r0 = MemoryInline::FlatRead32(r8_addr_2);
    r9 = (r8 + r0);
    r8_addr_3 = (r8 + r0);
    r0 = MemoryInline::FlatRead16(r8_addr_3);
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r4 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r9 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r4 + 34), static_cast<uint16_t>(r0));
    r8_addr_4 = (r8 + r7);
    r7 = MemoryInline::FlatRead32(r8_addr_4);
    r0 = (r7 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r0);
    r7 = MemoryInline::FlatRead32((r3 + 148));
    r7_addr_2 = (r7 + r6);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
    r8 = (r7 + r0);
    r7_addr_3 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7_addr_3);
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r4 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r8 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 42u, (r4 + 42), static_cast<uint16_t>(r0));
    r7_addr_4 = (r7 + r6);
    r6 = MemoryInline::FlatRead32(r7_addr_4);
    r0 = (r6 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r0);
    r4 = (r4 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800BC844;
    }
}

loc_800BC970:
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

// RECOMP_GUEST_ABI gpr_read=0xC000200A gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BC810 func_800BC810 preserves=true fpr_mask=0x00000000
