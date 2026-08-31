#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D77D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_5 = 0;
    uint32_t r8_psq_tmp_6 = 0;
    uint32_t r8_psq_tmp_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_807D77D4;

loc_807D77D4:
{
    r7 = MemoryInline::FlatRead32((r3 + 16));
    r9 = 0x808A0000u;
    r9 = (r9 + 29696);
    r11 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r9 + 176));
    r10 = (r6 * 12);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 192));
    f1.d = MemoryInline::FlatReadFloat32((r9 + 344));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r9 + 340));
    r8 = (r3 + r10);
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_807D7860;
}

loc_807D7808:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_2 = (r8 + 1084);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_2));
    r11 = (r11 + 1);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f4.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_3 = (r8 + 1084);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_3, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_4 = (r8 + 1092);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_4));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f4.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_5 = (r8 + 1092);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_5, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 1060));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 1084));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r8 + 1084), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 1064));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 1088));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r8 + 1088), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 1068));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 1092));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r8 + 1092), f1.d);
}

loc_807D7860:
{
    r0 = MemoryInline::FlatRead8((r3 + 575));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r7 = (0 - r0);
    r0 = (r7 + 2);
}

loc_807D7878:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(r0))) {
        goto loc_807D7808;
    }
}

loc_807D787C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_6 = (r8 + 1084);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_6));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_7 = (r8 + 1092);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_7));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1, f1.d);
    r0 = MemoryInline::FlatRead8((r3 + 573));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D78A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D792C;
    }
}

loc_807D78A8:
{
    r7 = (r3 + r10);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    r8 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 1064));
    r11 = 0;
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 1060));
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 1068));
    f1.d = MemoryInline::FlatReadFloat32((r9 + 212));
    f5.d = PpcFmulsInline(f2.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r9 + 348));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f4.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_807D7910;
}

loc_807D78F8:
{
    f3.d = MemoryInline::FlatReadFloat32((r8 + 1108));
    r11 = (r11 + 1);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r8 + 1108), f1.d);
}

loc_807D7910:
{
    r0 = MemoryInline::FlatRead8((r3 + 575));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 1);
    r7 = (0 - r0);
    r0 = (r7 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r0));
}

loc_807D7928:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D78F8;
    }
}

loc_807D792C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 40));
    r6 = (r3 + r0);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 1108));
    r3 = (r3 + r10);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = PpcFmulsInline(f1.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f6.d));
    f2.d = MemoryInline::FlatReadFloat32((r9 + 296));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r5 + 8), f6.d);
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1088));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FC9 gpr_return=0x00000008 fpr_read=0x0000003F fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D77D4 func_807D77D4 preserves=true fpr_mask=0x00000000
