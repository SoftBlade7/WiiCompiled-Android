#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A4EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A4EA0;

loc_800A4EA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r5 = (r5 + 8);
    r3 = MemoryInline::FlatRead8(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
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
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 52u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800A4ECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A4EE4;
    }
}

loc_800A4ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800A4ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A4EEC;
    }
}

loc_800A4ED8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A4EDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A4EF4;
    }
}

loc_800A4EE0:
{
    goto loc_800A4EFC;
}

loc_800A4EE4:
{
    r0 = 3;
    goto loc_800A4F00;
}

loc_800A4EEC:
{
    r0 = 1;
    goto loc_800A4F00;
}

loc_800A4EF4:
{
    r0 = 2;
    goto loc_800A4F00;
}

loc_800A4EFC:
{
    r0 = 3;
}

loc_800A4F00:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r31, r0);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 8), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_0 & -65536);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r31 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r31 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r31 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r31 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r31 + 52), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r31 + 56), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
    r3 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r31 + 60), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A4EA0 func_800A4EA0 preserves=true fpr_mask=0x00000000
