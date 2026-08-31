#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009C660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009C660;

loc_8009C660:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r28 = r5;
    r31 = r4;
    r27 = r3;
    r29 = r6;
    r30 = r7;
    r3 = r31;
    r4 = r28;
    r5 = (r1 + 8);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_0, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019AC68u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead8((r28 + 29));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28208));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8009C6BC:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28224));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r31 = MemoryInline::FlatRead32((r27 + 28));
    r0 = MemoryInline::FlatRead8((r28 + 28));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -28220));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009C730;
    }
}

loc_8009C6E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8009C6E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C6F4;
    }
}

loc_8009C6E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8009C6EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C70C;
    }
}

loc_8009C6F0:
{
    goto loc_8009C730;
}

loc_8009C6F4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = f2.d;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    ctx->lr = 0x8009C704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    goto loc_8009C730;
}

loc_8009C70C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28216));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_8009C728:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009C730;
    }
}

loc_8009C72C:
{
    f5.d = f0.d;
}

loc_8009C730:
{
    r3 = (r31 ^ -2147483648);
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28220));
    r11 = (r1 + 64);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteFloat32(r29, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword0;
    r0 = (0 - r0);
    MemoryInline::FlatWrite32(r30, r0);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009C660 func_8009C660 preserves=true fpr_mask=0x00000000
