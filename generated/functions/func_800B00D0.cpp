#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B00D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B00D0;

loc_800B00D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80270000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 19520);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 111u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r3 + 108), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 109u, (r3 + 109), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 110u, (r3 + 110), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r6);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r6);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r3);
}

loc_800B0138:
{
    r3 = r4;
    r4 = (r31 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015E254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800B0148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B0174;
    }
}

loc_800B014C:
{
    r0 = MemoryInline::FlatRead32((r31 + 92));
    r3 = (r31 + 20);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AFFD0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 110), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
}

loc_800B0174:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800020BB gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B00D0 func_800B00D0 preserves=true fpr_mask=0x00000000
