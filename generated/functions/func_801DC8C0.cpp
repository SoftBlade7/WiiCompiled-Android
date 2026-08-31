#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DC8C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801DC8C0;

loc_801DC8C0:
{
    r6 = MemoryInline::FlatRead32((r13 + -24392));
    r3 = MemoryInline::FlatRead32(r6);
    r0 = (r3 + -1466105856);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(17254));
}

loc_801DC8D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DC8DC;
    }
}

loc_801DC8D4:
{
    r3 = -14;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801DC8DC:
{
    r0 = 31;
    r4 = r6;
    r5 = 0;
    ctr = r0;
}

loc_801DC8EC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    r5 = (r5 + r3);
    r4 = (r4 + 32);
    r5 = (r5 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DC8EC;
    }
}

loc_801DC934:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 24));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 1020));
    r5 = (r5 + r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_801DC974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DC980;
    }
}

loc_801DC978:
{
    r3 = -14;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801DC980:
{
    r0 = MemoryInline::FlatRead32((r6 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32));
}

loc_801DC988:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DC994;
    }
}

loc_801DC98C:
{
    r3 = -14;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801DC994:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801DC9A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801DC9A4:
{
    r3 = -27;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002040 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DC8C0 func_801DC8C0 preserves=true fpr_mask=0x00000000
