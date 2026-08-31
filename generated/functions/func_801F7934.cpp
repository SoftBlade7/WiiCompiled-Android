#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F7934(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F7934;

loc_801F7934:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F7938:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7944;
    }
}

loc_801F793C:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_801F7944:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F7948:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7954;
    }
}

loc_801F794C:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_801F7954:
{
    r0 = MemoryInline::FlatRead16((r3 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F795C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7968;
    }
}

loc_801F7960:
{
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_801F7968:
{
    r8 = 0;
    r9 = 92;
    r7 = 16;
    r6 = 3;
    r5 = 1;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 574u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 556u, (r4 + 556), r3);
    r3 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r4, r9);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), r8);
    }
    MemoryInline::WriteResolved8(guest_range_0, 522u, (r4 + 522), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 523u, (r4 + 523), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 524u, (r4 + 524), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 526u, (r4 + 526), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 527u, (r4 + 527), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 539u, (r4 + 539), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 540u, (r4 + 540), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 541u, (r4 + 541), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 542u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_0, 542u, (r4 + 542), r8);
        MemoryInline::WriteResolved16(guest_range_0, 544u, (r4 + 544), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 546u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_0, 546u, (r4 + 546), r8);
        MemoryInline::WriteResolved16(guest_range_0, 548u, (r4 + 548), r8);
    }
    MemoryInline::WriteResolved16(guest_range_0, 550u, (r4 + 550), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 552u, (r4 + 552), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 560u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 560u, (r4 + 560), r6);
        MemoryInline::WriteResolved32(guest_range_0, 564u, (r4 + 564), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 568u, (r4 + 568), r0);
    MemoryInline::WriteResolved16(guest_range_0, 572u, (r4 + 572), static_cast<uint16_t>(r8));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F7934 func_801F7934 preserves=true fpr_mask=0x00000000
