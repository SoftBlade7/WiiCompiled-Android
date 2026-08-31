#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80015AB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_80015AB4;

loc_80015AB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80015ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80015AC8;
    }
}

loc_80015AC0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80015AC8:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80015AD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015AF4;
    }
}

loc_80015ADC:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80015AE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015AF4;
    }
}

loc_80015AEC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_80015AF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015B04;
    }
}

loc_80015AF4:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80015BD0;
}

loc_80015B04:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015B0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015BD0;
    }
}

loc_80015B10:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80015BD0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    r3 = (r31 + 2);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 12));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 20));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 52));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80015AB4 func_80015AB4 preserves=true fpr_mask=0x00000000
