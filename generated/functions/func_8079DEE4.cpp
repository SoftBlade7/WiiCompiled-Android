#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079DEE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8079DEE4;

loc_8079DEE4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r4 = (r4 + 12104);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20992);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 116);
    r4 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079DF24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079DF2C;
    }
}

loc_8079DF28:
{
    goto loc_8079DF30;
}

loc_8079DF2C:
{
    f1.d = f0.d;
}

loc_8079DF30:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r4 = MemoryInline::FlatRead32((r3 + 116));
    r5 = 0x809C0000u;
    r6 = (r0 * 116);
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    r4 = (r4 | 64);
    r5 = (r5 + 12104);
    MemoryInline::FlatWrite32((r3 + 116), r4);
    r6 = (r5 + r6);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 100), f3.d);
    r0 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 96), f3.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteFloat32((r3 + 92), f3.d);
    r5 = (r5 + r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 64));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 200), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 204), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 208), f1.d);
    r3 = (r3 + 212);
    // inline leaf 0x807BDA7C (8 guest instruction(s))
    r4 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r4 = (r4 + 14552);
    MemoryInline::FlatWriteRam32((r4 + 768), r0);
    MemoryInline::FlatWriteRam32((r4 + 772), r0);
    MemoryInline::FlatWriteRam32((r4 + 776), r3);
    // end of inlined leaf 0x807BDA7C
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r0 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    r3 = 0x809C0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 56), 0, 260u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 168u, (r30 + 224), f1.d);
    r4 = MemoryInline::FlatRead8((r30 + 108));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 164u, (r30 + 220), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r30 + 216), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 180u, (r30 + 236), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r30 + 232), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 172u, (r30 + 228), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 236u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 240u, (r30 + 296), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 236u, (r30 + 292), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 232u, (r30 + 288), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 244u, (r30 + 300), f1.d);
    MemoryInline::WriteResolved32(guest_range_1, 256u, (r30 + 312), r0);
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    r4 = (r1 + 32);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = 1;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 56), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 60), f0.d);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 35);
}

loc_8079E024:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 64), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f1.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079E060;
    }
}

loc_8079E044:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 56);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 64);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 56);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 64);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, f1.d);
}

loc_8079E060:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 20));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079E070:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E0BC;
    }
}

loc_8079E07C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 56);
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead32((r30 + 56));
    r0 = MemoryInline::FlatRead32((r30 + 60));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r0 = MemoryInline::FlatRead32((r30 + 64));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8079E0A8u;
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
    r3 = (r30 + 44);
    r4 = (r30 + 56);
    r5 = (r30 + 32);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 4);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0, f10.d);
    // end of inlined leaf 0x8019ACCC
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_8079E0DC;
}

loc_8079E0BC:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
        }
    }
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f1.d);
}

loc_8079E0DC:
{
    r3 = (r30 + 16);
    r4 = (r30 + 32);
    ctx->lr = 0x8079E0E8u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B9DD4u>(ctx);
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 308));
    f0.d = MemoryInline::FlatReadFloat32(r31);
}

loc_8079E0F4:
{
    MemoryInline::FlatWriteFloat32((r30 + 320), f0.d);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8079E100;
    }
}

loc_8079E0FC:
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

loc_8079E100:
{
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r3 = 5;
    r4 = 0;
    MemoryInline::FlatWrite16((r30 + 348), static_cast<uint16_t>(r3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r3 = (r3_rot_0 & 1);
    MemoryInline::FlatWrite16((r30 + 350), static_cast<uint16_t>(r4));
    // inline leaf 0x807D2DDC (2 guest instruction(s))
    r3 = 4;
    // end of inlined leaf 0x807D2DDC
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r6 = (r3 + -1);
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r3 = (r4 * 116);
    MemoryInline::FlatWrite32((r30 + 352), r6);
    r5 = (r5 + 12104);
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E13C:
{
    r5 = (r5 + r3);
    r4 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r5 + 28));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E168;
    }
}

loc_8079E15C:
{
    MemoryInline::FlatWrite32((r30 + 360), r4);
    MemoryInline::FlatWrite32((r30 + 364), r3);
    MemoryInline::FlatWrite32((r30 + 368), r0);
}

loc_8079E168:
{
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r0 = (r0 & 14680064);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E170:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E1D8;
    }
}

loc_8079E174:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E190:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E1D8;
    }
}

loc_8079E194:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E19C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079E1D8;
    }
}

loc_8079E1A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 72));
    r6 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 12016));
    r4 = (r30 + 68);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r5 = 1;
    ctx->lr = 0x8079E1C8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80786064u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 124));
    MemoryInline::FlatWrite32((r30 + 176), r3);
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r30 + 124), r0);
}

loc_8079E1D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079DEE4 func_8079DEE4 preserves=true fpr_mask=0x00000000
