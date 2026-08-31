#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DDFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_806DDFD4;

loc_806DDFD4:
{
    r9 = 0x808A0000u;
    r8 = 30;
    r9 = (r9 + 1176);
    r4 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r9 + 32));
    r7 = 10;
    f4.d = MemoryInline::FlatReadFloat32((r9 + 24));
    r6 = 40;
    f3.d = MemoryInline::FlatReadFloat32((r9 + 28));
    r0 = 60;
    f0.d = MemoryInline::FlatReadFloat32((r9 + 36));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 216), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 220), r4);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 216), static_cast<uint16_t>(r8));
    f1.d = MemoryInline::FlatReadFloat32(r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 228), r7);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 232), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 236), r6);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 240), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 248), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 252), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 224), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 244), f0.d);
    r3 = MemoryInline::FlatRead32((r5 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFE0 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806DDFD4 func_806DDFD4 preserves=true fpr_mask=0x00000000
