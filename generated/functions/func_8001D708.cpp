#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001D708(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001D708;

loc_8001D708:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r27 = r3;
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r13 + -27512));
}

loc_8001D728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001D734;
    }
}

loc_8001D72C:
{
    r30 = r29;
    goto loc_8001D738;
}

loc_8001D734:
{
    r30 = (r1 + 8);
}

loc_8001D738:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r28 = 8;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r31 = 0;
    r0 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_8001D750:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001D75C;
    }
}

loc_8001D754:
{
    r31 = 770;
    r28 = r0;
}

loc_8001D75C:
{
    r4 = (r27 + r4);
    r3 = r30;
    r5 = r28;
    r4 = (r4 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CB6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    r0 = MemoryInline::FlatRead32((r13 + -27512));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001D784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001D7D0;
    }
}

loc_8001D788:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001D78C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001D7D0;
    }
}

loc_8001D790:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 7));
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r29 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r29 + 7), static_cast<uint8_t>(r0));
}

loc_8001D7D0:
{
    r3 = r31;
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FDB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001D708 func_8001D708 preserves=true fpr_mask=0x00000000
