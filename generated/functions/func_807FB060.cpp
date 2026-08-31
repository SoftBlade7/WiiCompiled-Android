#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FB060(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_807FB060;

loc_807FB060:
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
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -28), r25);
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r9 = 1127219200;
    r0 = (r5 ^ -2147483648);
    r30 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    r30 = (r30 + -21672);
    f29.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r25 = r3;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 48u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r30 + 64));
    r31 = r4;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r30 + 24));
    r26 = r5;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r30 + 28));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r30 + 32));
        }
    }
    r27 = r6;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r30 + 36));
    r28 = r7;
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    MemoryInline::FlatWriteRam32((r1 + 32), r9);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r29 = r8;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_807FB104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB10C;
    }
}

loc_807FB108:
{
    goto loc_807FB110;
}

loc_807FB10C:
{
    f6.d = f0.d;
}

loc_807FB110:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r30 + 44));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0x808D0000u;
    f2.d = PpcFmulsInline(f0.d, f4.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r30 + 40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r30 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 188));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 17052));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r30 + 48));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f28.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
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
    r3 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 17048));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 84u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f3.d = PpcFmulsInline(f28.d, f3.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807FB184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB300;
    }
}

loc_807FB188:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r30 + 72));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_807FB190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB300;
    }
}

loc_807FB194:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 76));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807FB19C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB1A8;
    }
}

loc_807FB1A0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 80));
    f30.d = PpcFmulsInline(f30.d, f0.d);
}

loc_807FB1A8:
{
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r30 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 28));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 32));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 36));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807FB1E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FB1EC;
    }
}

loc_807FB1E8:
{
    goto loc_807FB1F0;
}

loc_807FB1EC:
{
    f31.d = f0.d;
}

loc_807FB1F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r0 = (r26 ^ -2147483648);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 44));
    r31 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r30 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r25 + 188));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 17052));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 48));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f29.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
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
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f28.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat64((r30 + 64));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f4.d = PpcFmulsInline(f29.d, f31.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 17052));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = 0x808D0000u;
    f0.d = PpcFmulsInline(f31.d, f29.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 17048));
    r3 = r28;
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f4.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f3.d = PpcFmulsInline(f3.d, f28.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteFloat32(r28, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    ctx->lr = 0x807FB2B8u;
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
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = f30.d;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    r4 = r28;
    MemoryInline::FlatWriteFloat32(r28, f2.d);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f2.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 1;
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    MemoryInline::FlatWriteFloat32(r29, f30.d);
    goto loc_807FB304;
}

loc_807FB300:
{
    r3 = 0;
}

loc_807FB304:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 76u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 60u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 80));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[9] = r9;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0001FE gpr_write=0xFE000A1B gpr_return=0x00000018 fpr_read=0xF0000053 fpr_write=0xF000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FB060 func_807FB060 preserves=false fpr_mask=0xF0000000
