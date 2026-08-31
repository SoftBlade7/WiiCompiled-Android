#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AE3BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805AE3BC;

loc_805AE3BC:
{
    r6 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805AE3C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805AE3C8:
{
    r0 = (r4 * 28);
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9456));
    r5 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 22u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r5 + 15));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 20), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r5 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 24), f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r5 + 24));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r5 + 25));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 32), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 33), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 40), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000058 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AE3BC func_805AE3BC preserves=true fpr_mask=0x00000000
