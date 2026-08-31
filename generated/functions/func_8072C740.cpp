#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072C740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072C740;

loc_8072C740:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8072C748:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8072C760;
    }
}

loc_8072C74C:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8072C754:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C760;
    }
}

loc_8072C758:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8072C760:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8072C768:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8072C780;
    }
}

loc_8072C76C:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8072C774:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C780;
    }
}

loc_8072C778:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8072C780:
{
    r3 = (r3 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 40u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 12));
}

loc_8072C78C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8072C7A4;
    }
}

loc_8072C790:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8072C798:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C7A4;
    }
}

loc_8072C79C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8072C7A4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 16));
}

loc_8072C7AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8072C7C4;
    }
}

loc_8072C7B0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8072C7B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C7C4;
    }
}

loc_8072C7BC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8072C7C4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 20));
}

loc_8072C7CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8072C7E4;
    }
}

loc_8072C7D0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8072C7D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C7E4;
    }
}

loc_8072C7DC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8072C7E4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8072C7EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C804;
    }
}

loc_8072C7F0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8072C7F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C804;
    }
}

loc_8072C7FC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8072C804:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8072C740 func_8072C740 preserves=true fpr_mask=0x00000000
