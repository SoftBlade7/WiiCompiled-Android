#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80619CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80619CBC;

loc_80619CBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r0 = 1127219200;
    r6 = 0x80890000u;
    r5 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r4 = 0x80890000u;
    f5.d = MemoryInline::FlatReadFloat64((r6 + 31480));
    r31 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r12 = 0;
    f4.d = MemoryInline::FlatReadFloat32((r5 + 31488));
    r8 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    r7 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 31492));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r0 = 7;
    goto loc_80619E08;
}

loc_80619D34:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r4_addr_2 = (r4 + r8);
    r5 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = MemoryInline::FlatRead32((r5 + 372));
}

loc_80619D44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8))) {
        goto loc_80619E00;
    }
}

loc_80619D48:
{
    r4 = MemoryInline::FlatRead32((r5 + 388));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_80619D5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80619D68;
    }
}

loc_80619D60:
{
    r4 = 0;
    goto loc_80619DB8;
}

loc_80619D68:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r5 = fctiwzword0;
}

loc_80619D9C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80619DA8;
    }
}

loc_80619DA0:
{
    r4 = 0;
    goto loc_80619DB8;
}

loc_80619DA8:
{
}

loc_80619DAC:
{
    r4 = 99;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(100))) {
        goto loc_80619DB8;
    }
}

loc_80619DB4:
{
    r4 = (r5 & 255);
}

loc_80619DB8:
{
    r4 = (r4 & 255);
    r10 = (r7 + 7552);
    r9 = (r4 + -3);
    ctr = r0;
}

loc_80619DC8:
{
}

loc_80619DCC:
{
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(99))) {
        goto loc_80619DF4;
    }
}

loc_80619DD0:
{
    r11 = (r3 + r9);
    r5 = MemoryInline::FlatRead8((r10 + 109));
    r6 = MemoryInline::FlatRead8((r11 + 68));
    r4 = 255;
    r5 = (r6 + r5);
}

loc_80619DE8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(256))) {
        goto loc_80619DF0;
    }
}

loc_80619DEC:
{
    r4 = r5;
}

loc_80619DF0:
{
    MemoryInline::FlatWrite8((r11 + 68), static_cast<uint8_t>(r4));
}

loc_80619DF4:
{
    r9 = (r9 + 1);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80619DC8;
    }
}

loc_80619E00:
{
    r8 = (r8 + 4);
    r12 = (r12 + 1);
}

loc_80619E08:
{
    r4 = MemoryInline::FlatRead32((r3 + 60));
}

loc_80619E10:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r4))) {
        goto loc_80619D34;
    }
}

loc_80619E14:
{
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    f29.d = MemoryInline::FlatReadFloat64((r5 + 31496));
    f30.d = MemoryInline::FlatReadFloat32((r4 + 31488));
    r28 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 31492));
    r29 = 0;
    goto loc_80619F10;
}

loc_80619E38:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r3_addr_2 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_80619E48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80619F08;
    }
}

loc_80619E4C:
{
    r30 = MemoryInline::FlatRead32((r3 + 388));
    r3 = r31;
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    ctx->lr = 0x80619E68u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061A32Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f28.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80619E80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80619E8C;
    }
}

loc_80619E84:
{
    r0 = 0;
    goto loc_80619EDC;
}

loc_80619E8C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r3 = fctiwzword1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80619EC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80619ECC;
    }
}

loc_80619EC4:
{
    r0 = 0;
    goto loc_80619EDC;
}

loc_80619ECC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(100));
}

loc_80619ED0:
{
    r0 = 99;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80619EDC;
    }
}

loc_80619ED8:
{
    r0 = (r3 & 255);
}

loc_80619EDC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = (r0 & 255);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80619EF4u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 52));
    f2.d = f1.d;
    f1.d = f28.d;
    r3_addr_3 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // inline leaf 0x806170B0 (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 400), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 404), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 408), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 412), f2.d);
    // end of inlined leaf 0x806170B0
}

loc_80619F08:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80619F10:
{
    r0 = MemoryInline::FlatRead32((r31 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_80619F18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80619E38;
    }
}

loc_80619F1C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 88u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r1 + 116));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 32));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80619CBC func_80619CBC preserves=false fpr_mask=0xF0000000
