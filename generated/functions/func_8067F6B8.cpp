#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067F6B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067F6B8;

loc_8067F6B8:
{
    r4 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 264), 0, 152u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 356));
    r6 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = 0x808C0000u;
    r5 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 352));
    r6 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r3 + 412));
    r6 = (r6 - r7);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 268), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 428), r6);
    r4 = MemoryInline::FlatRead32((r4 + 3928));
    r5 = (r5 + r4);
    r4 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    r4 = (r4 * r5);
    r4 = (r6 - r4);
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 428), r4);
}

loc_8067F6F8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8067F714;
    }
}

loc_8067F6FC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8067F704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F708:
{
    r0 = 5;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8067F714:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 408));
}

loc_8067F71C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8067F738;
    }
}

loc_8067F720:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8067F728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F72C:
{
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8067F738:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r3 + 404));
}

loc_8067F740:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8067F75C;
    }
}

loc_8067F744:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8067F74C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F750:
{
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8067F75C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r3 + 400));
}

loc_8067F764:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8067F780;
    }
}

loc_8067F768:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8067F770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F774:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8067F780:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r3 + 396));
}

loc_8067F788:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8067F7A4;
    }
}

loc_8067F78C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8067F794:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F798:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8067F7A4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r3 + 392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8067F7AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F7B0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067F7B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067F7BC:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067F6B8 func_8067F6B8 preserves=true fpr_mask=0x00000000
