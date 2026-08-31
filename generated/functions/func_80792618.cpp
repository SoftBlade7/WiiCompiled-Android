#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80792618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_10 = 0;
    uint32_t r29_psq_tmp_11 = 0;
    uint32_t r29_psq_tmp_12 = 0;
    uint32_t r29_psq_tmp_13 = 0;
    uint32_t r29_psq_tmp_14 = 0;
    uint32_t r29_psq_tmp_15 = 0;
    uint32_t r29_psq_tmp_16 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_8 = 0;
    uint32_t r29_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80792618;

loc_80792618:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r4 = MemoryInline::FlatRead32(r3);
    r31 = 0x808A0000u;
    r30 = MemoryInline::FlatRead32((r3 + 32));
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r31 = (r31 + 19672);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 16);
}

loc_8079264C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80792664;
    }
}

loc_80792650:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    goto loc_8079269C;
}

loc_80792664:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 65536);
}

loc_8079266C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80792684;
    }
}

loc_80792670:
{
    r3 = (r3 + 156);
    r4 = (r29 + 112);
    r5 = (r1 + 44);
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
    InvokeDirectCpu<0x807DE858u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_8079269C;
}

loc_80792684:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
}

loc_8079269C:
{
    r3 = (r1 + 44);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 36));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 40));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f1.d)));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807926C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807926D8;
    }
}

loc_807926CC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    r0 = 1;
    goto loc_807926DC;
}

loc_807926D8:
{
    r0 = 0;
}

loc_807926DC:
{
}

loc_807926E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807926F8;
    }
}

loc_807926E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807926F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807926F8;
    }
}

loc_807926F4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_807926F8:
{
    r4 = (r1 + 44);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 112);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    r3 = r29;
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 120);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f0.d);
    // inline leaf 0x807BD78C (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 4259840;
    r0 = (r3 + -32767);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x807BD78C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80792728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079273C;
    }
}

loc_8079272C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 48));
    MemoryInline::FlatWriteFloat32((r29 + 324), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 320), f0.d);
    goto loc_807927A0;
}

loc_8079273C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 512);
}

loc_8079274C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80792758;
    }
}

loc_80792750:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 48));
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_80792778;
}

loc_80792758:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 320));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 52));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8079276C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80792774;
    }
}

loc_80792770:
{
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_80792778;
}

loc_80792774:
{
    f2.d = f0.d;
}

loc_80792778:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 324));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 52));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 320), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80792790:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80792798;
    }
}

loc_80792794:
{
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_8079279C;
}

loc_80792798:
{
    f3.d = f0.d;
}

loc_8079279C:
{
    MemoryInline::FlatWriteFloat32((r29 + 324), f3.d);
}

loc_807927A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r1 + 44);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 228));
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 324));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 232));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 320));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 236));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 228), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r5 = MemoryInline::FlatRead32((r29 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 232), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r0 = MemoryInline::FlatRead32((r29 + 232));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 236), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r29 + 236));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x80792814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 44);
    r0 = MemoryInline::FlatRead32((r29 + 80));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80792828:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 28));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 124), 0, 192u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 92u, (r29 + 216));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r29 + 184));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r29 + 124));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_2));
    f7.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 116u, (r29 + 240));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 120u, (r29 + 244));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r29 + 128));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_3 = (r29 + 248);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3, f5.d);
    f5.d = PpcFmulsInline(f0.d, f7.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r29 + 132));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 124u, (r29 + 248));
    f3.d = PpcFmulsInline(f3.d, f7.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 188u, (r29 + 312));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 252), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 256), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 260), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807928B4;
    }
}

loc_80792894:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 312), f0.d);
    goto loc_807928D0;
}

loc_807928B4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 312), f0.d);
}

loc_807928D0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 32), 0, 284u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 280u, (r29 + 312));
    r3 = 0x808A0000u;
    r4 = 552075264;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 136u, (r29 + 168));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 188u, (r29 + 220));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 148u, (r29 + 180));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 316), f3.d);
    r5 = 0x809C0000u;
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r29 + 100));
    r6 = (r4 + 4095);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 220u, (r29 + 252));
    r9 = 0;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    r8 = MemoryInline::FlatRead32((r3 + 26316));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 72u, (r29 + 104));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 224u, (r29 + 256));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 76u, (r29 + 108));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 228u, (r29 + 260));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    r28 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r29 + 32));
    r3 = MemoryInline::FlatRead32((r5 + 12100));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 180));
    r4 = (r28 + 68);
    r5 = (r28 + 188);
    r7 = (r28 + 216);
    ctx->lr = 0x8079296Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80792970:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807929A4;
    }
}

loc_80792974:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 44);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 240);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 52);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_6 = (r29 + 44);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_6, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 248);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_7 = (r29 + 52);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_7, f0.d);
    goto loc_807929C0;
}

loc_807929A4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_8 = (r29 + 44);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_8));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_9 = (r29 + 52);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_10 = (r29 + 44);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_10, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_11 = (r29 + 52);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_11, f1.d);
}

loc_807929C0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_4 = (r28 + 68);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4));
    r27 = (r30 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_13 = (r29 + 44);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_13));
    r26 = (r27 + 24);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r3 = r26;
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f1.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r4 = (r1 + 20);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_5 = (r28 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_5, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_6 = (r28 + 76);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_6));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_14 = (r29 + 52);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_14));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f1.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_7 = (r28 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_7, f1.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r29 + 112), 0, 208u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 128u, (r29 + 240));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r29 + 112));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 132u, (r29 + 244));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r29 + 116));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 136u, (r29 + 248));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r29 + 120));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 200u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 200u, (r29 + 312));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 204u, (r29 + 316));
        }
    }
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    r5 = MemoryInline::FlatRead32((r30 + 56));
    r0 = MemoryInline::FlatRead32((r30 + 60));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r0 = MemoryInline::FlatRead32((r30 + 64));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x80792A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 35);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80792A78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80792A98;
    }
}

loc_80792A7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r26, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_2 = (r26 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2, f1.d);
}

loc_80792A98:
{
    r3 = (r27 + 12);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_15 = (r29 + 100);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_15));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f0.d), f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_16 = (r29 + 108);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_16));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f0.d), f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f1.d);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r0 = MemoryInline::FlatRead32((r27 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r0 = MemoryInline::FlatRead32((r27 + 20));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x80792AE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r27;
    ctx->lr = 0x80792AF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80791448u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    r11 = (r1 + 80);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFF4F fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80792618 func_80792618 preserves=true fpr_mask=0x00000000
