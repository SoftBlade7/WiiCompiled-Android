#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CE6D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_807CE744_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_1 = 0;
    uint32_t r11_psq_tmp_2 = 0;
    uint32_t r11_psq_tmp_3 = 0;
    uint32_t r11_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_5 = 0;
    uint32_t r9_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_1 = 0;
    uint32_t r9_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_3 = 0;
    uint32_t r9_psq_tmp_4 = 0;
    uint32_t r9_psq_tmp_5 = 0;
    uint32_t r9_psq_tmp_6 = 0;
    uint32_t r9_psq_tmp_7 = 0;
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
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807CE6D0;

loc_807CE6D0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
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
    r8 = MemoryInline::FlatRead32((r3 + 1196));
    r31 = 0x808A0000u;
    r31 = (r31 + 26416);
    r7 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32(r8);
    r30 = r3;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 2752u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    r7 = (r7 + 15384);
}

loc_807CE708:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(8))) {
        goto loc_807CE7C8;
    }
}

loc_807CE718:
{
    r5 = MemoryInline::FlatRead32((r8 + 4));
}

loc_807CE720:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(60))) {
        goto loc_807CE7C8;
    }
}

loc_807CE724:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r8 + 4), r0);
    r6 = (r4 * 120);
    r4 = (r31 + 1528);
    r0 = MemoryInline::FlatRead8((r8 + 16));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r4 + r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CE744:
{
    addr_lhax_807CE744_loc_0 = (r5 + r4);
    r0 = MemoryInline::FlatRead16(addr_lhax_807CE744_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CE750;
    }
}

loc_807CE74C:
{
    r0 = (0 - r0);
}

loc_807CE750:
{
    r4 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 2544u, (r31 + 2544));
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2712u, (r31 + 2712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CE774:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2732u, (r31 + 2732));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CE79C;
    }
}

loc_807CE788:
{
}

loc_807CE78C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807CE7AC;
    }
}

loc_807CE790:
{
}

loc_807CE794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_807CE7BC;
    }
}

loc_807CE798:
{
    goto loc_807CE7C8;
}

loc_807CE79C:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    goto loc_807CE7C8;
}

loc_807CE7AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    goto loc_807CE7C8;
}

loc_807CE7BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
}

loc_807CE7C8:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_807CE7D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807CE824;
    }
}

loc_807CE7D4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 976));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2676u, (r31 + 2676));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 980));
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 984));
    f4.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 988));
    f3.d = PpcFmulsInline(f0.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 992));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 996));
    f2.d = PpcFmulsInline(f2.d, f6.d);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 976), f5.d);
    f0.d = PpcFmulsInline(f0.d, f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 980), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 984), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 988), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 992), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 996), f0.d);
    goto loc_807CEC30;
}

loc_807CE824:
{
    r0 = MemoryInline::FlatRead16((r3 + 250));
}

loc_807CE82C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(7))) {
        goto loc_807CE840;
    }
}

loc_807CE830:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
}

loc_807CE840:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2736u, (r31 + 2736));
    r9 = (r1 + 32);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2696u, (r31 + 2696));
    r6 = (r7 + 16);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2740u, (r31 + 2740));
    r5 = (r7 + 40);
    r8 = (r1 + 44);
    r10 = (r1 + 8);
    r23 = 0;
    r0 = 4;
}

loc_807CE868:
{
    r12 = r30;
    r11 = (r7 + 368);
    r29 = (r3 + 856);
    r28 = (r3 + 844);
    r27 = (r3 + 868);
    r26 = (r7 + 272);
    r25 = (r31 + 1516);
    r24 = (r7 + 176);
    r22 = 0;
    ctr = r0;
}

loc_807CE890:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r11));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_807CE898:
{
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r11_psq_tmp_3 = (r11 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r11_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_3 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_3, f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CE8E4;
    }
}

loc_807CE8B0:
{
    f5.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r12 + 864));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f5.d = PpcFmulsInline(f3.d, f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r12 + 860));
    f7.d = MemoryInline::FlatReadFloat32((r7 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r12 + 856));
    f4.d = PpcFmulsInline(f4.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f5.d);
    f3.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    goto loc_807CE904;
}

