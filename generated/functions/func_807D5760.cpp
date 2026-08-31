#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D5760(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D5760;

loc_807D5760:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r3 + 144));
    r27 = 0x808A0000u;
    r28 = r3;
    r29 = r4;
}

loc_807D5788:
{
    r30 = r5;
    r31 = r6;
    r27 = (r27 + 29696);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D58B4;
    }
}

loc_807D5798:
{
    // inline leaf 0x8078DDB4 (12 guest instruction(s))
}

loc_inl1_0x8078DDB4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 12092));
}

loc_inl1_0x8078DDC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8078DDDC;
    }
}

loc_inl1_0x8078DDC8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10504));
    r0 = MemoryInline::FlatRead8((r4 + 76));
}

loc_inl1_0x8078DDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8078DDDC:
{
    r3 = 1;
    goto loc_inl1_cont_8078DDB4;
}

loc_inl1_return:
{
}

loc_inl1_cont_8078DDB4:
{
    // end of inlined leaf 0x8078DDB4
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r28 + 573), static_cast<uint8_t>(r0));
    // inline leaf 0x807C6A0C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 214));
    // end of inlined leaf 0x807C6A0C
    MemoryInline::FlatWrite8((r28 + 574), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 326));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D57C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D57CC;
    }
}

loc_807D57C4:
{
    r3 = 0;
    goto loc_807D5830;
}

loc_807D57CC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D3054u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_807D57D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D57E0;
    }
}

loc_807D57D8:
{
    r3 = 1;
    goto loc_807D5830;
}

loc_807D57E0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 1060);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 196));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 1068));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f1.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_807D5800:
{
    r0 = cr;
    r3 = 1;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_807D580C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807D5830;
    }
}

loc_807D5810:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 1108));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 200));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D5820:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_807D5828:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807D5830;
    }
}

loc_807D582C:
{
    r3 = 0;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_807D5830:
{
    MemoryInline::FlatWrite8((r28 + 1008), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 326));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D584C;
    }
}

loc_807D5844:
{
    r3 = 0;
    goto loc_807D58B0;
}

loc_807D584C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D30A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_807D5854:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D5860;
    }
}

loc_807D5858:
{
    r3 = 1;
    goto loc_807D58B0;
}

loc_807D5860:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 1072);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 204));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 1080));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f1.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_807D5880:
{
    r0 = cr;
    r3 = 1;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_807D588C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807D58B0;
    }
}

loc_807D5890:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 1112));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 208));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D58A0:
{
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_807D58A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807D58B0;
    }
}

loc_807D58AC:
{
    r3 = 0;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_807D58B0:
{
    MemoryInline::FlatWrite8((r28 + 1009), static_cast<uint8_t>(r3));
}

loc_807D58B4:
{
    r4 = MemoryInline::FlatRead32((r28 + 144));
    r3 = MemoryInline::FlatRead32((r28 + 136));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807D58C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D592C;
    }
}

loc_807D58CC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r4 * 12);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r28;
    r4 = r29;
    r7 = MemoryInline::FlatRead32((r28 + 564));
    r6 = r31;
    r5 = (r1 + 8);
    r12 = (r7 + r0);
    ctx->lr = 0x807D58F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
    r3 = MemoryInline::FlatRead32((r28 + 144));
    r0 = MemoryInline::FlatRead32((r28 + 140));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 144), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_807D590C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D5918;
    }
}

loc_807D5910:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 144), r0);
}

loc_807D5918:
{
    r0 = MemoryInline::FlatRead32((r28 + 144));
    r3 = MemoryInline::FlatRead32((r28 + 132));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
}

loc_807D592C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xF80018FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807D5760 func_807D5760 preserves=true fpr_mask=0x00000000
