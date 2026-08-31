#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C6EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_801C7234_loc_0 = 0;
    uint32_t addr_lfsx_801C724C_loc_0 = 0;
    uint32_t addr_lfsx_801C7254_loc_0 = 0;
    uint32_t addr_lfsx_801C7258_loc_0 = 0;
    uint32_t addr_lfsx_801C7264_loc_0 = 0;
    uint32_t addr_lfsx_801C7278_loc_0 = 0;
    uint32_t addr_lfsx_801C728C_loc_0 = 0;
    uint32_t addr_lfsx_801C72AC_loc_0 = 0;
    uint32_t addr_lfsx_801C72BC_loc_0 = 0;
    uint32_t addr_lfsx_801C72D4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r12_subfic_ra_0 = 0;
    uint32_t r12_subfic_ra_1 = 0;
    uint32_t r12_subfic_ra_2 = 0;
    uint32_t r12_subfic_ra_3 = 0;
    uint32_t r12_subfic_ra_4 = 0;
    uint32_t r12_subfic_ra_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r23_subfic_ra_0 = 0;
    uint32_t r23_subfic_ra_1 = 0;
    uint32_t r23_subfic_ra_2 = 0;
    uint32_t r23_subfic_ra_3 = 0;
    uint32_t r23_subfic_ra_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r25_rot_6 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C6EDC;

loc_801C6EDC:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 80);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = 1127219200;
}

loc_801C6F20:
{
    r8 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r24 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r8 = (r8 + 16424);
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(3))) {
        goto loc_801C70A0;
    }
}

loc_801C6F38:
{
    r0 = 4;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26072));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26080));
    r5 = 0;
    r11 = 0;
    r10 = 767;
    ctr = r0;
}

loc_801C6F54:
{
    r9 = (r5 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r9 = (r0 - r9);
    r0 = (r9 + 2);
}

loc_801C6F68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_801C7060;
    }
}

loc_801C6F6C:
{
    r12 = (r6 + r9);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 4u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r22 = MemoryInline::FlatRead8((r12 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    r26 = MemoryInline::FlatRead8(r12);
    r23 = (r9 + r0);
    r12 = MemoryInline::FlatRead8((r12 + 1));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(4));
    r25 = (r25_rot_2 & 768);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & 768);
    r25 = (r26 | r25);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r9 = (r12 | r9);
    MemoryInline::FlatWrite16((r23 + 8), static_cast<uint16_t>(r25));
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r12 = (r22 & 15);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r23_subfic_ra_2 = r23;
    r23 = (767 - r23_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(767) >= static_cast<uint32_t>(r23_subfic_ra_2) ? 1u : 0u) << 29);
    r9 = (r9 + r0);
    MemoryInline::FlatWrite16((r9 + 10), static_cast<uint16_t>(r23));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9 = (r9 + r0);
    MemoryInline::FlatWrite16((r9 + 12), static_cast<uint16_t>(r12));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r12 = (r9 + r0);
    r9 = MemoryInline::FlatRead16((r12 + 12));
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r9 = fctiwzword0;
    r9 = (r9 & 255);
    MemoryInline::FlatWrite16((r12 + 12), static_cast<uint16_t>(r9));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r12 = (r9 + r0);
    r9 = MemoryInline::FlatRead16((r12 + 12));
}

loc_801C7018:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801C7034;
    }
}

loc_801C701C:
{
    r9 = MemoryInline::FlatRead16((r12 + 8));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
}

loc_801C7024:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1023))) {
        goto loc_801C7034;
    }
}

loc_801C7028:
{
    r9 = MemoryInline::FlatRead16((r12 + 10));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
}

loc_801C7030:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(767))) {
        goto loc_801C7050;
    }
}

loc_801C7034:
{
    MemoryInline::FlatWrite16((r12 + 8), static_cast<uint16_t>(r11));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9 = (r9 + r0);
    MemoryInline::FlatWrite16((r9 + 10), static_cast<uint16_t>(r10));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9 = (r9 + r0);
    MemoryInline::FlatWrite16((r9 + 12), static_cast<uint16_t>(r11));
}

loc_801C7050:
{
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r9 = (r9 + r0);
    MemoryInline::FlatWrite8((r9 + 14), static_cast<uint8_t>(r5));
    goto loc_801C7094;
}

loc_801C7060:
{
    r0 = MemoryInline::FlatRead32(r4);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r12 = (r12_rot_2 & 2040);
    r9 = (r0 + r12);
    MemoryInline::FlatWrite16((r9 + 8), static_cast<uint16_t>(r11));
    r0 = MemoryInline::FlatRead32(r4);
    r9 = (r0 + r12);
    MemoryInline::FlatWrite16((r9 + 10), static_cast<uint16_t>(r10));
    r0 = MemoryInline::FlatRead32(r4);
    r9 = (r0 + r12);
    MemoryInline::FlatWrite16((r9 + 12), static_cast<uint16_t>(r11));
    r0 = MemoryInline::FlatRead32(r4);
    r9 = (r0 + r12);
    MemoryInline::FlatWrite8((r9 + 14), static_cast<uint8_t>(r5));
}

loc_801C7094:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C6F54;
    }
}

loc_801C709C:
{
    goto loc_801C71D8;
}

loc_801C70A0:
{
}

loc_801C70A4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_801C71D8;
    }
}