loc_807CE8E4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f5.d, f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_3 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_3, f3.d);
}

loc_807CE904:
{
    f5.d = MemoryInline::FlatReadFloat32((r1 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(3));
}

loc_807CE90C:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f5.d = PpcFmulsInline(f3.d, f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = PpcFmulsInline(f4.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f5.d);
    f3.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CE970;
    }
}

loc_807CE93C:
{
    f5.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r12 + 864));
    f6.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f5.d = PpcFmulsInline(f3.d, f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r12 + 860));
    f7.d = MemoryInline::FlatReadFloat32((r7 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r12 + 856));
    f4.d = PpcFmulsInline(f4.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f5.d);
    f3.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    goto loc_807CE990;
}

loc_807CE970:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_3 = (r27 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f5.d, f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_5 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_5, f3.d);
}

loc_807CE990:
{
    f6.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    f7.d = PpcFmulsInline(f6.d, f5.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f1.d)));
    r4 = MemoryInline::FlatRead8(r25);
    f6.d = PpcFmulsInline(f4.d, f3.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f8.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CE9BC:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_3));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f7.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f1.d)));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f4.d = PpcFmulsInline(f4.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_4 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_4, f8.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f6.d = PpcFmulsInline(f5.d, f6.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f4.d = PpcFmulsInline(f7.d, f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f7.d);
    f7.d = PpcFmulsInline(f3.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f7.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CEA2C;
    }
}

loc_807CEA20:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
}

loc_807CEA2C:
{
    r4 = MemoryInline::FlatRead8((r25 + 1));
}

loc_807CEA34:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CEA48;
    }
}

loc_807CEA38:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
}

loc_807CEA48:
{
    r4 = MemoryInline::FlatRead8((r25 + 2));
}

loc_807CEA50:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CEA64;
    }
}

loc_807CEA54:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
}

loc_807CEA64:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r10));
    r11 = (r11 + 12);
    f4.d = MemoryInline::FlatReadFloat32((r12 + 904));
    r29 = (r29 + 12);
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r10_psq_tmp_3 = (r10 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r10_psq_tmp_3));
    r28 = (r28 + 12);
    r27 = (r27 + 12);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f5.d);
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r26 = (r26 + 12);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_4 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_4, f5.d);
    r25 = (r25 + 3);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r22 = (r22 + 1);
    MemoryInline::FlatWriteFloat32((r12 + 904), f6.d);
    f5.d = MemoryInline::FlatReadFloat32((r12 + 908));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    MemoryInline::FlatWriteFloat32((r12 + 908), f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r12 + 912));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r12 + 912), f3.d);
    f8.d = MemoryInline::FlatReadFloat32(r24);
    f4.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f7.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f6.d = PpcFmulsInline(f6.d, f8.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    r24 = (r24 + 12);
    f4.d = PpcFmulsInline(f5.d, f7.d);
    MemoryInline::FlatWriteFloat32((r12 + 904), f6.d);
    f6.d = PpcFmulsInline(f6.d, f2.d);
    MemoryInline::FlatWriteFloat32((r12 + 908), f4.d);
    f5.d = PpcFmulsInline(f4.d, f2.d);
    MemoryInline::FlatWriteFloat32((r12 + 912), f3.d);
    f4.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r12 + 856));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    MemoryInline::FlatWriteFloat32((r12 + 856), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r12 + 860));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
    MemoryInline::FlatWriteFloat32((r12 + 860), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r12 + 864));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32((r12 + 864), f3.d);
    r12 = (r12 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807CE890;
    }
}

loc_807CEB28:
{
    r23 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(4));
}

loc_807CEB30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807CE868;
    }
}

loc_807CEB34:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 876));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 864));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2748u, (r31 + 2748));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 868));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f3.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 856));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 952));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2748));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 976), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 888));
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 876));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 964));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2748));
    f0.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 980), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 880));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f3.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 868));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 956));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2748));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 984), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 900));
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 888));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 968));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2748));
    f0.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 988), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 892));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f3.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 880));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 960));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2748));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 992), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2744));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 972));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 996), f0.d);
}

loc_807CEC30:
{
    r11 = (r1 + 128);
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
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CE6D0 func_807CE6D0 preserves=true fpr_mask=0x00000000
