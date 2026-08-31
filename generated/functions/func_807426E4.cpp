#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807426E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807426E4;

loc_807426E4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = 0;
    r6 = r3;
    r8 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r5 = (r1 + 8);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 48), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 52), r0);
    goto loc_80742750;
}

loc_8074272C:
{
    r7 = MemoryInline::FlatRead32((r6 + 328));
    r0 = MemoryInline::FlatRead32((r7 + 20));
}

loc_80742738:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80742748;
    }
}

loc_8074273C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + -4), r7);
}

loc_80742748:
{
    r6 = (r6 + 8);
    r8 = (r8 + 1);
}

loc_80742750:
{
    r0 = MemoryInline::FlatRead32((r3 + 380));
}

loc_80742758:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_8074272C;
    }
}

loc_8074275C:
{
    r0 = 2;
    r4 = (r1 + 8);
    r5 = 0;
    ctr = r0;
}

loc_8074276C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80742774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80742780;
    }
}

loc_80742778:
{
    MemoryInline::FlatWrite32((r3 + 332), r0);
    r3 = (r3 + 8);
}

loc_80742780:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80742788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80742794;
    }
}

loc_8074278C:
{
    MemoryInline::FlatWrite32((r3 + 332), r0);
    r3 = (r3 + 8);
}

loc_80742794:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8074279C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807427A8;
    }
}

loc_807427A0:
{
    MemoryInline::FlatWrite32((r3 + 332), r0);
    r3 = (r3 + 8);
}

loc_807427A8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_807427B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807427BC;
    }
}

loc_807427B4:
{
    MemoryInline::FlatWrite32((r3 + 332), r0);
    r3 = (r3 + 8);
}

loc_807427BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_807427C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807427D0;
    }
}

loc_807427C8:
{
    MemoryInline::FlatWrite32((r3 + 332), r0);
    r3 = (r3 + 8);
}

loc_807427D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807427D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807427E4;
    }
}

loc_807427DC:
{
    MemoryInline::FlatWrite32((r3 + 332), r0);
    r3 = (r3 + 8);
}

loc_807427E4:
{
    r4 = (r4 + 24);
    r5 = (r5 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074276C;
    }
}

loc_807427F0:
{
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807426E4 func_807426E4 preserves=true fpr_mask=0x00000000
