#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80810170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80810170;

loc_80810170:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r8 = 1127219200;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r30 = 0x808D0000u;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r31 = 0x808B0000u;
    r29 = 0x809C0000u;
    r25 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r7);
    r26 = r4;
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r27 = r5;
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r28 = r6;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r8);
    r30 = (r30 + 24136);
    r31 = (r31 + -19864);
    r4 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r8);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_808101EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808101FC;
    }
}

loc_808101F0:
{
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r29 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_80810200;
}

loc_808101FC:
{
    r29 = 0;
}

loc_80810200:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8081021C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80810240;
    }
}

loc_80810224:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80810240u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80810240:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_80810248:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80810254;
    }
}

loc_80810250:
{
    goto loc_80810260;
}

loc_80810254:
{
    f1.d = f30.d;
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
    f31.d = PpcFmulsInline(f30.d, f1.d);
}

loc_80810260:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80810270:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80810284;
    }
}

loc_80810274:
{
    r0 = MemoryInline::FlatRead32(r26);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32(r26, r0);
    goto loc_8081029C;
}

loc_80810284:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8081028C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8081029C;
    }
}

loc_80810290:
{
    r0 = MemoryInline::FlatRead32(r26);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r26, r0);
}

loc_8081029C:
{
    r4 = r25;
    r5 = r29;
    r3 = (r1 + 8);
    r6 = (r1 + 20);
    ctx->lr = 0x808102B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8080FE44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 17160));
}

loc_808102CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_808102D8;
    }
}

loc_808102D0:
{
    r4 = MemoryInline::FlatRead32((r30 + 64));
    goto loc_80810318;
}

loc_808102D8:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r6 + r3);
    r3 = (r0 + r4);
    r0 = PPC_Divw(static_cast<int32_t>(r29), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r29 - r0);
}

loc_808102FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r6))) {
        goto loc_80810308;
    }
}

loc_80810300:
{
    r4 = 1;
    goto loc_80810318;
}

loc_80810308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8081030C:
{
    r4 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80810318;
    }
}

loc_80810314:
{
    r4 = 2;
}

loc_80810318:
{
}

loc_8081031C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8081032C;
    }
}

loc_80810320:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17156));
    goto loc_8081036C;
}

loc_8081032C:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r6 + r3);
    r3 = (r0 + r5);
    r0 = PPC_Divw(static_cast<int32_t>(r29), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r29 - r0);
}

loc_80810350:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r6))) {
        goto loc_80810358;
    }
}

loc_80810354:
{
    goto loc_8081036C;
}

loc_80810358:
{
}

loc_8081035C:
{
    r0 = (r3 - r5);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_80810368;
    }
}

loc_80810364:
{
    r0 = (r3 - r6);
}

loc_80810368:
{
    r3 = r0;
}

loc_8081036C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 132u, true, false);
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f2.d, f30.d);
}

loc_80810378:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80810384;
    }
}

loc_8081037C:
{
    f2.d = f30.d;
    goto loc_80810394;
}

loc_80810384:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8081038C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80810394;
    }
}

loc_80810390:
{
    f2.d = f0.d;
}

loc_80810394:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r31 + 124));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_808103A4:
{
    MemoryInline::FlatWriteRamFloat32((r30 + 32), f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f5.d = PpcFmulsInline(f0.d, f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80810470;
    }
}

loc_808103B4:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_808103CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808103FC;
    }
}

loc_808103D0:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80810470;
}

loc_808103FC:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80810424:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80810440;
    }
}

loc_80810428:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    f1.d = PpcFmulsInline(f0.d, f3.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80810470;
}

loc_80810440:
{
    r0 = (r4 - r3);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f30.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80810470:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    r0 = (r29 ^ -2147483648);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f4.d = MemoryInline::FlatReadFloat32((r25 + 184));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f5.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = PpcFmulsInline(f31.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    r4 = 0x802A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r25 + 52));
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    r3 = (r4 + 16688);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 104u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 28));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    MemoryInline::FlatWriteFloat32((r26 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    MemoryInline::FlatWriteFloat32((r26 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 80u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 52u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80810170 func_80810170 preserves=false fpr_mask=0xC0000000
