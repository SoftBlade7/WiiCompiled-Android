#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ADB60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800ADB60;

loc_800ADB60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r5 = (r7 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = (r7 + r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead8((r4 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 16));
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
    r4 = r3;
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead8((r3 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r5 = (r5 + 8);
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
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 20u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r31, r0);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(257));
}

loc_800ADC20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800ADC40;
    }
}

loc_800ADC24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 11), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f0.d);
    goto loc_800ADC58;
}

loc_800ADC40:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27896));
    r3 = 64;
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f0.d);
}

loc_800ADC58:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = 1;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007E gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ADB60 func_800ADB60 preserves=true fpr_mask=0x00000000
