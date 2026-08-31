#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FB8B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FB8B0;

loc_807FB8B0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 96);
    // inline leaf 0x8002159C (7 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -24), r26);
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x8002159C
    f31.d = f1.d;
    r29 = r3;
    r28 = 0x808B0000u;
    r27 = r6;
    r30 = r7;
    r31 = r8;
    r26 = r9;
    r28 = (r28 + -21672);
    r3 = (r1 + 48);
    r5 = (r29 + 48);
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
    f2.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807FB904:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807FB928;
    }
}

loc_807FB908:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 188));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FB910:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807FB928;
    }
}

loc_807FB914:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 180));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807FB924:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FB930;
    }
}

loc_807FB928:
{
    r3 = 0;
    goto loc_807FBAA0;
}

loc_807FB930:
{
    r3 = 0x809C0000u;
    r4 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = 552075264;
    r0 = (r3 + 4095);
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    r0 = (r27 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r3 = MemoryInline::FlatRead32((r5 + 32));
    f1.d = MemoryInline::FlatReadFloat64((r28 + 56));
    r27 = 0;
    r0 = (r26 + r3);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBA9C;
    }
}

loc_807FB96C:
{
    f0.d = PPC_Fctiwz(f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 44), f2.d);
    f1.d = f31.d;
    r3 = r29;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r1 + 64), f0.d);
    r4 = (r1 + 48);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 40), f2.d);
    r6 = (r1 + 36);
    r5 = fctiwzword0;
    r7 = (r1 + 24);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 36), f2.d);
    r8 = (r1 + 8);
    r26 = 23;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 28), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 24), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 8), f2.d);
    ctx->lr = 0x807FB9B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807FB060u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r9 = ctx->gpr[9];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807FB9B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBA9C;
    }
}

loc_807FB9BC:
{
}

loc_807FB9C0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807FB9E4;
    }
}

loc_807FB9C4:
{
    r3 = r30;
    r4 = r30;
    r5 = (r1 + 36);
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
    r3 = (r30 + 12);
    r5 = (r1 + 36);
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
}

loc_807FB9E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807FB9E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBA98;
    }
}

loc_807FB9EC:
{
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    r5 = 23;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
    // inline leaf 0x807BDA9C (19 guest instruction(s))
}

loc_inl4_0x807BDA9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r6 = 0x809C0000u;
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r3, r0);
    r7 = MemoryInline::FlatRead32((r6 + 15320));
}

loc_inl4_0x807BDAB4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(64))) {
        goto loc_inl4_0x807BDABC;
    }
}

loc_inl4_0x807BDAB8:
{
    r7 = 63;
}

loc_inl4_0x807BDABC:
{
    r0 = (r7 * 12);
    r3 = 0x809C0000u;
    r6 = 0x809C0000u;
    r3 = (r3 + 14552);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRam32((r6 + 15320), r0);
}

loc_inl4_cont_807BDA9C:
{
    // end of inlined leaf 0x807BDA9C
    r3 = r31;
    r4 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x807BDB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r31;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x807BDBC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 17056));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 188));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807FBA3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807FBA58;
    }
}

loc_807FBA40:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    r4 = 128;
    r5 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BDA9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    goto loc_807FBA98;
}

loc_807FBA58:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r3 + 16824));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FBA64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBA98;
    }
}

loc_807FBA68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807FBA6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FBA84;
    }
}

loc_807FBA70:
{
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 88));
    r3 = (r1 + 12);
    r4 = (r4 + 16688);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
}

loc_807FBA84:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    r4 = 4194304;
    r5 = 22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BDA9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_807FBA98:
{
    r27 = 1;
}

loc_807FBA9C:
{
    r3 = r27;
}

loc_807FBAA0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -24), 0, 24u, true, false);
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 116));
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0003FF gpr_write=0xFE000BFB gpr_return=0x00000018 fpr_read=0xF0000057 fpr_write=0xF000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FB8B0 func_807FB8B0 preserves=false fpr_mask=0x80000000
