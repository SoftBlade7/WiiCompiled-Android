#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B1DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800B1DA0;

loc_800B1DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    r4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x800B1DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800B1DDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B1DE4;
    }
}

loc_800B1DE0:
{
    goto loc_800B1DE8;
}

loc_800B1DE4:
{
    r31 = MemoryInline::FlatRead16((r29 + 24));
}

loc_800B1DE8:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800B1DEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1E00;
    }
}

loc_800B1DF0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    goto loc_800B1E10;
}

loc_800B1E00:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_800B1E10:
{
    r3 = (r1 + 8);
    r4 = (r1 + 24);
    r5 = (r1 + 20);
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    ctx->lr = 0x800B1E28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A63A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 20u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r0);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 4), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 8), r4);
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 30));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r30 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 32));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r30 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r30 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r30 + 18), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B1DA0 func_800B1DA0 preserves=true fpr_mask=0x00000000
