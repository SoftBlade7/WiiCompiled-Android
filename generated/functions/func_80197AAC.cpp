#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80197AAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r25_addic_src_0 = 0;
    uint32_t r25_addic_src_1 = 0;
    uint32_t r25_addic_src_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80197AAC;

loc_80197AAC:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF5C4u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0x80340000u;
    r4 = 0;
    r3 = (r25 + 22496);
    r5 = 5344;
    ctx->lr = 0x80197B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C329Cu>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 & 255);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = 65536;
    r29 = 0x80340000u;
    r24 = (r25 + 22496);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r27 = (r3 + -25536);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -26448));
    r30 = (r29 + 27840);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r23 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    r31 = -1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -26452));
    r26 = 0;
    r28 = 1;
    r25 = 253;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    MemoryInline::FlatWriteFloat32((r13 + -29240), f0.d);
}

loc_80197B5C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r24 + 92), 0, 1222u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 1220u, (r24 + 1312), static_cast<uint8_t>(r28));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::WriteResolved8(guest_range_2, 1221u, (r24 + 1313), static_cast<uint8_t>(r26));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -26504));
    f1.d = PpcFmulsInline(f27.d, f27.d);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r24 + 92), static_cast<uint8_t>(r25));
    f0.d = PpcFmulsInline(f28.d, f28.d);
    f2.d = MemoryInline::FlatReadFloat32((r13 + -29284));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r24 + 95), static_cast<uint8_t>(r26));
    r3 = MemoryInline::FlatRead32((r13 + -29280));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r24 + 164), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = MemoryInline::FlatRead32((r13 + -29276));
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r24 + 168), r3);
    r3 = MemoryInline::FlatRead32((r13 + -29272));
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r24 + 172), r0);
    r0 = MemoryInline::FlatRead32((r13 + -29268));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r24 + 176), r3);
    r3 = MemoryInline::FlatRead32((r13 + -25576));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r24 + 180), r0);
    r0 = MemoryInline::FlatRead32((r13 + -25572));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r24 + 184), r3);
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r24 + 188), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r24 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80197BC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197BD4;
    }
}

loc_80197BCC:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_80197BD8;
}

loc_80197BD4:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
}

loc_80197BD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 188));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80197BE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197BEC;
    }
}

loc_80197BE4:
{
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    goto loc_80197BF0;
}

loc_80197BEC:
{
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
}

loc_80197BF0:
{
    SetCRFloatResident(cr, 0, f27.d, f28.d);
}

loc_80197BF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197BFC;
    }
}

loc_80197BF8:
{
    goto loc_80197C00;
}

loc_80197BFC:
{
    f27.d = f28.d;
}

loc_80197C00:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29180));
    MemoryInline::FlatWriteRamFloat32((r29 + 27840), f31.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 4), f29.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 8), f29.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 12), f29.d);
    guest_range_3 = MemoryInline::ResolveRangeHost((r24 + 132), 0, 1204u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r24 + 192), f1.d);
    f1.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r24 + 156), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r24 + 148), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r24 + 140), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r24 + 132), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r24 + 160), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r24 + 152), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r24 + 144), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r24 + 136), f31.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 1196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 1200u, (r24 + 1332), r26);
        MemoryInline::WriteResolved32(guest_range_3, 1196u, (r24 + 1328), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 1188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 1192u, (r24 + 1324), r26);
        MemoryInline::WriteResolved32(guest_range_3, 1188u, (r24 + 1320), r26);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 1100u, ((static_cast<uint32_t>(static_cast<uint16_t>(r27)) << 16) | static_cast<uint16_t>(r26)))) {
        MemoryInline::WriteResolved16(guest_range_3, 1100u, (r24 + 1232), r27);
        MemoryInline::WriteResolved16(guest_range_3, 1102u, (r24 + 1234), r26);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 1096u, ((static_cast<uint32_t>(static_cast<uint16_t>(r26)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_3, 1096u, (r24 + 1228), r26);
        MemoryInline::WriteResolved16(guest_range_3, 1098u, (r24 + 1230), r27);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 1104u, ((static_cast<uint32_t>(static_cast<uint16_t>(r26)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_3, 1104u, (r24 + 1236), r26);
        MemoryInline::WriteResolved16(guest_range_3, 1106u, (r24 + 1238), r27);
    }
    MemoryInline::WriteResolved8(guest_range_3, 1184u, (r24 + 1316), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_3, 1185u, (r24 + 1317), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_3, 1186u, (r24 + 1318), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRamFloat32((r30 + 16), f29.d);
    ctx->lr = 0x80197C7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29180));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 20), f2.d);
    ctx->lr = 0x80197C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29180));
    MemoryInline::FlatWriteRamFloat32((r30 + 28), f29.d);
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 32), f29.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 24), f0.d);
    ctx->lr = 0x80197CB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29180));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r30 + 36), f2.d);
    ctx->lr = 0x80197CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 44), f29.d);
    r3 = r24;
    r4 = 0;
    MemoryInline::FlatWriteRamFloat32((r30 + 40), f0.d);
}

loc_80197CD8:
{
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 313), static_cast<uint8_t>(r31));
}

loc_80197CE4:
{
    r3 = (r3 + 56);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(16))) {
        goto loc_80197CD8;
    }
}

loc_80197CEC:
{
    r23 = (r23 + 1);
    r24 = (r24 + 1336);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(4));
}

loc_80197CF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80197B5C;
    }
}

loc_80197CFC:
{
    f28.d = MemoryInline::FlatReadFloat32((r13 + -29264));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26520));
    MemoryInline::FlatWriteFloat32((r13 + -29264), f28.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d / f0.d));
    MemoryInline::FlatWriteFloat32((r13 + -25548), f0.d);
    MemoryInline::FlatWriteFloat32((r13 + -25552), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80340000u;
    r25 = 3;
    r3 = (r3 + 22496);
    r31 = 1;
    r26 = (r3 + 4008);
}

loc_80197D30:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BF64Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_80197D38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80197D48;
    }
}

loc_80197D3C:
{
    r3 = r25;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801C0EC4u>(ctx);
}

loc_80197D48:
{
    r25_addic_src_2 = r25;
    r25 = (r25_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r25_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80197D4C:
{
    MemoryInline::FlatWrite8((r26 + 1309), static_cast<uint8_t>(r31));
    r26 = (r26 + -1336);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197D30;
    }
}

loc_80197D58:
{
    r3 = MemoryInline::FlatRead32((r13 + -29288));
    ctx->lr = 0x80197D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80197AAC func_80197AAC preserves=false fpr_mask=0xF8000000
