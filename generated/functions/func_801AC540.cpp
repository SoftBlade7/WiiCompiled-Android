#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AC540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AC540;

loc_801AC540:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    MemoryInline::FlatWriteRam32((r1 + 164), r29);
    r29 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 160), r28);
    r28 = r3;
    r3 = (r29 + -14176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019C800u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AC578:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AC5C4;
    }
}

loc_801AC57C:
{
    r30 = 0x80350000u;
    r3 = (r1 + 8);
    r4 = (r30 + -32416);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019B7A4u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(32));
}

loc_801AC5A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC5DC;
    }
}

loc_801AC5A4:
{
    r3 = (r29 + -14176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019B59Cu>(ctx);
    r3 = ctx->gpr[3];
    r3 = r28;
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x801AC5BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_801AC648;
}

loc_801AC5C4:
{
    r3 = r28;
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x801AC5D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_801AC648;
}

loc_801AC5DC:
{
    r4 = (r30 + -32416);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + -32416), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + -32416));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    r5 = (r5 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    r5 = (r5 + r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_801AC61C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC638;
    }
}

loc_801AC620:
{
    r3 = r28;
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x801AC630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_801AC648;
}

loc_801AC638:
{
    r3 = r28;
    r5 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_801AC648:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    r29 = MemoryInline::FlatRead32((r1 + 164));
    r28 = MemoryInline::FlatRead32((r1 + 160));
    ctx->lr = r0;
    r1 = (r1 + 176);
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

// RECOMP_GUEST_ABI gpr_read=0xF00000DB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AC540 func_801AC540 preserves=true fpr_mask=0x00000000
