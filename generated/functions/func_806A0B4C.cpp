#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A0B4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t addr_lfsx_80537B88_loc_1 = 0;
    uint32_t addr_lfsx_80537B88_loc_2 = 0;
    uint32_t addr_lfsx_80537B88_loc_3 = 0;
    uint32_t addr_lfsx_80537B88_loc_4 = 0;
    uint32_t addr_lfsx_80537B88_loc_5 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806A0B4C;

loc_806A0B4C:
{
    MemoryInline::FlatWriteRam32((r1 + -560), r1);
    r1 = (r1 + -560);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 564), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 544), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 528), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 512), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 496), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 496);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r4 = 0x808A0000u;
    r28 = r3;
    r4 = (r4 + -10592);
    r29 = 0;
    f28.d = MemoryInline::FlatReadFloat32((r4 + 76));
    r31 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r4 + 80));
    r30 = 0;
    f30.d = MemoryInline::FlatReadFloat32(r4);
    r27 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 84));
    r26 = 0;
}

loc_806A0BB0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 176), 0, 1672u, true, false);
    r18 = MemoryInline::ReadResolved32(guest_range_2, 1604u, (r28 + 1780));
    r3 = (r1 + 140);
    r19 = MemoryInline::ReadResolved32(guest_range_2, 1608u, (r28 + 1784));
    r4 = (r28 + 1780);
    MemoryInline::FlatWriteRam32((r1 + 396), r19);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 392), r18);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 1612u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 1612u, (r28 + 1788));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 1616u, (r28 + 1792));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 404), r21);
    MemoryInline::FlatWriteRam32((r1 + 400), r20);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 1620u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 1620u, (r28 + 1796));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 1624u, (r28 + 1800));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 412), r23);
    MemoryInline::FlatWriteRam32((r1 + 408), r22);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 1628u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 1628u, (r28 + 1804));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 1632u, (r28 + 1808));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 420), r25);
    MemoryInline::FlatWriteRam32((r1 + 416), r24);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 1636u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_2, 1636u, (r28 + 1812));
            r11 = MemoryInline::ReadResolved32(guest_range_2, 1640u, (r28 + 1816));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 428), r11);
    MemoryInline::FlatWriteRam32((r1 + 424), r12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 1644u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_2, 1644u, (r28 + 1820));
            r9 = MemoryInline::ReadResolved32(guest_range_2, 1648u, (r28 + 1824));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 436), r9);
    MemoryInline::FlatWriteRam32((r1 + 432), r10);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1564u, (r28 + 1740));
    r8 = (r0 + r31);
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r6 = MemoryInline::FlatRead32((r8 + 8));
    r0 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWriteRam32((r1 + 236), r7);
    MemoryInline::FlatWriteRam32((r1 + 240), r6);
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRam32((r1 + 344), r18);
    MemoryInline::FlatWriteRam32((r1 + 348), r19);
    MemoryInline::FlatWriteRam32((r1 + 352), r20);
    MemoryInline::FlatWriteRam32((r1 + 356), r21);
    MemoryInline::FlatWriteRam32((r1 + 360), r22);
    MemoryInline::FlatWriteRam32((r1 + 364), r23);
    MemoryInline::FlatWriteRam32((r1 + 368), r24);
    MemoryInline::FlatWriteRam32((r1 + 372), r25);
    MemoryInline::FlatWriteRam32((r1 + 376), r12);
    MemoryInline::FlatWriteRam32((r1 + 380), r11);
    MemoryInline::FlatWriteRam32((r1 + 384), r10);
    MemoryInline::FlatWriteRam32((r1 + 388), r9);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 1660u, (r28 + 1836));
    r3 = (r1 + 128);
    r4 = (r1 + 140);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r3 = (r1 + 116);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    r4 = (r28 + 1780);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 344), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 360), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 376), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_1 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 1664u, (r28 + 1840));
    r3 = (r1 + 104);
    r4 = (r1 + 116);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    r4 = (r28 + 1780);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    r5 = 2;
    MemoryInline::FlatWriteRamFloat32((r1 + 348), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 364), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 380), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_2 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_2);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 1668u, (r28 + 1844));
    r3 = (r1 + 80);
    r4 = (r1 + 92);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 352), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 368), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 384), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r28 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A0D10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A0DDC;
    }
}

