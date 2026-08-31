#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CE7A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CE7A8;

loc_800CE7A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -26928), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 48), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 52), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 56), r7);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 60), r8);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 64), r9);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite32((r3 + 68), r10);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    MemoryInline::FlatWrite32(r3, r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CE814:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CE824;
    }
}

loc_800CE818:
{
    r3 = MemoryInline::FlatRead8((r4 + 35));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 35), static_cast<uint8_t>(r0));
}

loc_800CE824:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -26928));
    r3 = MemoryInline::FlatRead8((r4 + 35));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 35), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027F9 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CE7A8 func_800CE7A8 preserves=true fpr_mask=0x00000000
