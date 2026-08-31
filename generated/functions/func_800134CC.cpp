#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800134CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800134CC;

loc_800134CC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 0;
}

loc_800134D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r0);
    }
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80013500;
    }
}

loc_800134FC:
{
    MemoryInline::FlatWrite32((r13 + -32700), r3);
}

loc_80013500:
{
    r7 = (r4 + -1);
    r5 = (r1 + 8);
    r3 = 1;
    goto loc_8001352C;
}

loc_80013510:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r6 = (r6_rot_2 & 31);
    r0 = (r0 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5_addr_2 = (r5 + r6);
    r4 = MemoryInline::FlatRead8(r5_addr_2);
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    r5_addr_3 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r0));
}

loc_8001352C:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_80013534:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013510;
    }
}

loc_80013538:
{
    r4 = MemoryInline::FlatRead32((r13 + -32700));
    r5 = (r1 + 8);
    r3 = 1;
    r7 = (r4 + -1);
    goto loc_80013568;
}

loc_8001354C:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r4 = (r4_rot_2 & 31);
    r0 = (r6 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5_addr_5 = (r5 + r4);
    r4 = MemoryInline::FlatRead8(r5_addr_5);
    r0 = (r0 & 255);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013574;
    }
}

loc_80013568:
{
    r7 = (r7 + 1);
    r6 = MemoryInline::FlatRead8(r7);
}

loc_80013570:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8001354C;
    }
}

loc_80013574:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80013578:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001358C;
    }
}

loc_8001357C:
{
    r0 = MemoryInline::FlatRead32((r13 + -32704));
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -32700), r0);
    goto loc_800135E8;
}

loc_8001358C:
{
    r3 = r7;
    r6 = (r1 + 8);
    r4 = 1;
    goto loc_800135B8;
}

loc_8001359C:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_2 & 31);
    r0 = (r8 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6_addr_2 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800135C4;
    }
}

loc_800135B8:
{
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead8(r7);
}

loc_800135C0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8001359C;
    }
}

loc_800135C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_800135C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800135D8;
    }
}

loc_800135CC:
{
    r0 = MemoryInline::FlatRead32((r13 + -32704));
    MemoryInline::FlatWrite32((r13 + -32700), r0);
    goto loc_800135E8;
}

loc_800135D8:
{
    r4 = (r7 + 1);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -32700), r4);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
}

loc_800135E8:
{
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

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800134CC func_800134CC preserves=true fpr_mask=0x00000000