loc_806A0D14:
{
    r3 = MemoryInline::FlatRead32((r28 + 280));
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    r7 = MemoryInline::FlatRead32(r3);
    r4 = (r28 + 1780);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r1 + 68);
    MemoryInline::FlatWriteRam32((r1 + 224), r7);
    MemoryInline::FlatWriteRam32((r1 + 228), r6);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_3);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::FlatReadFloat32((r1 + 224));
    r3 = (r1 + 56);
    r4 = (r1 + 68);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 44);
    r4 = (r28 + 1780);
    r5 = 1;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_4 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::FlatReadFloat32((r1 + 228));
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 20);
    r4 = (r28 + 1780);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_5 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::FlatReadFloat32((r1 + 232));
    r3 = (r1 + 8);
    r4 = (r1 + 20);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f8.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 392), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 408), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 424), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 396), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 412), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 428), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 400), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 416), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 432), f0.d);
}

loc_806A0DDC:
{
    r0 = MemoryInline::FlatRead32((r28 + 1740));
    r3 = (r1 + 212);
    r4 = (r1 + 392);
    r5 = (r0 + r31);
    r5 = (r5 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    r0 = MemoryInline::FlatRead32((r28 + 1740));
    r3 = (r1 + 188);
    r4 = (r1 + 392);
    r5 = (r1 + 200);
    r7 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r6 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWriteRam32((r1 + 200), r6);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 200));
    r0 = MemoryInline::FlatRead32((r7 + 12));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 200), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    r18 = (r28 + r26);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 212));
    MemoryInline::FlatWriteFloat32((r18 + 2124), f0.d);
    r3 = (r1 + 296);
    r4 = (r1 + 176);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 216));
    MemoryInline::FlatWriteFloat32((r18 + 2128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 220));
    MemoryInline::FlatWriteFloat32((r18 + 2132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    MemoryInline::FlatWriteFloat32((r18 + 2136), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    MemoryInline::FlatWriteFloat32((r18 + 2140), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    MemoryInline::FlatWriteFloat32((r18 + 2144), f0.d);
    r0 = MemoryInline::FlatRead32((r28 + 1740));
    r5 = (r0 + r31);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f1.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = PpcFmulsInline(f0.d, f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f1.d = PpcFmulsInline(f1.d, f29.d);
    f2.d = PpcFmulsInline(f0.d, f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f30.d);
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f0.d);
    ctx->lr = 0x806A0EB4u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 248);
    r4 = (r1 + 164);
    ctx->lr = 0x806A0EC0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r28 + r27);
    r3 = (r1 + 344);
    r19 = (r4 + 2220);
    r4 = (r1 + 296);
    r5 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    r0 = (r27 + 48);
    r3 = (r1 + 344);
    r5 = (r28 + r0);
    r4 = (r1 + 248);
    r20 = (r5 + 2220);
    r5 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r18 + 2124));
    MemoryInline::FlatWriteFloat32((r19 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 2128));
    MemoryInline::FlatWriteFloat32((r19 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 2132));
    MemoryInline::FlatWriteFloat32((r19 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 2136));
    MemoryInline::FlatWriteFloat32((r20 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 2140));
    MemoryInline::FlatWriteFloat32((r20 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r18 + 2144));
    MemoryInline::FlatWriteFloat32((r20 + 44), f0.d);
    r3 = MemoryInline::FlatRead32((r28 + 1740));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f30.d);
    r3_addr_2 = (r3 + r31);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f31.d);
}

loc_806A0F38:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f30.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806A0F5C;
    }
}

loc_806A0F40:
{
    MemoryInline::FlatWriteFloat32((r19 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r19 + 28), f31.d);
    MemoryInline::FlatWriteFloat32((r19 + 44), f30.d);
    MemoryInline::FlatWriteFloat32((r20 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r20 + 28), f31.d);
    MemoryInline::FlatWriteFloat32((r20 + 44), f30.d);
    goto loc_806A0F88;
}

loc_806A0F5C:
{
}

loc_806A0F60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806A0F74;
    }
}

loc_806A0F64:
{
    MemoryInline::FlatWriteFloat32((r20 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r20 + 28), f31.d);
    MemoryInline::FlatWriteFloat32((r20 + 44), f30.d);
    goto loc_806A0F88;
}

loc_806A0F74:
{
}

loc_806A0F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_806A0F88;
    }
}

loc_806A0F7C:
{
    MemoryInline::FlatWriteFloat32((r19 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r19 + 28), f31.d);
    MemoryInline::FlatWriteFloat32((r19 + 44), f30.d);
}

loc_806A0F88:
{
    r29 = (r29 + 1);
    r30 = (r30 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_806A0F94:
{
    r27 = (r27 + 96);
    r26 = (r26 + 24);
    r31 = (r31 + 24);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806A0BB0;
    }
}

loc_806A0FA4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 496);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 496));
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 564));
    ctx->lr = r0;
    r1 = (r1 + 560);
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC1FFF gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0xF000D1FF fpr_write=0xF000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806A0B4C func_806A0B4C preserves=false fpr_mask=0xF0000000
