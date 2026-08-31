#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AF234(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    goto loc_807AF234;

loc_807AF234:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 24048);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 108));
    r4 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 416), r0);
    r3 = r0;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x80581A28 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80581A28
    r31 = 0;
    r0 = 12;
    MemoryInline::FlatWrite32((r29 + 424), r31);
    r3 = MemoryInline::FlatRead32((r29 + 416));
    MemoryInline::FlatWrite8((r29 + 420), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 452), r31);
    MemoryInline::FlatWrite32((r29 + 456), r31);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r29 + 68), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 72), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r29 + 76), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 72), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 492), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 48), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 64), f1.d);
    ctx->lr = 0x807AF2FCu;
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
    InvokeDirectCpu<0x807B09F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r0 = 5;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r4 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 460), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 468), r0);
    r3 = MemoryInline::FlatRead32((r29 + 156));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 472), r31);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r29 + 476), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 480), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 484), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 488), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 504), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r29 + 508), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 496), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 500), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r29 + 460), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r29 + 464), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->lr = 0x807AF354u;
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
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32((r29 + 124));
    r4 = 60;
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r3 = r29;
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r29 + 428), r4);
    r4 = 288;
    MemoryInline::FlatWrite8((r29 + 436), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteFloat32((r29 + 432), f1.d);
    MemoryInline::FlatWrite32((r29 + 124), r0);
    ctx->lr = 0x807AF380u;
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
    InvokeDirectCpu<0x807A2F18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFE0 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AF234 func_807AF234 preserves=true fpr_mask=0x00000000
