#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B66F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B66F0;

loc_807B66F0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r31 = r6;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    r29 = r4;
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    r28 = r3;
    r7 = MemoryInline::FlatRead32((r3 + 80));
    r0 = MemoryInline::FlatRead32((r3 + 84));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r7);
    }
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r3 = (r3 + 420);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    ctx->lr = 0x807B6740u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80793F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_807B6744:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 372), 0, 92u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r28 + 416), f1.d);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807B6778;
    }
}

loc_807B674C:
{
    r3 = 0x808A0000u;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24960));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 420);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    f0.d = (-(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 428);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r28 + 416), f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 420);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_4 = (r28 + 428);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4, f2.d);
}

loc_807B6778:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 428));
    r3 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r28 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807B6788:
{
    f4.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 424));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24856));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r28 + 432), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r28 + 436), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r28 + 440), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r28 + 444), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r28 + 448), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r28 + 452), f3.d);
    }
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B67C0;
    }
}

loc_807B67B0:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r28 + 456), r0);
    MemoryInline::WriteResolved8(guest_range_0, 89u, (r28 + 461), static_cast<uint8_t>(r0));
    goto loc_807B67CC;
}

loc_807B67C0:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r28 + 456), r29);
    MemoryInline::WriteResolved8(guest_range_0, 89u, (r28 + 461), static_cast<uint8_t>(r0));
}

loc_807B67CC:
{
    r6 = 0x808D0000u;
    r6 = (r6 + 9720);
    r5 = MemoryInline::FlatRead32(r6);
    r3 = 1;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r6 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r28 + 376), r4);
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r28 + 372), r5);
    }
    r4 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r28 + 380), r4);
    MemoryInline::WriteResolved8(guest_range_0, 90u, (r28 + 462), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r28 + 460), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 91u, (r28 + 463), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007E gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B66F0 func_807B66F0 preserves=true fpr_mask=0x00000000
