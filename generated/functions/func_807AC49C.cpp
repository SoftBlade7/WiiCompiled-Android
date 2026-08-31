#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AC49C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807AC49C;

loc_807AC49C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23288);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 176));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807AC4D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 128), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AC4F8;
    }
}

loc_807AC4E8:
{
    ctx->lr = 0x807AC4ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EECCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 124));
    r0 = (r0 | 8388608);
    MemoryInline::FlatWrite32((r30 + 124), r0);
}

loc_807AC4F8:
{
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r3 = r30;
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r30 + 120), r0);
    // inline leaf 0x807B3EEC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 640), r0);
    MemoryInline::FlatWrite32((r3 + 696), r0);
    // end of inlined leaf 0x807B3EEC
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r3 = r30;
    r0 = (r0 & -16777217);
    r0 = (r0 | 16384);
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r30 + 120), r0);
    ctx->lr = 0x807AC528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807AC1A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 152), 0, 652u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 640u, (r30 + 792), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 196));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 644u, (r30 + 796), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_0 = (r30 + 80);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 792);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 648u, (r30 + 800), f0.d);
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f6.d, f7.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 88);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 204));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    MemoryInline::WriteResolved8(guest_range_0, 596u, (r30 + 748), static_cast<uint8_t>(r3));
    r3 = r30;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 800);
    PpcSetPairedFprInline(f7, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 780);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, f8.d);
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f6.d, f7.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 580u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 580u, (r30 + 732), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 584u, (r30 + 736), f4.d);
    }
    MemoryInline::WriteResolved16(guest_range_0, 588u, (r30 + 740), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 600u, (r30 + 752), f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_5 = (r30 + 788);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_5, f8.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 616u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 616u, (r30 + 768), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 620u, (r30 + 772), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 624u, (r30 + 776), f0.d);
    // inline leaf 0x807A2F7C (3 guest instruction(s))
    r0 = (r3 + 128);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 152), r0);
    // end of inlined leaf 0x807A2F7C
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF801FFB gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807AC49C func_807AC49C preserves=true fpr_mask=0x00000000
