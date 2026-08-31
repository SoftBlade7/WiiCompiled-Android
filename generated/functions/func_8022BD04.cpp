#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022BD04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8022BD04;

loc_8022BD04:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead16((r3 + 118));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022BD18:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022BEF0;
    }
}

loc_8022BD2C:
{
    r0 = (r5 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022BD30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022BEF0;
    }
}

loc_8022BD34:
{
    r7 = MemoryInline::FlatRead8((r3 + 136));
    r4 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r3 + 137));
    r5 = MemoryInline::FlatRead8((r3 + 138));
    r0 = MemoryInline::FlatRead8((r3 + 139));
    r3 = r31;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    // inline leaf 0x80170314 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80170314
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 64), 0, 112u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 64));
}

loc_8022BD68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8022BD80;
    }
}

loc_8022BD6C:
{
}

loc_8022BD70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022BDD4;
    }
}

loc_8022BD74:
{
}

loc_8022BD78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8022BE08;
    }
}

loc_8022BD7C:
{
    goto loc_8022BE30;
}

loc_8022BD80:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25048));
    r4 = (r1 + 16);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 164);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    r3 = r31;
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 172);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    r5 = 0x80250000u;
    r3 = r31;
    r4 = (r5 + 30776);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 30776));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x801701C4 (7 guest instruction(s))
    f4.d = (-(f1.d));
    f1.d = (-(f2.d));
    f0.d = (-(f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    // end of inlined leaf 0x801701C4
    goto loc_8022BE30;
}

loc_8022BDD4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 140));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 144));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r30 + 148));
        }
    }
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    r5 = 0x80250000u;
    r3 = r31;
    r4 = (r5 + 30776);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 30776));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x801701C4 (7 guest instruction(s))
    f4.d = (-(f1.d));
    f1.d = (-(f2.d));
    f0.d = (-(f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    // end of inlined leaf 0x801701C4
    goto loc_8022BE30;
}

loc_8022BE08:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 140));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 144));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r30 + 148));
        }
    }
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r30 + 164));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 104u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r30 + 168));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r30 + 172));
        }
    }
    // inline leaf 0x801701C4 (7 guest instruction(s))
    f4.d = (-(f1.d));
    f1.d = (-(f2.d));
    f0.d = (-(f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    // end of inlined leaf 0x801701C4
}

loc_8022BE30:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 54u, (r30 + 118));
    r0 = (r0 & 128);
}

loc_8022BE38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022BE54;
    }
}

loc_8022BE3C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 80));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 84));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 88));
        }
    }
    // inline leaf 0x8016FF20 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f3.d);
    // end of inlined leaf 0x8016FF20
    goto loc_8022BE78;
}

loc_8022BE54:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 68));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25096));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022BE64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022BE6C;
    }
}

loc_8022BE68:
{
    goto loc_8022BE70;
}

loc_8022BE6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25044));
}

loc_8022BE70:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 104));
    ctx->lr = 0x8022BE78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016FF40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8022BE78:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 56), 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 62u, (r30 + 118));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022BE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022BE9C;
    }
}

loc_8022BE84:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r30 + 92));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r30 + 96));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r30 + 100));
        }
    }
    // inline leaf 0x8016FF30 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f3.d);
    // end of inlined leaf 0x8016FF30
    goto loc_8022BEB8;
}

loc_8022BE9C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r30 + 56));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r30 + 72));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r30 + 76));
        }
    }
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r30 + 108));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801700C8u>(ctx);
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8022BEB8:
{
    r0 = MemoryInline::FlatRead16((r30 + 118));
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022BEC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022BF1C;
    }
}

loc_8022BEC4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 112));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25072));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25096));
    f4.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -25080));
    f2.d = f1.d;
    f5.d = f1.d;
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    // inline leaf 0x8016FF04 (7 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f6.d);
    // end of inlined leaf 0x8016FF04
    goto loc_8022BF1C;
}

loc_8022BEF0:
{
    r7 = MemoryInline::FlatRead8((r2 + -25696));
    r3 = r31;
    r6 = MemoryInline::FlatRead8((r2 + -25695));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r2 + -25694));
    r0 = MemoryInline::FlatRead8((r2 + -25693));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    // inline leaf 0x80170314 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x80170314
}

loc_8022BF1C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8022BD04 func_8022BD04 preserves=true fpr_mask=0x00000000
