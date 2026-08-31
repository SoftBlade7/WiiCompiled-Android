#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80052AF0;

loc_80052AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80052B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052C70;
    }
}

loc_80052B18:
{
    r31 = MemoryInline::FlatRead32(r4);
    r0 = (r31 & 128);
}

loc_80052B20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052B78;
    }
}

loc_80052B24:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r3 & 8);
}

loc_80052B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052B48;
    }
}

loc_80052B30:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29856));
    r31 = (r31 | 24);
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    goto loc_80052B78;
}

loc_80052B48:
{
    r0 = (r3 & 16);
}

loc_80052B4C:
{
    r3 = (r31 & -17);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052B58;
    }
}

loc_80052B54:
{
    r3 = (r31 | 16);
}

loc_80052B58:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r0 = -11;
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r31 = (r3 & r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
}

loc_80052B78:
{
    r0 = (r31 & 256);
}

loc_80052B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052BFC;
    }
}

loc_80052B80:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052B90:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052BB4;
    }
}

loc_80052BA4:
{
    r3 = (r4 + 28);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x80199D04
    r31 = (r31 | 32);
    goto loc_80052BE0;
}

loc_80052BB4:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 52));
    r3 = (r4 + 28);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29852));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = -39;
    r31 = (r31 & r0);
}

loc_80052BE0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r31 = (r31 | -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 40), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
}

loc_80052BFC:
{
    r0 = (r31 & 512);
}

loc_80052C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052C48;
    }
}

loc_80052C04:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 & 2);
}

loc_80052C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052C28;
    }
}

loc_80052C10:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    r31 = (r31 | 64);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    goto loc_80052C48;
}

loc_80052C28:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    r0 = -71;
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    r31 = (r31 & r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
}

loc_80052C48:
{
    r0 = (r31 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052C4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052C68;
    }
}

loc_80052C50:
{
    r0 = (r31 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052C68;
    }
}

loc_80052C58:
{
    r31 = (r31 | 4);
    r0 = (r31 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052C68;
    }
}

loc_80052C64:
{
    r31 = (r31 | 2);
}

loc_80052C68:
{
    r0 = (r31 & -897);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_80052C70:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000DF gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052AF0 func_80052AF0 preserves=true fpr_mask=0x00000000
