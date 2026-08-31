#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005DF60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8005DFC8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8005DF60;

loc_8005DF60:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 48);
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
    r23 = r3;
    r24 = r4;
    r25 = r5;
    // inline leaf 0x80067910 (3 guest instruction(s))
    r3 = 0x802C0000u;
    r3 = (r3 + -10752);
    // end of inlined leaf 0x80067910
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29616));
    r28 = r3;
    r30 = r28;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r29 = (r29_rot_0 & -2);
    f31.d = f30.d;
    r27 = 0;
    r26 = 0;
    r31 = 0;
    goto loc_8005E044;
}

loc_8005DFC0:
{
    r4 = MemoryInline::FlatRead32((r23 + 32));
    r3 = MemoryInline::FlatRead32((r23 + 28));
    addr_lfsx_8005DFC8_loc_0 = (r4 + r31);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_8005DFC8_loc_0);
    r3_addr_2 = (r3 + r31);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    SetCRFloatResident(cr, 0, f31.d, f29.d);
}

loc_8005DFD4:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 ^ 1);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005E03C;
    }
}

loc_8005DFF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_2);
    r0 = (r0 & 49152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005E000:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005E03C;
    }
}

loc_8005E004:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r30;
    r5 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x8005E01Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
}

loc_8005E024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005E03C;
    }
}

loc_8005E028:
{
    MemoryInline::FlatWrite32((r30 + 536), r3);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f29.d));
    r27 = (r27 + 1);
    MemoryInline::FlatWriteFloat32((r30 + 540), f29.d);
    r30 = (r30 + 544);
}

loc_8005E03C:
{
    r31 = (r31 + 4);
    r26 = (r26 + 1);
}

loc_8005E044:
{
    r0 = MemoryInline::FlatRead32((r23 + 24));
}

loc_8005E04C:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8005DFC0;
    }
}

loc_8005E050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8005E054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005E068;
    }
}

loc_8005E058:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r24, r0);
    r3 = r24;
    goto loc_8005E240;
}

loc_8005E068:
{
}

loc_8005E06C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(1))) {
        goto loc_8005E0E0;
    }
}

loc_8005E070:
{
    r3 = MemoryInline::FlatRead32((r28 + 536));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_8005E078:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005E240;
    }
}

loc_8005E07C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = 64;
    MemoryInline::FlatWrite32(r24, r4);
    r5 = (r24 + 20);
    r4 = (r3 + 20);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r24 + 4), r6);
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r6 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r24 + 12), r6);
    MemoryInline::FlatWrite32((r24 + 8), r7);
    r6 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r24 + 16), r6);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r24 + 20), f0.d);
    ctr = r0;
    // nop
}

loc_8005E0C0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005E0C0;
    }
}

loc_8005E0D4:
{
    r3 = r24;
    goto loc_8005E240;
}

loc_8005E0E0:
{
    r3 = MemoryInline::FlatRead32((r28 + 536));
    PpcSetPairedFprInline(f3, PPC_Fres(PPC_PsFromScalarInline(f30.d)));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29616));
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r24, r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r24 + 4), r0);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f3.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f3.d, f3.d));
    r4 = MemoryInline::FlatRead32((r28 + 536));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    PpcSetPairedFprInline(f3, PPC_PsNmsubInline(PPC_PsFromScalarInline(f30.d), f0.d, f1.d));
    MemoryInline::FlatWrite32((r24 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r24 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite32((r24 + 16), r0);
    MemoryInline::FlatWriteFloat32((r24 + 20), f2.d);
    goto loc_8005E234;
}

loc_8005E130:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 540));
    r10 = 0;
    r9 = MemoryInline::FlatRead32((r28 + 536));
    f4.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r9 + 20));
    r6 = (r9 + 24);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r24 + 20), f0.d);
    goto loc_8005E220;
}

loc_8005E160:
{
    r8 = MemoryInline::FlatRead32((r24 + 4));
    r7 = r24;
    r11 = 0;
    ctr = r8;
}

loc_8005E174:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_8005E1C4;
    }
}

loc_8005E178:
{
    r4 = MemoryInline::FlatRead32(r6);
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r7 + 24));
}

loc_8005E188:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8005E1B0;
    }
}

loc_8005E18C:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 28));
}

loc_8005E198:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8005E1B0;
    }
}

loc_8005E19C:
{
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r0 = MemoryInline::FlatRead32((r7 + 32));
}

loc_8005E1A8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8005E1B0;
    }
}

loc_8005E1AC:
{
    r5 = 1;
}

loc_8005E1B0:
{
}

loc_8005E1B4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005E1C4;
    }
}

loc_8005E1B8:
{
    r7 = (r7 + 16);
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005E178;
    }
}

loc_8005E1C4:
{
}

loc_8005E1C8:
{
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(r8))) {
        goto loc_8005E1FC;
    }
}

loc_8005E1CC:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r4 = (r4_rot_5 & -16);
    r0 = MemoryInline::FlatRead32(r6);
    r4 = (r24 + r4);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 28), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r4 + 32), r0);
    MemoryInline::FlatWriteFloat32((r4 + 36), f2.d);
    r4 = MemoryInline::FlatRead32((r24 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r24 + 4), r0);
}

loc_8005E1FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 12));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r24 + r0);
    r6 = (r6 + 16);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    r10 = (r10 + 1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 36), f0.d);
}

loc_8005E220:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8005E228:
{
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(r0))) {
        goto loc_8005E160;
    }
}

loc_8005E22C:
{
    r28 = (r28 + 544);
    r3 = (r3 + 1);
}

loc_8005E234:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r27));
}

loc_8005E238:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8005E130;
    }
}

loc_8005E23C:
{
    r3 = r24;
}

loc_8005E240:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 48));
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
    r0 = MemoryInline::FlatRead32((r1 + 100));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8005DF60 func_8005DF60 preserves=false fpr_mask=0xE0000000
