#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A4FB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A4FB0;

loc_800A4FB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    r5 = (r6 + 8);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead8((r6 + 16));
    r4 = MemoryInline::FlatRead32((r6 + 20));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
}

loc_inl0_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x800AD0C0;
    }
}

loc_inl0_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_800A4FF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A4FFC;
    }
}

loc_800A4FF4:
{
    r3 = 0;
    goto loc_800A5254;
}

loc_800A4FFC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_800A5004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A5014;
    }
}

loc_800A5008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800A500C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A5134;
    }
}

loc_800A5010:
{
    goto loc_800A5250;
}

loc_800A5014:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r6 = (r3 + r0);
    r5 = (r4 + 8);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r4 = MemoryInline::FlatRead32((r6 + 8));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl1_0x800AD0B0:
{
}

loc_inl1_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x800AD0C0;
    }
}

loc_inl1_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A5034:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5040;
    }
}

loc_800A5038:
{
    r3 = 0;
    goto loc_800A5254;
}

loc_800A5040:
{
    r4 = 127;
    r0 = 64;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r4));
    r5 = 32;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_800A5060:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800A5068;
    }
}

loc_800A5064:
{
    r5 = r0;
}

loc_800A5068:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800A506C:
{
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800A5250;
    }
}

loc_800A5074:
{
}

loc_800A5078:
{
    r6 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_800A5108;
    }
}

loc_800A5080:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800A509C;
    }
}

loc_800A5088:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_800A5094:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_800A509C;
    }
}

loc_800A5098:
{
    r7 = 1;
}

loc_800A509C:
{
}

loc_800A50A0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800A5108;
    }
}

loc_800A50A4:
{
    r0 = (r6 + 7);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    ctr = r0;
}

loc_800A50B4:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_800A5108;
    }
}

loc_800A50B8:
{
    r4 = (r3 + r8);
    r6 = (r31 + r8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r8 = (r8 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r6 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r6 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r6 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r6 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r6 + 15), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A50B8;
    }
}

loc_800A5108:
{
    r0 = (r5 - r8);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r5));
}

loc_800A5114:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A5250;
    }
}

loc_800A5118:
{
    r5 = (r3 + r8);
    r4 = (r31 + r8);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A5118;
    }
}

loc_800A5130:
{
    goto loc_800A5250;
}

loc_800A5134:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r6 = (r3 + r0);
    r5 = (r4 + 8);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r4 = MemoryInline::FlatRead32((r6 + 8));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl2_0x800AD0B0:
{
}

loc_inl2_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x800AD0C0;
    }
}

loc_inl2_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl2_cont_800AD0B0;
}

loc_inl2_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl2_cont_800AD0B0;
}

loc_inl2_return:
{
}

loc_inl2_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A5154:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5160;
    }
}

loc_800A5158:
{
    r3 = 0;
    goto loc_800A5254;
}

loc_800A5160:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 32;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_800A5180:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800A5188;
    }
}

loc_800A5184:
{
    r5 = r0;
}

loc_800A5188:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800A518C:
{
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800A5250;
    }
}

loc_800A5194:
{
}

loc_800A5198:
{
    r6 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_800A5228;
    }
}

loc_800A51A0:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800A51BC;
    }
}

loc_800A51A8:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_800A51B4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_800A51BC;
    }
}

loc_800A51B8:
{
    r7 = 1;
}

loc_800A51BC:
{
}

loc_800A51C0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800A5228;
    }
}

loc_800A51C4:
{
    r0 = (r6 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_800A51D4:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_800A5228;
    }
}

loc_800A51D8:
{
    r4 = (r3 + r8);
    r6 = (r31 + r8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 9), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r4 + 9));
    r8 = (r8 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r6 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r6 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r6 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r6 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r4 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r6 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r4 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r6 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r6 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r4 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r6 + 15), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A51D8;
    }
}

loc_800A5228:
{
    r0 = (r5 - r8);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r5));
}

loc_800A5234:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A5250;
    }
}

loc_800A5238:
{
    r5 = (r3 + r8);
    r4 = (r31 + r8);
    r0 = MemoryInline::FlatRead8((r5 + 9));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A5238;
    }
}

loc_800A5250:
{
    r3 = 1;
}

loc_800A5254:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A4FB0 func_800A4FB0 preserves=true fpr_mask=0x00000000
