#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806946BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806946BC;

loc_806946BC:
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
    r30 = 0x808A0000u;
    r29 = r3;
    r30 = (r30 + -10592);
    ctx->lr = 0x806946F0u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806A0B4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r29 + 37));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r29 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80694700:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r29 + 28), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069471C;
    }
}

loc_8069470C:
{
    r0 = MemoryInline::FlatRead8((r29 + 38));
}

loc_80694714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069471C;
    }
}

loc_80694718:
{
    r3 = 1;
}

loc_8069471C:
{
}

loc_80694720:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80694730;
    }
}

loc_80694724:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 39), static_cast<uint8_t>(r0));
    goto loc_80694738;
}

loc_80694730:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 39), static_cast<uint8_t>(r0));
}

loc_80694738:
{
    r0 = MemoryInline::FlatRead8((r29 + 37));
    r3 = 0;
}

loc_80694744:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80694758;
    }
}

loc_80694748:
{
    r0 = MemoryInline::FlatRead8((r29 + 38));
}

loc_80694750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694758;
    }
}

loc_80694754:
{
    r3 = 1;
}

loc_80694758:
{
}

loc_8069475C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8069476C;
    }
}

loc_80694760:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 40), static_cast<uint8_t>(r0));
    goto loc_80694774;
}

loc_8069476C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 40), static_cast<uint8_t>(r0));
}

loc_80694774:
{
    r3 = MemoryInline::FlatRead8((r29 + 1972));
    r6 = MemoryInline::FlatRead8((r29 + 1973));
    r7 = (r3 + 1);
    r5 = MemoryInline::FlatRead8((r29 + 1974));
    r0 = (r7 & 255);
    r4 = MemoryInline::FlatRead8((r29 + 1975));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead8((r29 + 1976));
    r8 = MemoryInline::FlatRead8((r29 + 37));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_8069479C:
{
    r6 = (r6 + 1);
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 38), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r29 + 1972), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r29 + 1973), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 1974), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r29 + 1975), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 1976), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806947D0;
    }
}

loc_806947C8:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r29 + 1972), static_cast<uint8_t>(r0));
}

loc_806947D0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1973));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_806947DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_806947E8;
    }
}

loc_806947E0:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r29 + 1973), static_cast<uint8_t>(r0));
}

loc_806947E8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1974));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_806947F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_80694800;
    }
}

loc_806947F8:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r29 + 1974), static_cast<uint8_t>(r0));
}

loc_80694800:
{
    r0 = MemoryInline::FlatRead8((r29 + 1975));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8069480C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_80694818;
    }
}

loc_80694810:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r29 + 1975), static_cast<uint8_t>(r0));
}

loc_80694818:
{
    r0 = MemoryInline::FlatRead8((r29 + 1976));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_80694824:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80694830;
    }
}

loc_80694828:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r29 + 1976), static_cast<uint8_t>(r0));
}

loc_80694830:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 36));
    r31 = r29;
    f31.d = MemoryInline::FlatReadFloat32(r30);
    r26 = r29;
    r27 = (r29 + 2004);
    r28 = (r29 + 1980);
    r25 = 0;
}

loc_8069484C:
{
    r4 = r28;
    r5 = r27;
    r3 = (r1 + 8);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 2028), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 2032), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 2036), f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8069488C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80694898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806948A4;
    }
}

loc_8069489C:
{
    MemoryInline::FlatWriteFloat32((r26 + 2052), f31.d);
    goto loc_806948CC;
}

loc_806948A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2028));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2032));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2036));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x806948C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r26 + 2052), f1.d);
}

loc_806948CC:
{
    r25 = (r25 + 1);
    r28 = (r28 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(2));
}

loc_806948D8:
{
    r31 = (r31 + 12);
    r26 = (r26 + 4);
    r27 = (r27 + 12);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8069484C;
    }
}

loc_806948E8:
{
    r0 = MemoryInline::FlatRead32((r29 + 292));
    r3 = 0;
    MemoryInline::FlatWrite8((r29 + 45), static_cast<uint8_t>(r3));
}

loc_806948F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80694910;
    }
}

loc_806948FC:
{
    r0 = MemoryInline::FlatRead32((r29 + 364));
}

loc_80694904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80694910;
    }
}

loc_80694908:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 45), static_cast<uint8_t>(r0));
}

loc_80694910:
{
    r0 = MemoryInline::FlatRead32((r29 + 292));
}

loc_80694918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80694930;
    }
}

loc_8069491C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
}

loc_80694924:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80694930;
    }
}

loc_80694928:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 45), static_cast<uint8_t>(r0));
}

loc_80694930:
{
    r3 = MemoryInline::FlatRead32((r29 + 280));
    r27 = r29;
    f31.d = MemoryInline::FlatReadFloat32(r30);
    r25 = 0;
    r3 = MemoryInline::FlatRead32(r3);
    r31 = 1;
    r28 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWrite8((r29 + 46), static_cast<uint8_t>(r0));
}

loc_8069495C:
{
    r26 = (r29 + r25);
    MemoryInline::FlatWrite8((r26 + 2413), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r29 + 46));
}

loc_8069496C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694984;
    }
}

loc_80694970:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 2128));
    // inline leaf 0x8082B3D4 (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8082B3D4
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8069497C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80694984;
    }
}

loc_80694980:
{
    MemoryInline::FlatWrite8((r26 + 2413), static_cast<uint8_t>(r31));
}

loc_80694984:
{
    r25 = (r25 + 1);
    r27 = (r27 + 12);
}

loc_80694990:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_8069495C;
    }
}

loc_80694994:
{
    r0 = MemoryInline::FlatRead8((r29 + 46));
    r3 = 0;
    MemoryInline::FlatWrite8((r29 + 47), static_cast<uint8_t>(r3));
}

