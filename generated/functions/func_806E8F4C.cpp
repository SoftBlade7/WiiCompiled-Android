#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E8F4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_806E8FC0_loc_0 = 0;
    uint32_t addr_stfsx_806E8FD8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;

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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E8F4C;

loc_806E8F4C:
{
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = (r6 - r5);
    r31 = 1127219200;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = 0x808A0000u;
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r29 = (r5 + 1);
    f31.d = MemoryInline::FlatReadFloat64((r7 + 2208));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f26.d = f1.d;
    addr_stfsx_806E8FC0_loc_0 = (r4 + r7);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806E8FC0_loc_0, f1.d);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2188));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f31.d));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    f27.d = f2.d;
    addr_stfsx_806E8FD8_loc_0 = (r4 + r3);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806E8FD8_loc_0, f2.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r27 = r5;
    r28 = r6;
    r30 = (r4 + r0);
    f28.d = f3.d;
    f29.d = f4.d;
    goto loc_806E9034;
}

loc_806E8FF8:
{
    r0 = (r29 - r27);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r0 = (r0 ^ -2147483648);
    f1.d = f26.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = f28.d;
    f3.d = f27.d;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = f29.d;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f5.d = PpcFmulsInline(f30.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_806E9034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r28));
}

loc_806E9038:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E8FF8;
    }
}

loc_806E903C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = leaf_stack_saved_f27_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f26.d = leaf_stack_saved_f26_entry;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
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
    ctx->fpr[7] = f7;
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

// RECOMP_GUEST_ABI gpr_read=0xF8000076 gpr_write=0xF800088B gpr_return=0x00000008 fpr_read=0xFC0000DE fpr_write=0xFC0000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E8F4C func_806E8F4C preserves=true fpr_mask=0x00000000
