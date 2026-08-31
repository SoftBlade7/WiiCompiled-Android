#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807931DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_807933F8_loc_0 = 0;
    uint32_t addr_stfsx_80793400_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807931DC;

loc_807931DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 19672);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 116));
    MemoryInline::FlatWriteFloat32((r3 + 228), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 120));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 228);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 216));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r3 + 236), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 184));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f4.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 236);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    f9.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 240));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f0.d)));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 244));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f8.d = PpcFmulsInline(f1.d, f9.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 248);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f4.d);
    f6.d = PpcFmulsInline(f2.d, f9.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f4.d = PpcFmulsInline(f1.d, f9.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 252), f7.d);
    f5.d = PpcFmulsInline(f2.d, f1.d);
    r5 = MemoryInline::FlatRead32((r3 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 256), f6.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 260), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 180));
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 68), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r5 + 72), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 260));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r5 + 76), f1.d);
    r5 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 320), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    r6 = (r5 + 32);
    MemoryInline::FlatWriteFloat32((r3 + 324), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 316), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 312), f2.d);
    MemoryInline::FlatWriteFloat32((r5 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    MemoryInline::FlatWriteFloat32((r5 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    MemoryInline::FlatWriteFloat32((r5 + 52), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 240));
    MemoryInline::FlatWriteFloat32((r5 + 56), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 244));
    MemoryInline::FlatWriteFloat32((r5 + 60), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    MemoryInline::FlatWriteFloat32((r5 + 64), f1.d);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 35);
}

loc_80793330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079334C;
    }
}

loc_80793334:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_2 = (r6 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 32);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r6_psq_tmp_4 = (r6 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_4, f1.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_8079334C:
{
    r3 = r6;
    ctx->lr = 0x80793354u;
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
    InvokeDirectCpu<0x80791448u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    r5 = (r30 + 4);
    MemoryInline::FlatWriteFloat32((r30 + 288), f0.d);
    r6 = (r30 + 12);
    r7 = 1;
    goto loc_807933B8;
}

loc_8079336C:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r7 = (r7 + 1);
    r3 = MemoryInline::FlatRead32((r5 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 252));
    MemoryInline::FlatWriteFloat32((r6 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 256));
    MemoryInline::FlatWriteFloat32((r6 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 260));
    MemoryInline::FlatWriteFloat32((r6 + 260), f0.d);
    r6 = (r6 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 288));
    MemoryInline::FlatWriteFloat32((r5 + 288), f0.d);
    r5 = (r5 + 4);
}

loc_807933B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
}

loc_807933C0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8079336C;
    }
}

loc_807933C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    r0 = 2;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 116));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 120));
    r3 = 0;
    MemoryInline::FlatWriteFloat32((r30 + 300), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r30 + 304), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 308), f1.d);
    MemoryInline::FlatWrite32((r30 + 336), r4);
    ctr = r0;
}

loc_807933F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 328), 0, 8u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    addr_stfsx_807933F8_loc_0 = (r4 + r3);
    MemoryInline::FlatWriteFloat32(addr_stfsx_807933F8_loc_0, f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    addr_stfsx_80793400_loc_0 = (r4 + r3);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80793400_loc_0, f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 328));
    r4 = (r0 + r3);
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 332));
    r4 = (r0 + r3);
    r3 = (r3 + 32);
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807933F4;
    }
}

loc_807934B4:
{
    r5 = (r30 + 4);
    r6 = 1;
    goto loc_80793518;
}

loc_807934C0:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r6 = (r6 + 1);
    r3 = MemoryInline::FlatRead32((r5 + 32));
    r5 = (r5 + 4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 32), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r4 + 32));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 32), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r4 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 64), f0.d);
}

loc_80793518:
{
    r0 = MemoryInline::FlatRead32((r30 + 80));
}

loc_80793520:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_807934C0;
    }
}

loc_80793524:
{
    r3 = r30;
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590650
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80793530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80793554;
    }
}

loc_80793534:
{
    r3 = r30;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 246;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80793554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80793554:
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
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807931DC func_807931DC preserves=true fpr_mask=0x00000000