loc_806949A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806949D4;
    }
}

loc_806949A8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 1748));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x8082B3D4 (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8082B3D4
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806949C8:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    MemoryInline::FlatWrite8((r29 + 47), static_cast<uint8_t>(r0));
}

loc_806949D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 47));
    r3 = 0;
}

loc_806949E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806949F0;
    }
}

loc_806949E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 45));
}

loc_806949EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806949F4;
    }
}

loc_806949F0:
{
    r3 = 1;
}

loc_806949F4:
{
    MemoryInline::FlatWrite8((r29 + 47), static_cast<uint8_t>(r3));
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r29 + 1977));
}

loc_80694A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694A10;
    }
}

loc_80694A08:
{
    MemoryInline::FlatWrite32((r29 + 128), r4);
    goto loc_80694A1C;
}

loc_80694A10:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 128), r0);
}

loc_80694A1C:
{
    r0 = MemoryInline::FlatRead8((r29 + 1978));
}

loc_80694A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694A30;
    }
}

loc_80694A28:
{
    MemoryInline::FlatWrite32((r29 + 132), r4);
    goto loc_80694A3C;
}

loc_80694A30:
{
    r3 = MemoryInline::FlatRead32((r29 + 132));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 132), r0);
}

loc_80694A3C:
{
    r3 = MemoryInline::FlatRead32((r29 + 280));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_6 & 1);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 32), 0, 143u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r29 + 32), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 34), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r29 + 33), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_9 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r29 + 35), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_10 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r29 + 43), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_11 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 138u, (r29 + 170), static_cast<uint8_t>(r0));
    // inline leaf 0x805911D8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead16((r3 + 252));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x805911D8
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = 2;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r31 = 0;
    r0_subfc_sub_0 = r0;
    r0 = (r5 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r3 = MemoryInline::FlatRead32((r29 + 280));
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r4 + r31);
    r0 = (r0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::WriteResolved8(guest_range_1, 139u, (r29 + 171), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_12 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r29 + 36), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_13 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 142u, (r29 + 174), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_14 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 60u, (r29 + 92), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_15 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r29 + 67), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 104u, (r29 + 136), static_cast<uint8_t>(r0));
    // inline leaf 0x805913FC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 584));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x805913FC
}

loc_80694B48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80694B5C;
    }
}

loc_80694B4C:
{
    r0 = MemoryInline::FlatRead8((r29 + 66));
}

loc_80694B54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80694B5C;
    }
}

loc_80694B58:
{
    MemoryInline::FlatWrite16((r29 + 64), static_cast<uint16_t>(r31));
}

loc_80694B5C:
{
    MemoryInline::FlatWrite8((r29 + 66), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead32((r29 + 280));
    r3 = MemoryInline::FlatRead16((r29 + 64));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1000));
}

loc_80694B7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite16((r29 + 64), static_cast<uint16_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80694B94;
    }
}

loc_80694B8C:
{
}

loc_80694B90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80694B9C;
    }
}

loc_80694B94:
{
    r0 = 1000;
    MemoryInline::FlatWrite16((r29 + 64), static_cast<uint16_t>(r0));
}

loc_80694B9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80694BA0:
{
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80694BC8;
    }
}

loc_80694BA8:
{
    r3 = MemoryInline::FlatRead16((r29 + 64));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 62));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80694BB4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80694BC8;
    }
}

loc_80694BB8:
{
    r0 = MemoryInline::FlatRead16((r29 + 60));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80694BC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80694BC8;
    }
}

loc_80694BC4:
{
    r4 = 1;
}

loc_80694BC8:
{
    MemoryInline::FlatWrite8((r29 + 68), static_cast<uint8_t>(r4));
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r29 + 1756));
    r0 = MemoryInline::FlatRead32((r29 + 1760));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r0 = MemoryInline::FlatRead32((r29 + 1764));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x80694BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r29 + 1972));
    r4 = 1;
    r3 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80694C00:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_80694C24;
    }
}

loc_80694C04:
{
    r0 = MemoryInline::FlatRead8((r29 + 1973));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80694C10:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_80694C24;
    }
}

loc_80694C14:
{
    r0 = MemoryInline::FlatRead8((r29 + 1974));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80694C20:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_80694C28;
    }
}

loc_80694C24:
{
    r3 = 1;
}

loc_80694C28:
{
}

loc_80694C2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80694C44;
    }
}

loc_80694C30:
{
    r0 = MemoryInline::FlatRead8((r29 + 1975));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80694C3C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_80694C44;
    }
}

loc_80694C40:
{
    r4 = 0;
}

loc_80694C44:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 1768));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80694C50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80694C6C;
    }
}

loc_80694C54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80694C58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80694C6C;
    }
}

loc_80694C5C:
{
    r3 = (r1 + 20);
    r4 = (r29 + 196);
    ctx->lr = 0x80694C68u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806B3CA4u>(ctx);
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
    cr = ctx->cr;
    goto loc_80694CCC;
}

loc_80694C6C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 1780), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r29 + 1780));
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 196), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r29 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r29 + 1784));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r29 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r29 + 1788));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r29 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r29 + 1792));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r29 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r29 + 1796));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r29 + 212), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r29 + 1800));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r29 + 216), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r29 + 1804));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r29 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r29 + 1808));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r29 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r29 + 1812));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r29 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r29 + 1816));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r29 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r29 + 1820));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r29 + 236), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r29 + 1824));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r29 + 240), f0.d);
}

loc_80694CCC:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 1744));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 1748));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1752));
    MemoryInline::FlatWriteFloat32((r29 + 208), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 224), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 240), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC17FF gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0xF000D1FF fpr_write=0xF000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806946BC func_806946BC preserves=false fpr_mask=0xC0000000
