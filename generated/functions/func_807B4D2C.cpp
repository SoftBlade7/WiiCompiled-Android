#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B4D2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_8 = 0;
    uint32_t r31_psq_tmp_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B4D2C;

loc_807B4D2C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_4, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    f3.d = MemoryInline::FlatReadFloat32((r3 + 416));
    r30 = 0x808A0000u;
    r31 = r3;
    r27 = r4;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    r28 = r5;
    r30 = (r30 + 24808);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 416), f1.d);
    r3 = (r3 + 492);
    // inline leaf 0x807B7E58 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    // end of inlined leaf 0x807B7E58
    f2.d = MemoryInline::FlatReadFloat32((r31 + 604));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 600));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 604), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B4D90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B4D9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4DDC;
    }
}

loc_807B4DA0:
{
    r29 = (r31 + 480);
}

loc_807B4DA4:
{
    r4 = MemoryInline::FlatRead8((r31 + 476));
    r3 = (r31 + 616);
    r5 = MemoryInline::FlatRead8((r31 + 477));
    ctx->lr = 0x807B4DB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B99D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r5 = r27;
    r6 = r28;
    r3 = (r31 + 616);
    r4 = (r31 + 476);
    ctx->lr = 0x807B4DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B91E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r29;
    r3 = (r31 + 492);
    ctx->lr = 0x807B4DD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B854Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B4DD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B4DA4;
    }
}

loc_807B4DDC:
{
    r0 = MemoryInline::FlatRead8((r31 + 460));
}

loc_807B4DE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B4E20;
    }
}

loc_807B4DE8:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & 32);
}

loc_807B4DF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B4E20;
    }
}

loc_807B4DF4:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 72));
    r3 = (r31 + 492);
    r4 = (r1 + 8);
    // inline leaf 0x807B8010 (52 guest instruction(s))
    r5 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 68u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 25224));
    r5 = 0x808A0000u;
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 25232));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 48));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f5.d = PpcFmulsInline(f2.d, f5.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 56));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 60));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 68));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 72));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 80));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 84));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 92));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 88));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 52));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f0.d);
    // end of inlined leaf 0x807B8010
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_807B4E0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B4E14;
    }
}

loc_807B4E10:
{
    goto loc_807B4E18;
}

loc_807B4E14:
{
    f31.d = f0.d;
}

loc_807B4E18:
{
    MemoryInline::FlatWriteFloat32((r31 + 72), f31.d);
    goto loc_807B4E2C;
}

loc_807B4E20:
{
    r3 = (r31 + 492);
    r4 = (r1 + 8);
    // inline leaf 0x807B7F5C (45 guest instruction(s))
    r5 = 0x808A0000u;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 68u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 25224));
    r5 = 0x808A0000u;
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 25232));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r3 + 48));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f5.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r3 + 56));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r3 + 60));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r3 + 68));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r3 + 72));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r3 + 80));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r3 + 84));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r3 + 92));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f0.d);
    // end of inlined leaf 0x807B7F5C
}

loc_807B4E2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 416));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 68));
    MemoryInline::FlatWriteFloat32((r31 + 72), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 636));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_807B4E64:
{
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B4EA4;
    }
}

loc_807B4E88:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_807B4E94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B4E9C;
    }
}

loc_807B4E98:
{
    goto loc_807B4EBC;
}

loc_807B4E9C:
{
    f5.d = f0.d;
    goto loc_807B4EBC;
}

loc_807B4EA4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_807B4EB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B4EB8;
    }
}

loc_807B4EB4:
{
    goto loc_807B4EBC;
}

loc_807B4EB8:
{
    f5.d = f0.d;
}

loc_807B4EBC:
{
    r0 = MemoryInline::FlatRead8((r31 + 460));
    r3 = 1827405824;
    MemoryInline::FlatWriteFloat32((r31 + 636), f5.d);
    r6 = (r3 + -8193);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B4ED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4ED8;
    }
}

loc_807B4ED4:
{
    r6 = (r3 + -9217);
}

loc_807B4ED8:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 180));
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = (r31 + 68);
    r9 = MemoryInline::FlatRead16((r31 + 110));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (r31 + 188);
    r7 = (r31 + 216);
    r8 = (r31 + 212);
    ctx->lr = 0x807B4EFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B4F00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5020;
    }
}

loc_807B4F04:
{
    r0 = MemoryInline::FlatRead8((r31 + 460));
}

loc_807B4F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B4F30;
    }
}

loc_807B4F10:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B4F1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B4F50;
    }
}

loc_807B4F20:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    goto loc_807B4F50;
}

loc_807B4F30:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 240);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_4 = (r31 + 248);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_5 = (r31 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_5, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_6 = (r31 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_6, f0.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_807B4F50:
{
    r3 = 552075264;
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r3 + 4095);
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4F70;
    }
}

loc_807B4F64:
{
    r3 = (r31 + 212);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_807B4F74;
}

loc_807B4F70:
{
    r3 = 0;
}

loc_807B4F74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B4F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4FBC;
    }
}

loc_807B4F7C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 252));
    r3 = (r31 + 80);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 256));
    r5 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 260));
    r4 = (r31 + 200);
    MemoryInline::FlatWriteFloat32((r31 + 200), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 208), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x807DE858u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 7);
    ctx->lr = 0x807B4FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079DC60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_807B4FBC:
{
    r3 = -804192256;
    r4 = MemoryInline::FlatRead32((r31 + 212));
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B4FEC;
    }
}

loc_807B4FD0:
{
    r0 = MemoryInline::FlatRead8((r31 + 461));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B4FD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B4FEC;
    }
}

loc_807B4FDC:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x807B4FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B5048;
}

loc_807B4FEC:
{
    r0 = (r4 & 131072);
}

loc_807B4FF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B5010;
    }
}

loc_807B4FF4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807B4FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5010;
    }
}

loc_807B5000:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x807B500Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_807B5048;
}

loc_807B5010:
{
    r0 = (r4 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B5014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B5020;
    }
}

loc_807B5018:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 463), static_cast<uint8_t>(r0));
}

loc_807B5020:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B6148u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 188));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 80), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
}

loc_807B5048:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B4D2C func_807B4D2C preserves=false fpr_mask=0x80000000
