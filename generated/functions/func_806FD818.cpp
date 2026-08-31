#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FD818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FD818;

loc_806FD818:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r4 = 0x809C0000u;
    r30 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10320));
    r25 = r3;
    r30 = (r30 + 4960);
    r0 = MemoryInline::FlatRead8((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FD858:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FD9B8;
    }
}

loc_806FD85C:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FD864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD9B8;
    }
}

loc_806FD868:
{
    f31.d = MemoryInline::FlatReadFloat32(r30);
    r28 = r25;
    r29 = (r3 + 4);
    r27 = (r1 + 8);
    r26 = 0;
    r31 = 0x809C0000u;
    goto loc_806FD8C4;
}

loc_806FD884:
{
    r12 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x806FD898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    // inline leaf 0x80213F54 (13 guest instruction(s))
}

loc_inl1_0x80213F54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r0 = 0;
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_inl1_0x80213F60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x80213F70;
    }
}

loc_inl1_0x80213F64:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    r0 = 1;
    goto loc_inl1_0x80213F80;
}

loc_inl1_0x80213F70:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl1_0x80213F74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x80213F80;
    }
}

loc_inl1_0x80213F78:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r0 = 1;
}

loc_inl1_0x80213F80:
{
    r3 = r0;
}

loc_inl1_cont_80213F54:
{
    // end of inlined leaf 0x80213F54
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    r26 = (r26 + 1);
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r27 = (r27 + 4);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r29 = (r29 + 28);
    r28 = (r28 + 28);
}

loc_806FD8C4:
{
    r3 = MemoryInline::FlatRead8((r31 + 9033));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r3));
}

loc_806FD8CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FD884;
    }
}

loc_806FD8D0:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 56));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_806FD8F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FD90C;
    }
}

loc_806FD8F8:
{
    r3 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FD900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD90C;
    }
}

loc_806FD904:
{
    r4 = 0;
    ctx->lr = 0x806FD90Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806FD90C:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806FD914:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FD9B8;
    }
}

loc_806FD918:
{
    r3 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FD920:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD930;
    }
}

loc_806FD924:
{
    f1.d = f30.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_806FD930:
{
    r3 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r0 = MemoryInline::FlatRead8((r3 + 9033));
    f0.d = f2.d;
}

loc_806FD944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_806FD95C;
    }
}

loc_806FD948:
{
}

loc_806FD94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_806FD968;
    }
}

loc_806FD950:
{
}

loc_806FD954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_806FD984;
    }
}

loc_806FD958:
{
    goto loc_806FD99C;
}

loc_806FD95C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    goto loc_806FD99C;
}

loc_806FD968:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_806FD99C;
}

loc_806FD984:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_806FD99C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f31.d));
    r3 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FD9A8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD9B8;
    }
}

loc_806FD9B4:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
}

loc_806FD9B8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FD818 func_806FD818 preserves=false fpr_mask=0xC0000000
