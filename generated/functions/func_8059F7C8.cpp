#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059F7C8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8059F7C8;

loc_8059F7C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x8059F7ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805B4DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = MemoryInline::FlatRead32((r29 + 8));
    ctx->lr = 0x8059F7F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805B8330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = 0x802A0000u;
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16688));
    r4 = (r3 + 16688);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 12), 0, 240u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r29 + 12), f0.d);
    r30 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 36);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 16), f0.d);
    f3.d = f2.d;
    f4.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r29 + 20), f0.d);
    // inline leaf 0x80239DFC (5 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 96u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 52);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 84);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 100);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 116);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8212));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8216));
    r3 = (r29 + 156);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r29 + 140), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r29 + 136), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r29 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r29 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r29 + 148), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r29 + 144), f0.d);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 196u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r29 + 156));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r29 + 172));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 184u, (r29 + 188));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r29 + 160));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r29 + 176));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 188u, (r29 + 192));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r29 + 164));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r29 + 180));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r29 + 196));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 192u, (r29 + 204), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 196u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 196u, (r29 + 208), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 200u, (r29 + 212), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 204u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 204u, (r29 + 216), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 208u, (r29 + 220), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 212u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 212u, (r29 + 224), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 216u, (r29 + 228), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 220u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 220u, (r29 + 232), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 224u, (r29 + 236), f8.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r29 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 212));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 228u, (r29 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 216));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 232u, (r29 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 220));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 236u, (r29 + 248), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000004E gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059F7C8 func_8059F7C8 preserves=true fpr_mask=0x00000000
