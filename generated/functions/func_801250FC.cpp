#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801250FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801250FC;

loc_801250FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80125078u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r30 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8012512C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80125138;
    }
}

loc_80125130:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_80125138:
{
    r3 = r30;
    // inline leaf 0x80127AC0 (16 guest instruction(s))
    r4 = 413663232;
    r5 = 0;
    r0 = (r4 + 36);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 290u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 56), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r3 + 108), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r0);
    MemoryInline::WriteResolved16(guest_range_0, 198u, (r3 + 226), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 206u, (r3 + 234), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 226u, (r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 288u, (r3 + 316), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 278u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 278u, (r3 + 306), r5);
        MemoryInline::WriteResolved16(guest_range_0, 280u, (r3 + 308), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 282u, (r3 + 310), r5);
        MemoryInline::WriteResolved16(guest_range_0, 284u, (r3 + 312), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 286u, (r3 + 314), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x80127AC0
    r5 = 0x802F0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r5 + 16576));
    r3 = r31;
    MemoryInline::FlatWrite32(r30, r4);
    MemoryInline::FlatWriteRam32((r5 + 16576), r30);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801250FC func_801250FC preserves=true fpr_mask=0x00000000
