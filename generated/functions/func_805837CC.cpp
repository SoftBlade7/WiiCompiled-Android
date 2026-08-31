#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805837CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8056B1A4_loc_0 = 0;
    uint32_t addr_lfsx_8056B1A4_loc_1 = 0;
    uint32_t addr_lfsx_8056B1B0_loc_0 = 0;
    uint32_t addr_lfsx_8056B1B0_loc_1 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805837CC;

loc_805837CC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 6656));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWrite16((r3 + 280), static_cast<uint16_t>(r30));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite16((r3 + 258), static_cast<uint16_t>(r30));
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r3 + 432), f0.d);
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
    MemoryInline::FlatWrite16((r29 + 452), static_cast<uint16_t>(r30));
    r3 = r29;
    r6 = MemoryInline::FlatRead32(r29);
    r4 = 4;
    r5 = 0;
    r7 = MemoryInline::FlatRead32((r6 + 4));
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r7 + 4), r0);
    ctx->lr = 0x8058386Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r29 + 300), static_cast<uint16_t>(r30));
    r3 = 0x80890000u;
    r4 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -8193);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead16((r29 + 596));
    MemoryInline::FlatWrite16((r29 + 332), static_cast<uint16_t>(r30));
    r0 = (r0 & -5);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r29 + 334), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 336), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 596), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r29 + 236), r30);
    MemoryInline::FlatWriteFloat32((r29 + 240), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r4 = MemoryInline::FlatRead32(r29);
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
    MemoryInline::FlatWrite16((r29 + 328), static_cast<uint16_t>(r30));
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058391C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583958;
    }
}

loc_80583920:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -196609);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 421;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 6656));
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80583950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 608));
    // inline leaf 0x8056B094 (14 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r4 = 0x808B0000u;
    r5 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20652));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5800));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5688));
    MemoryInline::FlatWriteFloat32((r3 + 108), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 112), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    MemoryInline::FlatWrite8((r3 + 100), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8056B094
}

loc_80583958:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    r4 = 278;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80583990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = 0;
    MemoryInline::FlatWrite16((r29 + 396), static_cast<uint16_t>(r31));
    r3 = MemoryInline::FlatRead32((r29 + 608));
    r4 = 0;
    // inline leaf 0x8056B168 (44 guest instruction(s))
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r6 = (r3 + 16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 1);
    r5 = 0x808B0000u;
    r3 = (0 - r0);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 28));
    r0 = 3;
    r5 = (r5 + 20656);
    r0 = (r0 & ~r3);
    r3 = 0x808B0000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r0);
    r3 = (r3 + 20672);
    f5.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r4 = (r6 + r7);
    addr_lfsx_8056B1A4_loc_0 = (r3 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B1A4_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r3 = 0x80890000u;
    addr_lfsx_8056B1B0_loc_0 = (r5 + r7);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B1B0_loc_0);
    r0 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r6 + 36));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5688));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r6 + 44), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f7.d));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r6 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r6 + 16), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r6 + 20), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r6 + 24), f0.d);
    f2.d = PpcFmulsInline(f6.d, f9.d);
    f1.d = PpcFmulsInline(f4.d, f9.d);
    f0.d = PpcFmulsInline(f0.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r6 + 4), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r6 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r6 + 12), f0.d);
    // end of inlined leaf 0x8056B168
    r30 = 0x80890000u;
    r4 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 6660));
    r3 = r29;
    MemoryInline::FlatWriteFloat32((r29 + 376), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -32769);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    // inline leaf 0x8079870C (1 guest instruction(s))
    // end of inlined leaf 0x8079870C
    MemoryInline::FlatWrite16((r29 + 404), static_cast<uint16_t>(r31));
    r3 = r29;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6660));
    ctx->lr = 0x805839FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80598338u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead8((r29 + 406));
}

loc_80583A04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583A1C;
    }
}

loc_80583A08:
{
    r3 = MemoryInline::FlatRead32((r29 + 608));
    r4 = 1;
    // inline leaf 0x8056B168 (44 guest instruction(s))
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r6 = (r3 + 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r5 = 0x808B0000u;
    r3 = (0 - r0);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 28));
    r0 = 3;
    r5 = (r5 + 20656);
    r0 = (r0 & ~r3);
    r3 = 0x808B0000u;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r0);
    r3 = (r3 + 20672);
    f5.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r4 = (r6 + r7);
    addr_lfsx_8056B1A4_loc_1 = (r3 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B1A4_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r3 = 0x80890000u;
    addr_lfsx_8056B1B0_loc_1 = (r5 + r7);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B1B0_loc_1);
    r0 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r6 + 36));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5688));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r6 + 44), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f7.d));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r6 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r6 + 16), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r6 + 20), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r6 + 24), f0.d);
    f2.d = PpcFmulsInline(f6.d, f9.d);
    f1.d = PpcFmulsInline(f4.d, f9.d);
    f0.d = PpcFmulsInline(f0.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r6 + 4), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r6 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r6 + 12), f0.d);
    // end of inlined leaf 0x8056B168
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 406), static_cast<uint8_t>(r0));
}

loc_80583A1C:
{
    r4 = 0x80890000u;
    r3 = MemoryInline::FlatRead32((r29 + 608));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6660));
    MemoryInline::FlatWriteFloat32((r29 + 380), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8056AF10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80583A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583A5C;
    }
}

loc_80583A44:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    ctx->lr = 0x80583A5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80591038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80583A5C:
{
    r3 = MemoryInline::FlatRead32((r29 + 604));
    r4 = 0;
    ctx->lr = 0x80583A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805758E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -268435457);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & -2049);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -67108865);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80583ABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583AC8;
    }
}

loc_80583AC0:
{
    r3 = MemoryInline::FlatRead32((r29 + 600));
    ctx->lr = 0x80583AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805766B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80583AC8:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8057E348u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80583AE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583B20;
    }
}

loc_80583AE4:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = 0;
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r4 = (r4 & -268435457);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite16((r29 + 398), static_cast<uint16_t>(r0));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite8((r3 + 269), static_cast<uint8_t>(r4));
}

loc_80583B20:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 & -33554433);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = 0x80583B54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80591664u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r3 = r29;
    r4 = 9;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x80583B68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805837CC func_805837CC preserves=true fpr_mask=0x00000000
