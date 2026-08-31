#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80512064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80512064;

loc_80512064:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
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
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r5 = 0x80890000u;
    f28.d = MemoryInline::FlatReadFloat32((r5 + -1840));
    r24 = r3;
}

loc_805120AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805120C0;
    }
}

loc_805120B0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_805120C4;
}

loc_805120C0:
{
    r30 = 0;
}

loc_805120C4:
{
    r3 = 0x80890000u;
    r25 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r3 + -1824));
    r31 = 0x80890000u;
    r23 = 1127219200;
    goto loc_80512304;
}

loc_805120DC:
{
    r0 = (r25 & 65535);
}

loc_805120E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_805120F8;
    }
}

loc_805120E8:
{
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    goto loc_805120FC;
}

loc_805120F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + -1840));
}

loc_805120FC:
{
    r0 = (r25 & 65535);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
}

loc_80512108:
{
    r4 = MemoryInline::FlatRead16((r24 + 14));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_80512120;
    }
}

loc_80512110:
{
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_80512124;
}

loc_80512120:
{
    r3 = 0;
}

loc_80512124:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
}

loc_8051212C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80512300;
    }
}

loc_80512130:
{
    r0 = (r25 & 65535);
}

loc_80512138:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_8051214C;
    }
}

loc_8051213C:
{
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_80512150;
}

loc_8051214C:
{
    r3 = 0;
}

loc_80512150:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
    r0 = MemoryInline::FlatRead16((r24 + 4));
    f30.d = MemoryInline::FlatReadFloat32((r31 + -1840));
}

loc_80512160:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80512174;
    }
}

loc_80512164:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r3_addr_4 = (r3 + r0);
    r28 = MemoryInline::FlatRead32(r3_addr_4);
    goto loc_80512178;
}

loc_80512174:
{
    r28 = 0;
}

loc_80512178:
{
    r29 = 0;
    goto loc_805122D8;
}

loc_80512180:
{
    r0 = (r29 & 65535);
}

loc_80512188:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_8051219C;
    }
}

loc_8051218C:
{
    r0 = (r0 * 24);
    r3 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    goto loc_805121A0;
}

loc_8051219C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + -1840));
}

loc_805121A0:
{
    r0 = (r29 & 65535);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_805121AC:
{
    r4 = MemoryInline::FlatRead16((r24 + 14));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_805121C4;
    }
}

loc_805121B4:
{
    r0 = (r0 * 24);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_805121C8;
}

loc_805121C4:
{
    r3 = 0;
}

loc_805121C8:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
}

loc_805121D0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_805122D4;
    }
}

loc_805121D4:
{
    r0 = (r29 & 65535);
}

loc_805121DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_805121F0;
    }
}

loc_805121E0:
{
    r0 = (r0 * 24);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_805121F4;
}

loc_805121F0:
{
    r3 = 0;
}

loc_805121F4:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
    r0 = MemoryInline::FlatRead16((r24 + 4));
    f29.d = MemoryInline::FlatReadFloat32((r31 + -1840));
}

loc_80512204:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80512218;
    }
}

loc_80512208:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 262140);
    r3_addr_7 = (r3 + r0);
    r26 = MemoryInline::FlatRead32(r3_addr_7);
    goto loc_8051221C;
}

loc_80512218:
{
    r26 = 0;
}

loc_8051221C:
{
    r27 = 0;
    goto loc_805122AC;
}

loc_80512224:
{
    r0 = (r27 & 65535);
}

loc_8051222C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_80512240;
    }
}

loc_80512230:
{
    r0 = (r0 * 24);
    r3 = (r26 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    goto loc_80512244;
}

loc_80512240:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + -1840));
}

loc_80512244:
{
    r0 = (r27 & 65535);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
}

loc_80512250:
{
    r4 = MemoryInline::FlatRead16((r24 + 14));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_80512268;
    }
}

loc_80512258:
{
    r0 = (r0 * 24);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_8051226C;
}

loc_80512268:
{
    r3 = 0;
}

loc_8051226C:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
}

loc_80512274:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_805122A8;
    }
}

loc_80512278:
{
    r0 = (r27 & 65535);
    r3 = r24;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_80512284:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80512298;
    }
}

loc_80512288:
{
    r0 = (r0 * 24);
    r4 = (r26 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    goto loc_8051229C;
}

loc_80512298:
{
    r4 = 0;
}

loc_8051229C:
{
    r4 = MemoryInline::FlatRead16((r4 + 26));
    ctx->lr = 0x805122A4u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80512064u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f1.d));
}

loc_805122A8:
{
    r27 = (r27 + 1);
}

loc_805122AC:
{
    r5 = MemoryInline::FlatRead16((r26 + 4));
    r0 = (r27 & 65535);
}

loc_805122B8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_80512224;
    }
}

loc_805122BC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r23);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d / f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f29.d));
}

loc_805122D4:
{
    r29 = (r29 + 1);
}

loc_805122D8:
{
    r5 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r29 & 65535);
}

loc_805122E4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_80512180;
    }
}

loc_805122E8:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r23);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f30.d));
}

loc_80512300:
{
    r25 = (r25 + 1);
}

loc_80512304:
{
    r5 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r25 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80512310:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805120DC;
    }
}

loc_80512314:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -1824));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d / f0.d));
    f1.d = f28.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
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
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8007FB gpr_write=0xFF80083B gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80512064 func_80512064 preserves=false fpr_mask=0xF0000000
