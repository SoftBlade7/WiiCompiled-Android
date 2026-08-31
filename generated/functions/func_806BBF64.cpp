#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BBF64(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    goto loc_806BBF64;

loc_806BBF64:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r10 = 0x808A0000u;
    r9 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r10 = (r10 + -3288);
    r7 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r10 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    r8 = (r9 + 16712);
    r6 = (r7 + 16688);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 160));
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = 1;
    r0 = (r0 | 11);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 24));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 20));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 16));
    f12.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 12));
    f11.d = PpcFmulsInline(f2.d, f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 8));
    f10.d = PpcFmulsInline(f3.d, f0.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r5 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.second);
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 36));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 32));
        }
    }
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 60), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f4.d);
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 72), f10.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f11.d);
    MemoryInline::FlatWriteFloat32((r3 + 80), f12.d);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f7.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r9 + 16712), 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r9 + 16712));
    MemoryInline::FlatWriteFloat32((r3 + 180), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r8 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r8 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 188), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r9 + 16712));
    MemoryInline::FlatWriteFloat32((r3 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r8 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r8 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 204), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 24), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 28), f4.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f8.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 32), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f11.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f12.d);
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r0 = -1;
    f1.d = MemoryInline::FlatReadFloat32(r10);
    r4 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 212), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 92));
    MemoryInline::FlatWriteFloat32((r3 + 224), f1.d);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 220), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r10 + 96));
    MemoryInline::FlatWriteFloat32((r3 + 216), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 228), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r7 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 236), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 240), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 244), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 248), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 252), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 256), f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r9 + 16712));
    MemoryInline::FlatWriteFloat32((r3 + 260), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r8 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 264), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r8 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 268), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 280), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 272), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 284), f0.d);
    MemoryInline::FlatWrite32((r3 + 288), r0);
    MemoryInline::FlatWriteFloat32((r3 + 292), f1.d);
    r3 = MemoryInline::FlatRead32((r5 + 40));
    ctx->lr = 0x806BC104u;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x806BC110u;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x808204B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF80E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFE000 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806BBF64 func_806BBF64 preserves=true fpr_mask=0x00000000