loc_801C70A8:
{
    r0 = 4;
    r5 = 0;
    r9 = 12;
    r11 = 0;
    r10 = 767;
    ctr = r0;
}

loc_801C70C0:
{
    r23 = (r5 & 255);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r12 = (r12_rot_5 & 1020);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r0 = (r5 & 1);
    r23 = (r12 - r23);
    r25_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r25 = (r25_rot_5 & 127);
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r12 = (r12_rot_6 & 508);
    r0 = (r0 ^ r7);
    r23 = (r6 + r23);
    r23 = (r23 - r25);
    r12 = (r12 + r25);
    r0 = (r0 - r7);
    r26 = MemoryInline::FlatRead8(r23);
    r7 = (r6 + r12);
    r22 = MemoryInline::FlatRead8((r23 + 1));
    r25 = MemoryInline::FlatRead8((r7 + 2));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C7144;
    }
}

loc_801C7104:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 2040);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
    r12 = (r12_rot_7 & 768);
    r12 = (r23 | r12);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 8), static_cast<uint16_t>(r12));
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & 768);
    r12 = (r12 | r7);
    r7 = MemoryInline::FlatRead32(r4);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r12_subfic_ra_2 = r12;
    r12 = (767 - r12_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(767) >= static_cast<uint32_t>(r12_subfic_ra_2) ? 1u : 0u) << 29);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r12));
    goto loc_801C7180;
}

loc_801C7144:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & 2040);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(8));
    r12 = (r12_rot_8 & 768);
    r12 = (r23 | r12);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 8), static_cast<uint16_t>(r12));
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(6));
    r7 = (r7_rot_4 & 768);
    r12 = (r12 | r7);
    r7 = MemoryInline::FlatRead32(r4);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r12_subfic_ra_3 = r12;
    r12 = (767 - r12_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(767) >= static_cast<uint32_t>(r12_subfic_ra_3) ? 1u : 0u) << 29);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r12));
}

loc_801C7180:
{
    r7 = MemoryInline::FlatRead32(r4);
    r12 = (r7 + r0);
    r7 = MemoryInline::FlatRead16((r12 + 8));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_801C7190:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1023))) {
        goto loc_801C71A0;
    }
}

loc_801C7194:
{
    r7 = MemoryInline::FlatRead16((r12 + 10));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_801C719C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(767))) {
        goto loc_801C71C0;
    }
}

loc_801C71A0:
{
    MemoryInline::FlatWrite16((r12 + 8), static_cast<uint16_t>(r11));
    r7 = MemoryInline::FlatRead32(r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r10));
    r7 = MemoryInline::FlatRead32(r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 12), static_cast<uint16_t>(r11));
    goto loc_801C71C4;
}

loc_801C71C0:
{
    MemoryInline::FlatWrite16((r12 + 12), static_cast<uint16_t>(r9));
}

loc_801C71C4:
{
    r7 = MemoryInline::FlatRead32(r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite8((r7 + 14), static_cast<uint8_t>(r5));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C70C0;
    }
}

loc_801C71D8:
{
    f30.d = MemoryInline::FlatReadFloat64((r2 + -26088));
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r27 = (r27_rot_0 & -4);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -26104));
    r28 = (r8 + 0);
    r29 = (r8 + 32);
    r30 = (r8 + 16);
    r31 = (r8 + 48);
    r23 = (r8 + 64);
    r25 = 0;
}

loc_801C71FC:
{
    r5 = MemoryInline::FlatRead32(r24);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r26 = (r26_rot_2 & 2040);
    r3 = (r5 + r26);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801C7210:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C7220;
    }
}

loc_801C7214:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(767));
}

loc_801C721C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C72F8;
    }
}

loc_801C7220:
{
    r22 = (r5 + r26);
    r3 = (r4 ^ -2147483648);
    r0 = MemoryInline::FlatRead16((r22 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    addr_lfsx_801C7234_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C7234_loc_0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f30.d));
    addr_lfsx_801C724C_loc_0 = (r28 + r27);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C724C_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    addr_lfsx_801C7254_loc_0 = (r30 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C7254_loc_0);
    addr_lfsx_801C7258_loc_0 = (r29 + r27);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C7258_loc_0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    addr_lfsx_801C7264_loc_0 = (r31 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C7264_loc_0);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->lr = 0x801C7274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BA98u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_801C7278_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C7278_loc_0);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f28.d = PpcFmulsInline(f27.d, f2.d);
    ctx->lr = 0x801C7288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B590u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_801C728C_loc_0 = (r29 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C728C_loc_0);
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r22 + 8), static_cast<uint16_t>(r0));
    addr_lfsx_801C72AC_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C72AC_loc_0);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    ctx->lr = 0x801C72B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B590u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_801C72BC_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C72BC_loc_0);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f28.d = PpcFmulsInline(f27.d, f2.d);
    ctx->lr = 0x801C72CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BA98u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r0 = MemoryInline::FlatRead32(r24);
    addr_lfsx_801C72D4_loc_0 = (r31 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C72D4_loc_0);
    r3 = (r0 + r26);
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
}

loc_801C72F8:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(4));
}

loc_801C7300:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801C71FC;
    }
}

loc_801C7304:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C6EDC func_801C6EDC preserves=false fpr_mask=0xF8000000
