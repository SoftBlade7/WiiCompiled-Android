#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F62D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F62D4;

loc_801F62D4:
{
    r7 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801F62DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F62F0;
    }
}

loc_801F62E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801F62F0:
{
}

loc_801F62F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801F6300;
    }
}

loc_801F62F8:
{
    r6 = 0;
    goto loc_801F6308;
}

loc_801F6300:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r6 = MemoryInline::FlatRead32((r5 + 612));
}

loc_801F6308:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 52u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, r6);
    r0 = (r5 + -1);
    r0 = (r7 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6364;
    }
}

loc_801F6318:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 6));
    r7 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r5 + -1);
    r0 = (r7 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6364;
    }
}

loc_801F632C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801F6330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801F6334:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r6 + 33));
    r5 = (r7 + -1);
    r4 = (r4 + -1);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r6 + 48));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r6 + 33));
    r4 = (r4 - r5);
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801F6364:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r6 + 33));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r6 + 48));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r6 + 33));
    r4 = (r4 - r5);
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F62D4 func_801F62D4 preserves=true fpr_mask=0x00000000
