#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022E7BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8022E7BC;

loc_8022E7BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x802A0000u;
    r5 = 120;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 12688);
    r0 = 32;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), static_cast<uint16_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r31);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r31);
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r31);
    r3 = 128;
    ctx->lr = 0x8022E810u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    r4 = 0;
    ctr = r0;
}

loc_8022E820:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 8), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_2, r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 4), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 16), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 20), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 24), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    r4 = (r4 + 32);
    MemoryInline::FlatWrite32((r3 + 28), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_3, r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 4), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 12), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 16), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 20), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 24), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 8));
    r3 = (r0 + r4);
    r4 = (r4 + 32);
    MemoryInline::FlatWrite32((r3 + 28), r31);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022E820;
    }
}

loc_8022E8E4:
{
    r0 = MemoryInline::FlatRead16((r30 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    ctx->lr = 0x8022E8F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 24), r3);
    r6 = 0;
    r5 = 0;
    r4 = 0;
    goto loc_8022E914;
}

loc_8022E904:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r6 = (r6 + 1);
    r3_addr_5 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_5, r4);
    r5 = (r5 + 4);
}

loc_8022E914:
{
    r0 = MemoryInline::FlatRead16((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8022E91C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022E904;
    }
}

loc_8022E920:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8022E7BC func_8022E7BC preserves=true fpr_mask=0x00000000
