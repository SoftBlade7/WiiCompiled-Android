#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AE900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800AE900;

loc_800AE900:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 260u, (r1 + 260), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 112);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r0);
    r26 = r3;
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    ctx->lr = 0x800AE970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800AE978u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r26 + 4), 0, 304u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800AE980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AE994;
    }
}

loc_800AE984:
{
    ctx->lr = 0x800AE988u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800AE990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800AED10;
}

loc_800AE994:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -27888), 0, 40u, true, false);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -27888));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r26 + 8));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 292u, (r26 + 296));
    f28.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 288u, (r26 + 292));
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -27888));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_800AE9B0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r26 + 4));
    f28.d = PpcFmulsInline(f28.d, f0.d);
    f29.d = PpcFmulsInline(f29.d, f1.d);
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27884));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800AE9EC;
    }
}

loc_800AE9C4:
{
    r0 = (r3 + -63);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -27864));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -27880));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_800AEA10;
}

loc_800AE9EC:
{
    r0 = (r3 + -64);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -27864));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -27880));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_800AEA10:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 236u, (r26 + 240));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 293u, (r26 + 297));
    f27.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r26 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_800AEA24:
{
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27884));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800AEA58;
    }
}

loc_800AEA30:
{
    r0 = (r3 + 1);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -27864));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -27880));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
    goto loc_800AEA74;
}

loc_800AEA58:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -27856));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -27880));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
}

loc_800AEA74:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 297u, (r26 + 301));
    r27 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r28 = (r1 + 8);
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27884));
    r29 = 0;
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -27856));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f25.d = f24.d;
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -27872));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r26 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -27888));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 294u, (r26 + 298));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 295u, (r26 + 299));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 296u, (r26 + 300));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -27876));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r26 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f30.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r26 + 36));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f5.d));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r26 + 24));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    f23.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27884));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f1.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f6.d));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f4.d));
}

loc_800AEB00:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = r26;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r4 = r29;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f23.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    // inline leaf 0x8008E050 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x8008E050
    f0.d = MemoryInline::FlatReadFloat32(r27);
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(3));
}

loc_800AEB38:
{
    r28 = (r28 + 1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AEB00;
    }
}

loc_800AEB4C:
{
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -27884));
    r27 = (r1 + 32);
    r28 = (r1 + 16);
    r29 = 0;
}

loc_800AEB5C:
{
    MemoryInline::FlatWriteFloat32(r27, f30.d);
    r3 = r26;
    r4 = r29;
    // inline leaf 0x8008E080 (4 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    // end of inlined leaf 0x8008E080
    f0.d = MemoryInline::FlatReadFloat32(r27);
    r3 = r26;
    MemoryInline::FlatWriteFloat32(r28, f30.d);
    r4 = r29;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    // inline leaf 0x8008E090 (4 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 92));
    // end of inlined leaf 0x8008E090
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_800AEB94:
{
    r27 = (r27 + 4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    r28 = (r28 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AEB5C;
    }
}

loc_800AEBA8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r29 = (r1 + 32);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r26 + 40));
    r28 = (r1 + 16);
    MemoryInline::FlatWrite32((r3 + 208), r0);
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r30 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r26 + 44));
    MemoryInline::FlatWrite32((r3 + 212), r0);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 60), f29.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 64), f28.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 68), f27.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 72), f26.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 76), f25.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWrite32((r3 + 80), r31);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r26 + 28));
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r26 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 88), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 92), f24.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 100), f3.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 104), f2.d);
}

loc_800AEC44:
{
    r3 = r26;
    r4 = r27;
    // inline leaf 0x8008E070 (4 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    // end of inlined leaf 0x8008E070
    r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r27 = (r27 + 1);
    f0.d = MemoryInline::FlatReadFloat32(r29);
}

loc_800AEC60:
{
    r3 = (r0 + r30);
    f2.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32((r3 + 108), f1.d);
    r29 = (r29 + 4);
    r28 = (r28 + 4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r3 = (r0 + r30);
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r3 = (r0 + r30);
    r30 = (r30 + 4);
    MemoryInline::FlatWriteFloat32((r3 + 140), f2.d);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_800AEC44;
    }
}

loc_800AEC94:
{
    r27 = (r26 + 108);
    r28 = 0;
    goto loc_800AECBC;
}

loc_800AECA0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    r4 = r28;
    r5 = r27;
    r3 = MemoryInline::FlatRead32((r3 + 236));
    // inline leaf 0x800AAC90 (18 guest instruction(s))
    r0 = (r4 * 24);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    MemoryInline::FlatWriteFloat32((r4 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 162));
    r0 = (r0 | 60);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800AAC90
    r27 = (r27 + 24);
    r28 = (r28 + 1);
}

loc_800AECBC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 240u, (r26 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800AECC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AECA0;
    }
}

loc_800AECC8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r26 + 304));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 272u, (r26 + 276));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 276u, (r26 + 280));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 280u, (r26 + 284));
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 284u, (r26 + 288));
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 285u, (r26 + 289));
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 286u, (r26 + 290));
    MemoryInline::FlatWrite8((r3 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 287u, (r26 + 291));
    MemoryInline::FlatWrite8((r3 + 43), static_cast<uint8_t>(r0));
    ctx->lr = 0x800AED08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800AED10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800AED10:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 176u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 152u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 136u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 120u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 104u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 88u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 72u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 56u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 40u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 24u, (r1 + 112));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_3, 172u, (r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800AE900 func_800AE900 preserves=false fpr_mask=0xFF800000
