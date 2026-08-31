#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079EA58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8079EA58;

loc_8079EA58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 12104);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 188), f2.d);
    r5 = MemoryInline::FlatRead32((r3 + 116));
    MemoryInline::FlatWrite32((r3 + 356), r9);
    r8 = (r5 | 64);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 192), f1.d);
    r5 = (r0 * 116);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 196), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 136));
    r7 = (r6 + r5);
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    r0 = (r0 * 116);
    r5 = MemoryInline::FlatRead32((r3 + 164));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 140));
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    r6 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 144));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    MemoryInline::FlatWrite32((r3 + 116), r8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 176);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 92);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 184);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 100);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r7 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079EB24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8079EB3C;
    }
}

loc_8079EB28:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + 14548));
}

loc_8079EB34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079EB3C;
    }
}

loc_8079EB38:
{
    r9 = 1;
}

loc_8079EB3C:
{
}

loc_8079EB40:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8079EB5C;
    }
}

loc_8079EB44:
{
    r3 = MemoryInline::FlatRead32((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079EB4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079EB9C;
    }
}

loc_8079EB50:
{
    r4 = 6;
    ctx->lr = 0x8079EB58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055D920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8079EB9C;
}

loc_8079EB5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079EB64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079EB9C;
    }
}

loc_8079EB68:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079EB84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079EB9C;
    }
}

loc_8079EB88:
{
    r3 = r4;
    // inline leaf 0x80591434 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80591434
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 156));
    ctx->lr = 0x8079EB9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055F2B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8079EB9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800027B gpr_write=0xF80003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079EA58 func_8079EA58 preserves=true fpr_mask=0x00000000
