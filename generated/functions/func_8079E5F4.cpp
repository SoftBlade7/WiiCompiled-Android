#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079E5F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8079E5F4;

loc_8079E5F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 20992);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32(r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 320u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 116), r30);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 120), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 124), r30);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 106u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_0, 106u, (r3 + 110), r30);
        MemoryInline::WriteResolved16(guest_range_0, 108u, (r3 + 112), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 104), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 100), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 96), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 92), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 316u, (r3 + 320), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r3 + 180), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r3 + 184), f0.d);
    }
    r3 = (r3 + 212);
    // inline leaf 0x807BDA7C (8 guest instruction(s))
    r4 = 0x809C0000u;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + -60), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 60u, r3, r0);
    r4 = (r4 + 14552);
    MemoryInline::FlatWriteRam32((r4 + 768), r0);
    MemoryInline::FlatWriteRam32((r4 + 772), r0);
    MemoryInline::FlatWriteRam32((r4 + 776), r3);
    // end of inlined leaf 0x807BDA7C
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r7 = 5;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r3 = 65536;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r31 + 224), f1.d);
    r8 = 0x80240000u;
    r0 = (r3 + -1);
    r5 = MemoryInline::FlatRead32((r31 + 164));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 220), f1.d);
    r6 = (r31 + 68);
    r4 = 12;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r31 + 216), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r31 + 236), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 232), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 228), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r31 + 296), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r31 + 292), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r31 + 288), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r31 + 300), f1.d);
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r31 + 312), r30);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 196u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 198u, (r31 + 350), r30);
        MemoryInline::WriteResolved16(guest_range_1, 196u, (r31 + 348), r7);
    }
    r8 = (r8 + 28832);
    r7 = MemoryInline::FlatRead32(r8);
    r3 = MemoryInline::FlatRead32((r8 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 224u, (r31 + 376), r3);
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r31 + 372), r7);
    }
    r3 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r31 + 380), r3);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 152), r6);
    MemoryInline::FlatWrite32(r5, r6);
    r3 = MemoryInline::FlatRead32((r31 + 308));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 176), r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079E6E8:
{
    MemoryInline::FlatWrite8((r31 + 316), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E6F8;
    }
}

loc_8079E6F4:
{
    // inline leaf 0x807BD7B4 (9 guest instruction(s))
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 26304));
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    // end of inlined leaf 0x807BD7B4
}

loc_8079E6F8:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r3 = (r31 + 16);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r4 = (r31 + 32);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 168u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r31 + 188), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r31 + 192), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 164u, (r31 + 196), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r31 + 128), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r31 + 132), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r31 + 136), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r31 + 140), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r31 + 144), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r31 + 148), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r31 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r31 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r31 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r31 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r31 + 52), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r31 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r31 + 60), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r31 + 64), f1.d);
    ctx->lr = 0x8079E760u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B9DD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
}

loc_8079E76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E77C;
    }
}

loc_8079E770:
{
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_8079E77C:
{
    r4 = MemoryInline::FlatRead32((r31 + 120));
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 124));
    r29 = 0;
    r4 = (r4 | 131072);
    MemoryInline::FlatWrite32((r31 + 120), r4);
    r0 = (r0 & -9);
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 172), r3);
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_8079E7A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 156));
}

loc_8079E7AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E7F0;
    }
}

loc_8079E7B0:
{
    r3 = (r0 + r30);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079E7C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079E7D4;
    }
}

loc_8079E7C8:
{
}

loc_8079E7CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8079E7D4;
    }
}

loc_8079E7D0:
{
    r0 = 0;
}

loc_8079E7D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E7D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E7E4;
    }
}

loc_8079E7DC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8079E7E8;
}

loc_8079E7E4:
{
    r3 = 0;
}

loc_8079E7E8:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8079E7F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 168));
}

loc_8079E7F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E83C;
    }
}

loc_8079E7FC:
{
    r3 = (r0 + r30);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079E810:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079E820;
    }
}

loc_8079E814:
{
}

loc_8079E818:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8079E820;
    }
}

loc_8079E81C:
{
    r0 = 0;
}

loc_8079E820:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E830;
    }
}

loc_8079E828:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8079E834;
}

loc_8079E830:
{
    r3 = 0;
}

loc_8079E834:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8079E83C:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_8079E848:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079E7A4;
    }
}

loc_8079E84C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8079E860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 388), static_cast<uint8_t>(r0));
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079E5F4 func_8079E5F4 preserves=true fpr_mask=0x00000000
