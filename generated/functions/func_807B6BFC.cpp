#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B6BFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_10 = 0;
    uint32_t r31_psq_tmp_11 = 0;
    uint32_t r31_psq_tmp_12 = 0;
    uint32_t r31_psq_tmp_13 = 0;
    uint32_t r31_psq_tmp_14 = 0;
    uint32_t r31_psq_tmp_15 = 0;
    uint32_t r31_psq_tmp_16 = 0;
    uint32_t r31_psq_tmp_17 = 0;
    uint32_t r31_psq_tmp_18 = 0;
    uint32_t r31_psq_tmp_19 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_8 = 0;
    uint32_t r31_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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

    goto loc_807B6BFC;

loc_807B6BFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 116), 0, 220u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 120));
    r0 = (r0 & 16);
}

loc_807B6C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6EF0;
    }
}

loc_807B6C20:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 192u, (r3 + 308));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6C38;
    }
}

loc_807B6C30:
{
    r4 = (r31 + 324);
    ctx->lr = 0x807B6C38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x807BD8E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_807B6C38:
{
    r3 = MemoryInline::FlatRead32((r31 + 308));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6C60;
    }
}

loc_807B6C48:
{
    r4 = (r31 + 324);
    r5 = (r31 + 200);
    ctx->lr = 0x807B6C54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x807BD908u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    r0 = MemoryInline::FlatRead32((r31 + 116));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r31 + 116), r0);
}

loc_807B6C60:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 110), 0, 226u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 70u, (r31 + 180));
    r3 = 1827405824;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 90u, (r31 + 200));
    r7 = 0x809C0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 94u, (r31 + 204));
    r6 = (r3 + -8193);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 98u, (r31 + 208));
    f6.d = PpcFmulsInline(f3.d, f1.d);
    f4.d = PpcFmulsInline(f0.d, f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 214u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 214u, (r31 + 324));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 218u, (r31 + 328));
        }
    }
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 222u, (r31 + 332));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r31 + 110));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f5.d);
    r4 = (r31 + 68);
    MemoryInline::FlatWriteFloat32((r31 + 72), f3.d);
    r5 = (r31 + 188);
    r8 = (r31 + 212);
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r7 + 12100));
    r7 = (r31 + 216);
    ctx->lr = 0x807B6CCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x8078F784u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_807B6CD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807B6DB8;
    }
}

loc_807B6CD4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 240);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 324);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_4 = (r31 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_4));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f4.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_5 = (r31 + 248);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_6 = (r31 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_6, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_7 = (r31 + 332);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_8 = (r31 + 324);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_8, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f4.d, f1.d));
    r3 = MemoryInline::FlatRead32((r31 + 308));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_9 = (r31 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_9, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_10 = (r31 + 332);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_10, f3.d);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 16);
}

loc_807B6D18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807B6D78;
    }
}

loc_807B6D1C:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 296));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6D2C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
}

loc_807B6D34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_807B6D78;
    }
}

loc_807B6D38:
{
    f5.d = MemoryInline::FlatReadFloat32((r31 + 276));
    r30 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r31 + 280));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 284));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 324));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 328));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 332));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r31 + 80), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 84), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 88), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 324), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 328), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 332), f0.d);
}

loc_807B6D78:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 288));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6D88:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1);
}

loc_807B6D90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6DB8;
    }
}

loc_807B6D94:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 252));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 256));
    r0 = (r0 | 128);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 260));
    MemoryInline::FlatWriteFloat32((r31 + 200), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 208), f0.d);
    MemoryInline::FlatWrite32((r31 + 116), r0);
}

loc_807B6DB8:
{
}

loc_807B6DBC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_807B6DE0;
    }
}

loc_807B6DC0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_12 = (r31 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_13 = (r31 + 188);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_13));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_14 = (r31 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_14));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_15 = (r31 + 196);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_15));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_16 = (r31 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_16, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_17 = (r31 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_17, f0.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_807B6DE0:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    r0 = (r0 & 128);
}

loc_807B6DE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6E0C;
    }
}

loc_807B6DEC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 200));
    r3 = (r31 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    MemoryInline::FlatWriteFloat32((r31 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 48), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    ctx->lr = 0x807B6E0Cu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x807912E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
}

loc_807B6E0C:
{
    r3 = MemoryInline::FlatRead32((r31 + 308));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 & 2);
}

loc_807B6E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6E64;
    }
}

loc_807B6E1C:
{
    r3 = r31;
    ctx->lr = 0x807B6E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x807A313Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24968));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_807B6E34:
{
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B6E54;
    }
}

loc_807B6E44:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x807B6E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x807A6560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B6F3C;
}

loc_807B6E54:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x807B6E60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x807A6C14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B6F3C;
}

loc_807B6E64:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6E80;
    }
}

loc_807B6E6C:
{
    r3 = r31;
    ctx->lr = 0x807B6E74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x807A313Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A72ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    goto loc_807B6F3C;
}

loc_807B6E80:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6E84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6F3C;
    }
}

loc_807B6E88:
{
    r3 = r31;
    ctx->lr = 0x807B6E90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x807A313Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r30 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r31 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24968));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    // inline leaf 0x8079EC44 (21 guest instruction(s))
}

loc_inl0_0x8079EC44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x8079EC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8079EC68;
    }
}

loc_inl0_0x8079EC4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    goto loc_inl0_0x8079EC80;
}

loc_inl0_0x8079EC68:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
}

loc_inl0_0x8079EC80:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl0_cont_8079EC44:
{
    // end of inlined leaf 0x8079EC44
    r3 = MemoryInline::FlatRead32((r31 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24968));
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    goto loc_807B6F3C;
}

loc_807B6EF0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 116));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6EF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6F3C;
    }
}

loc_807B6EFC:
{
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 84u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 200));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r3 + 204));
        }
    }
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 208u, (r3 + 324));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r3 + 208));
    f3.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 212u, (r3 + 328));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 216u, (r3 + 332));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
}

loc_807B6F3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B6BFC func_807B6BFC preserves=true fpr_mask=0x00000000
