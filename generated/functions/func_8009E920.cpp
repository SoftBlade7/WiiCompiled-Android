#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009E920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009E920;

loc_8009E920:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = MemoryInline::FlatRead32((r3 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    r5 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead8(r6);
    r4 = MemoryInline::FlatRead32((r6 + 4));
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
}

loc_8009E95C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8009E968;
    }
}

loc_8009E960:
{
    r3 = 0;
    goto loc_8009E9B8;
}

loc_8009E968:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8009E970:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_8009E97C;
    }
}

loc_8009E974:
{
    r3 = 0;
    goto loc_8009E9B8;
}

loc_8009E97C:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
}

loc_8009E984:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(257))) {
        goto loc_8009E9A4;
    }
}

loc_8009E988:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r5 = MemoryInline::FlatRead32((r29 + 40));
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
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
    goto loc_8009E9B8;
}

loc_8009E9A4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r0 = MemoryInline::FlatRead32((r29 + 40));
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + r0);
}

loc_8009E9B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009E9BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009E9C8;
    }
}

loc_8009E9C0:
{
    r3 = 0;
    goto loc_8009EA2C;
}

loc_8009E9C8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 39u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r31, r0);
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 4), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(258));
}

loc_8009E9E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r3 + 42));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 8), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 21));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 12), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 16), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 23));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009EA18;
    }
}

loc_8009EA04:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r3 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 24), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r3 + 41));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 28), r0);
    goto loc_8009EA28;
}

loc_8009EA18:
{
    r3 = 1;
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 28), r0);
    }
}

loc_8009EA28:
{
    r3 = 1;
}

loc_8009EA2C:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009E920 func_8009E920 preserves=true fpr_mask=0x00000000
