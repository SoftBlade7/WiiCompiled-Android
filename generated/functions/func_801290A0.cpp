#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801290A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_801290A0;

loc_801290A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x80280000u;
    r4 = (r4 + 6592);
    r9 = 0x80280000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27280));
    r9 = (r9 + 6784);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 324));
    r10 = MemoryInline::FlatRead32((r4 + 92));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r9 + 216), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r9 + 216));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r9 + 220));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r9 + 224));
    f0.d = PPC_Fctiwz(f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r9 + 228));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r9 + 232));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r9 + 236));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r10 = (r10 + r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r9 + 240));
    r10 = (r10 + r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r9 + 244));
    r10 = (r10 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r9 + 248));
    r10 = (r10 + r8);
    r10 = (r10 + r7);
    r10 = (r10 + r6);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r10 = (r10_rot_0 & -4);
    r10 = (r10 + r5);
    r10 = (r10 + r4);
    r10 = (r10 + r3);
    r10 = (r10 + r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801290A0 func_801290A0 preserves=true fpr_mask=0x00000000
