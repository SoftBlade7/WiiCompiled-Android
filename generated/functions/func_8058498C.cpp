#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058498C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8058498C;

loc_8058498C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 1;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805849BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x80590D20 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // end of inlined leaf 0x80590D20
    r4 = 1;
    ctx->lr = 0x805849CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80567A88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    ctx->lr = 0x805849D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x805A0410u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r31 = 0;
    MemoryInline::FlatWrite16((r30 + 280), static_cast<uint16_t>(r31));
    r4 = MemoryInline::FlatRead32(r30);
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite16((r30 + 258), static_cast<uint16_t>(r31));
    r4 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteFloat32((r30 + 432), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -1073741825);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590E58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    MemoryInline::FlatWrite16((r30 + 452), static_cast<uint16_t>(r31));
    r3 = r30;
    r6 = MemoryInline::FlatRead32(r30);
    r4 = 4;
    r5 = 0;
    r7 = MemoryInline::FlatRead32((r6 + 4));
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r7 + 4), r0);
    ctx->lr = 0x80584A60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r30 + 300), static_cast<uint16_t>(r31));
    r3 = 0x80890000u;
    r4 = MemoryInline::FlatRead32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -8193);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead16((r30 + 596));
    MemoryInline::FlatWrite16((r30 + 332), static_cast<uint16_t>(r31));
    r0 = (r0 & -5);
    r4 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r30 + 334), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 336), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 596), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r30 + 236), r31);
    MemoryInline::FlatWriteFloat32((r30 + 240), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590E58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    MemoryInline::FlatWrite16((r30 + 328), static_cast<uint16_t>(r31));
    r3 = r30;
    r4 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590E8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x80590EA4 (13 guest instruction(s))
}

loc_inl2_0x80590EA4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
}

loc_inl2_0x80590EB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80590EB8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
}

loc_inl2_0x80590EC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80590EC8:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_80590EA4;
}

loc_inl2_return:
{
}

loc_inl2_cont_80590EA4:
{
    // end of inlined leaf 0x80590EA4
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    // inline leaf 0x805B4D24 (39 guest instruction(s))
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10064));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 116), 0, 228u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 124), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 120), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 116), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 132), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 128), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 148), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 144), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 140), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 160), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 156), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 152), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 172), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 168), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 164), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 180), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 176), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 196), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 192), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 188), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 208), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 204), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 200), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 236), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 232), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 228), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r3 + 280), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r3 + 276), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r3 + 272), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r3 + 292), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r3 + 288), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (r3 + 284), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 224u, (r3 + 340), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 220u, (r3 + 336), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 216u, (r3 + 332), f0.d);
    // end of inlined leaf 0x805B4D24
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80584B18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80584B54;
    }
}

loc_80584B1C:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -268435457);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite16((r30 + 398), static_cast<uint16_t>(r31));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite8((r3 + 269), static_cast<uint8_t>(r4));
}

loc_80584B54:
{
    r3 = r30;
    // inline leaf 0x8057E348 (43 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 596));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    r5 = 0;
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r3 + 596), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
    MemoryInline::FlatWrite32((r3 + 204), r5);
    MemoryInline::FlatWrite32((r3 + 208), r5);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 258), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 260), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -524289);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -134217729);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -268435457);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWriteFloat32((r3 + 456), f0.d);
    MemoryInline::FlatWrite32((r3 + 204), r5);
    MemoryInline::FlatWrite16((r3 + 460), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8057E348
    r5 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    // inline leaf 0x8059197C (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 68));
    MemoryInline::FlatWrite8((r5 + 33), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8059197C
    r4 = MemoryInline::FlatRead32(r30);
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 6656));
    r3 = r30;
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r0 = (r0 & -524289);
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r6 = MemoryInline::FlatRead32(r30);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = MemoryInline::FlatRead32(r30);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r6 = MemoryInline::FlatRead32(r30);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    MemoryInline::FlatWriteFloat32((r30 + 480), f0.d);
    ctx->lr = 0x80584BE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8058539Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 6656));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 484), f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f3.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 488), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 492), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r30 + 500);
    MemoryInline::FlatWriteFloat32((r30 + 496), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 500), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 504), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 508), f0.d);
    ctx->lr = 0x80584C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r30 + 480), f1.d);
    r3 = (r30 + 500);
    ctx->lr = 0x80584C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 500));
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 504));
    r3 = (r30 + 512);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 508));
    r4 = (r4 + 16688);
    MemoryInline::FlatWriteFloat32((r30 + 92), f2.d);
    r5 = (r30 + 500);
    r6 = 1;
    MemoryInline::FlatWriteFloat32((r30 + 96), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 116), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 120), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    ctx->lr = 0x80584C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 6656));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 532), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 528), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 524), f0.d);
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    ctx->lr = 0x80584CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80709150u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = 12;
    ctx->lr = 0x80584CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808646F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80890000u;
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 6660));
    r4 = 32;
    r5 = 1;
    ctx->lr = 0x80584CCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x80584CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80584CF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80584D40;
    }
}

loc_80584CF4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = 13;
    r0 = MemoryInline::FlatRead32((r3 + 128));
}

loc_80584D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80584D1C;
    }
}

loc_80584D08:
{
}

loc_80584D0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80584D24;
    }
}

loc_80584D10:
{
}

loc_80584D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80584D2C;
    }
}

loc_80584D18:
{
    goto loc_80584D30;
}

loc_80584D1C:
{
    r4 = 2;
    goto loc_80584D30;
}

loc_80584D24:
{
    r4 = 3;
    goto loc_80584D30;
}

loc_80584D2C:
{
    r4 = 4;
}

loc_80584D30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(13));
}

loc_80584D34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80584D40;
    }
}

loc_80584D38:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805917F4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80584D40:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058498C func_8058498C preserves=true fpr_mask=0x00000000
