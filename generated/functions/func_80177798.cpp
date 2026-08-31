#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80177798(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80177798;

loc_80177798:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 492), r31);
    MemoryInline::FlatWrite32((r3 + 516), r31);
    r3 = (r3 + 524);
    ctx->lr = 0x801777D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80181520u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 1;
    r0 = -1;
    r5 = 30;
    r3 = 2;
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 1484u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 1032u, (r28 + 1032), r31);
    r29 = 0;
    r30 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1036u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1036u, (r28 + 1036), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1040u, (r28 + 1040), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 1045u, (r28 + 1045), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1046u, (r28 + 1046), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1047u, (r28 + 1047), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1044u, (r28 + 1044), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 1480u, (r28 + 1480), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r28 + 16), r3);
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r28 + 180), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r28 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r28 + 24), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r28, r31);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r28 + 100), r31);
    MemoryInline::WriteResolved8(guest_range_0, 138u, (r28 + 138), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r28 + 104), r31);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r28 + 108), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r28 + 112), r31);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r28 + 116), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 139u, (r28 + 139), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r28 + 140), static_cast<uint8_t>(r31));
}

loc_8017783C:
{
    r3 = (r28 + r30);
    r3 = (r3 + 1048);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r3 = (r28 + r30);
    r3 = (r3 + 1240);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r29 = (r29 + 1);
    r30 = (r30 + 48);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_80177860:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017783C;
    }
}

loc_80177864:
{
    r3 = (r28 + 1432);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r3 = 0x80340000u;
    r3 = (r3 + 18776);
    ctx->lr = 0x80177878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r28;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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

// RECOMP_GUEST_ABI gpr_read=0xF00000DF gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80177798 func_80177798 preserves=true fpr_mask=0x00000000
