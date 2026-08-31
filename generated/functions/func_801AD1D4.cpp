#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AD1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AD1D4;

loc_801AD1D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    r31 = r6;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
    r28 = r3;
    r3 = (r1 + 12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    }
    MemoryInline::FlatWrite32(r6, r0);
    ctx->lr = 0x801AD218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B21E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AD21C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AD228;
    }
}

loc_801AD220:
{
    r3 = -1;
    goto loc_801AD288;
}

loc_801AD228:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_801AD230:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r28))) {
        goto loc_801AD240;
    }
}

loc_801AD234:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801AD240:
{
    r3 = r29;
    r4 = r30;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019EAD0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AD254:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AD288;
    }
}

loc_801AD258:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 4);
}

loc_801AD260:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AD270;
    }
}

loc_801AD264:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801AD270:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AD278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AD288;
    }
}

loc_801AD27C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801AD288:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00020FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AD1D4 func_801AD1D4 preserves=true fpr_mask=0x00000000
