#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80013428(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80013428;

loc_80013428:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 0;
    r8 = (r4 + -1);
    r4 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r6 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 32), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r0);
    goto loc_8001347C;
}

loc_80013460:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 31);
    r0 = (r0 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6_addr_2 = (r6 + r7);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    r0 = (r0 & 255);
    r0 = (r5 | r0);
    r6_addr_3 = (r6 + r7);
    MemoryInline::FlatWrite8(r6_addr_3, static_cast<uint8_t>(r0));
}

loc_8001347C:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead8(r8);
}

loc_80013484:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013460;
    }
}

loc_80013488:
{
    r7 = (r3 + -1);
    r6 = (r1 + 8);
    r4 = 1;
    goto loc_800134B4;
}

loc_80013498:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_2 & 31);
    r0 = (r0 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6_addr_5 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_5);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800134C0;
    }
}

loc_800134B4:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800134BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013498;
    }
}

loc_800134C0:
{
    r3 = (r7 - r3);
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80013428 func_80013428 preserves=true fpr_mask=0x00000000
