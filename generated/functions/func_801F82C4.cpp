#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F82C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801F82C4;

loc_801F82C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r3 = (r1 + 16);
    ctx->lr = 0x801F82ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80207D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r1 + 16));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r1 + 20));
    r0 = (r3 + -1980);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r1 + 18));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_0 & 65024);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_0 = (r0_rot_1 & 480);
    r0_mdest_0 = (r0 & -481);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_mrot_1 = (r4 & 31);
    r0_mdest_1 = (r0 & -32);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r1 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 2u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r1 + 12));
            r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r1 + 10));
        }
    }
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_2 & 63488);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_2 = (r0_rot_3 & 2016);
    r0_mdest_2 = (r0 & -2017);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0_mrot_3 = (r0_rot_4 & 31);
    r0_mdest_3 = (r0 & -32);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r1 + 14));
    r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 28));
    r3 = (r0 & 255);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F82C4 func_801F82C4 preserves=true fpr_mask=0x00000000
