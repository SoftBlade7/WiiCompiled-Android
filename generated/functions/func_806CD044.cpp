#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CD044(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_806CD1D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806CD044;

loc_806CD044:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r1 + 32), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
    r31 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + -968);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r29);
    ctx->lr = 0x806CD09Cu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806C9630u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 92u, true, false);
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 36));
    r6 = 0;
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 44));
    r3 = 15;
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r5 = -1;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 28));
    r4 = 1;
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 16));
    r0 = 10;
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 20));
    r8 = 0;
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    r7 = 0;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 32));
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f10.d = PpcBitCastToFloatInline(resolved_pair.first);
            f9.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 48));
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r30 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            f8.d = PpcBitCastToFloatInline(resolved_pair.first);
            f7.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r30 + 56));
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r30 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r30 + 64));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r30 + 72));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 80));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r30 + 84));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r30 + 88));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 357), 0, 219u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r31 + 357), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r31 + 358), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r31 + 359), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_2, 3u, (r31 + 360), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_2, 19u, (r31 + 376), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 7u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f26.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f26.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 7u, (r31 + 364), f26.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 11u, (r31 + 368), f26.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 75u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f27.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f28.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 75u, (r31 + 432), f27.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 79u, (r31 + 436), f28.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 83u, (r31 + 440), f29.d);
    MemoryInline::WriteResolved8(guest_range_2, 31u, (r31 + 388), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 39u, (r31 + 396), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 91u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f30.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 91u, (r31 + 448), f30.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 95u, (r31 + 452), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 99u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f13.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 99u, (r31 + 456), f13.d);
        MemoryInline::WriteResolved32(guest_range_2, 103u, (r31 + 460), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 107u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f12.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 107u, (r31 + 464), f12.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 111u, (r31 + 468), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 115u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 115u, (r31 + 472), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 119u, (r31 + 476), f9.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 87u, (r31 + 444), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 55u, (r31 + 412), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 63u, (r31 + 420), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 67u, (r31 + 424), f8.d);
    MemoryInline::WriteResolved8(guest_range_2, 71u, (r31 + 428), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 123u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f30.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 123u, (r31 + 480), f30.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 127u, (r31 + 484), f13.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 131u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 131u, (r31 + 488), f7.d);
        MemoryInline::WriteResolved32(guest_range_2, 135u, (r31 + 492), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 139u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 139u, (r31 + 496), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 143u, (r31 + 500), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 147u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f26.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 147u, (r31 + 504), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 151u, (r31 + 508), f26.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 155u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 155u, (r31 + 512), f4.d);
        MemoryInline::WriteResolved32(guest_range_2, 159u, (r31 + 516), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 163u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 163u, (r31 + 520), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 167u, (r31 + 524), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 171u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f30.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f13.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 171u, (r31 + 528), f30.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 175u, (r31 + 532), f13.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 179u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f13.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 179u, (r31 + 536), f13.d);
        MemoryInline::WriteResolved32(guest_range_2, 183u, (r31 + 540), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 187u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f11.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 187u, (r31 + 544), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 191u, (r31 + 548), f11.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 207u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 207u, (r31 + 564), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 211u, (r31 + 568), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 215u, (r31 + 572), f13.d);
    MemoryInline::WriteResolved32(guest_range_2, 59u, (r31 + 416), r6);
    goto loc_806CD1E0;
}

loc_806CD1C8:
{
    r3 = MemoryInline::FlatRead32((r31 + 380));
    r3_addr_2 = (r3 + r8);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r6));
    r8 = (r8 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 392));
    addr_stfsx_806CD1D8_loc_0 = (r3 + r7);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806CD1D8_loc_0, f26.d);
    r7 = (r7 + 4);
}

loc_806CD1E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
}

loc_806CD1E8:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_806CD1C8;
    }
}

loc_806CD1EC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRamFloat32((r4 + 8908), f1.d);
    r3 = 0x808C0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32((r3 + 17212), f0.d);
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 356), static_cast<uint8_t>(r0));
    r30 = MemoryInline::FlatRead32((r31 + 32));
    goto loc_806CD240;
}

loc_806CD218:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_806CD22C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_806CD23C;
    }
}

loc_806CD230:
{
    r3 = MemoryInline::FlatRead8((r31 + 356));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 356), static_cast<uint8_t>(r0));
}

loc_806CD23C:
{
    r4 = (r4 + 1);
}

loc_806CD240:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806CD248:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CD218;
    }
}

loc_806CD24C:
{
    r0 = MemoryInline::FlatRead8((r31 + 356));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    ctx->lr = 0x806CD258u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 352), r3);
    r4 = 0;
    r5 = 0;
    goto loc_806CD294;
}

loc_806CD268:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 1048560);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_806CD27C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_806CD290;
    }
}

loc_806CD280:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 510);
    r4 = (r4 + 1);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_4, static_cast<uint16_t>(r5));
}

loc_806CD290:
{
    r5 = (r5 + 1);
}

loc_806CD294:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_806CD29C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_806CD268;
    }
}

loc_806CD2A0:
{
    r29 = 0;
    r30 = 0;
    goto loc_806CD2D0;
}

loc_806CD2AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 224));
    r4 = 1;
    r3_addr_7 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 256));
    ctr = r12;
    ctx->lr = 0x806CD2C8u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_806CD2D0:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_806CD2D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CD2AC;
    }
}

loc_806CD2DC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 116u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 92u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 76u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 60u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 44u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 28u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 12u, (r1 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 24));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 112u, (r1 + 132));
    r29 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CD044 func_806CD044 preserves=true fpr_mask=0x00000000
