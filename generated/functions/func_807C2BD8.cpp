#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C2BD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r22 = ctx->gpr[22];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807C2BD8;

loc_807C2BD8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r30 = (r1 + 16);
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r31 = (r1 + 28);
    r22 = 0;
    r23 = 1;
    r24 = -252116992;
    goto loc_807C2D50;
}

loc_807C2C20:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0 = MemoryInline::FlatRead32((r25 + 8));
}

loc_807C2C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C2CE4;
    }
}

loc_807C2C3C:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 & 32768);
}

loc_807C2C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C2CE4;
    }
}

loc_807C2C48:
{
    r4 = MemoryInline::FlatRead32((r25 + 12));
}

loc_807C2C50:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807C2C60;
    }
}

loc_807C2C54:
{
    r3 = (r1 + 28);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_807C2C60:
{
    f31.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r5 = r30;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f31.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r31_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f31.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_2, f0.d);
    r22 = MemoryInline::FlatRead32((r25 + 8));
    r3 = r22;
    r4 = r22;
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r22 + 12);
    r5 = r30;
    r4 = r3;
    // inline leaf 0x80085580 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80085580
    f0.d = MemoryInline::FlatReadFloat32((r22 + 36));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807C2CA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C2CB8;
    }
}

loc_807C2CAC:
{
    MemoryInline::FlatWriteFloat32((r22 + 36), f31.d);
    r0 = 1;
    goto loc_807C2CBC;
}

loc_807C2CB8:
{
    r0 = 0;
}

loc_807C2CBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C2CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C2CDC;
    }
}

loc_807C2CC4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r22 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r22 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r22 + 48), f0.d);
}

loc_807C2CDC:
{
    r22 = 1;
    goto loc_807C2D50;
}

loc_807C2CE4:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
}

loc_807C2CEC:
{
    r0 = (r0 & 31);
    r3 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r0));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807C2D04;
    }
}

loc_807C2CF8:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 | r3);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_807C2D04:
{
    r0 = (r24 + -1);
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C2D4C;
    }
}

loc_807C2D10:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = r28;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    r4 = r28;
    r5 = r30;
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r31_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_3 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_3, f1.d);
    // inline leaf 0x800855C0 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = PPC_Fsel(f2.d, f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x800855C0
    r3 = (r28 + 12);
    r5 = r30;
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80085580u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_807C2D4C:
{
    r22 = 1;
}

loc_807C2D50:
{
    r3 = r26;
    r12 = r27;
    r4 = (r1 + 12);
    r5 = (r1 + 28);
    r6 = (r1 + 8);
    ctx->lr = 0x807C2D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[22] = r22;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r22 = ctx->gpr[22];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807C2D70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C2C20;
    }
}

loc_807C2D74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 12), r0);
    r3 = r22;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[22] = r22;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFC0187B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x800003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807C2BD8 func_807C2BD8 preserves=false fpr_mask=0x80000000
