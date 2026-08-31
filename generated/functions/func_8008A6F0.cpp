#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008A6F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8008A6F0;

loc_8008A6F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r31);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008A718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008A724;
    }
}

loc_8008A71C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008A828;
}

loc_8008A724:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008A730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008A73C;
    }
}

loc_8008A734:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008A77C;
}

loc_8008A73C:
{
    r4 = MemoryInline::FlatRead16((r4 + 148));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 0;
    r6 = MemoryInline::FlatRead16((r31 + 8));
    r5 = (r4 * 96);
    r4 = MemoryInline::FlatRead32(r31);
    r5 = (r6 + r5);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r31 + 8));
    MemoryInline::FlatWrite16((r4 + 146), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r4 + 148), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008A77C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 30), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r31 + 30));
    r6 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 8), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 1;
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 10), static_cast<uint16_t>(r6));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 32));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 14), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 36));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 18), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 38));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 22), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r31 + 42));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 26), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r31 + 44));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 30), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r31 + 48));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 34), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 50));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 38), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 34));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 40), r0);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 42), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r31 + 40));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 36u, (r1 + 44), r0);
        MemoryInline::WriteResolved16(guest_range_1, 38u, (r1 + 46), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r31 + 46));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 40u, (r1 + 48), r0);
        MemoryInline::WriteResolved16(guest_range_1, 42u, (r1 + 50), r6);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r31 + 52));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_1, 44u, (r1 + 52), r0);
        MemoryInline::WriteResolved16(guest_range_1, 46u, (r1 + 54), r6);
    }
    ctx->lr = 0x8008A820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008BFE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008A828:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008A6F0 func_8008A6F0 preserves=true fpr_mask=0x00000000
