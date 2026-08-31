#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3C80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807A3C80;

loc_807A3C80:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 21320);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 192));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 84));
    r0 = MemoryInline::FlatRead8((r3 + 408));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 68);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A3CC4:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    f7.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 80);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    f6.d = PpcFmulsInline(f1.d, f7.d);
    f3.d = PpcFmulsInline(f0.d, f7.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f9.d, f5.d));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 404));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f4.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f2.d = PpcFmulsInline(f2.d, f5.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 76);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    f1.d = PpcFmulsInline(f7.d, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f8.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 88);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f9.d, f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f8.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A3D48;
    }
}

loc_807A3D28:
{
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 200));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f1.d);
}

loc_807A3D48:
{
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A3D6C:
{
    MemoryInline::FlatWriteFloat32((r3 + 44), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A3D9C;
    }
}

loc_807A3D78:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = (r3 + 32);
    ctx->lr = 0x807A3D98u;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    InvokeDirectCpu<0x807913D0u>(ctx);
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    goto loc_807A3DBC;
}

loc_807A3D9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r3 = (r3 + 32);
    ctx->lr = 0x807A3DBCu;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
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
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
}

loc_807A3DBC:
{
    r3 = MemoryInline::FlatRead32((r30 + 412));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = (r3 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 208));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807A3DEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        goto loc_807A3E10;
    }
}

loc_807A3DF4:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807A3E10u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[8].d = PPC_PsToScalarInline(ctx->fpr[8].d);
    ctx->fpr[9].d = PPC_PsToScalarInline(ctx->fpr[9].d);
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807A3E10:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807A3E18:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A3E24;
    }
}

loc_807A3E20:
{
    goto loc_807A3E30;
}

loc_807A3E24:
{
    f1.d = f31.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f31.d, f1.d);
}

loc_807A3E30:
{
    f2.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    r3 = r30;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    // inline leaf 0x8079ED4C (26 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r5 = (r5 + 12104);
    r6 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 116));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r4 | 64);
    MemoryInline::FlatWrite32((r3 + 116), r4);
    r6 = (r5 + r6);
    MemoryInline::FlatWriteFloat32((r3 + 100), f1.d);
    r0 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 96), f1.d);
    r5 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    // end of inlined leaf 0x8079ED4C
    r3 = r30;
    ctx->lr = 0x807A3E58u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A3C80 func_807A3C80 preserves=false fpr_mask=0x80000000
