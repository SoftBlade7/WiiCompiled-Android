#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80244C0C(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80244C0C;

loc_80244C0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    ctx->lr = 0x80244C38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8006D7B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24168));
    r9 = 0x802A0000u;
    r6 = 0;
    r4 = 64;
    r8 = -1;
    r7 = 1;
    r9 = (r9 + 16392);
    r5 = 2;
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost(r27, 0, 272u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 220u, (r27 + 220), f0.d);
    r11 = (r1 + 32);
    r3 = r27;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 224u, (r27 + 224), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 228u, (r27 + 228), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r27, r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r27 + 232), r30);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r27 + 236), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 240u, (r27 + 240), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 241u, (r27 + 241), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 242u, (r27 + 242), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 243u, (r27 + 243), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r27 + 248), r5);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r27 + 252), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r27 + 256), r28);
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r27 + 260), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r27 + 264), r6);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r27 + 268), r29);
    }
    MemoryInline::WriteResolved8(guest_range_0, 246u, (r27 + 246), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 245u, (r27 + 245), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 244u, (r27 + 244), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 247u, (r27 + 247), static_cast<uint8_t>(r0));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80001FE gpr_write=0xF8000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80244C0C func_80244C0C preserves=true fpr_mask=0x00000000
