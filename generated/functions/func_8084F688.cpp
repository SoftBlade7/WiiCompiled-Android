#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084F688(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8084F688;

loc_8084F688:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = MemoryInline::FlatRead32((r4 + 576));
    r0 = 1127219200;
    r26 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(-100));
}

loc_8084F6E0:
{
    r27 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r28 = r4;
    r26 = (r26 + -7872);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084F708;
    }
}

loc_8084F6F4:
{
    r3 = MemoryInline::FlatRead32((r3 + 700));
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8084F704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8084FAEC;
}

loc_8084F708:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r26 + 60);
    r3 = MemoryInline::FlatRead32((r3 + 700));
    r5 = 0;
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctx->lr = 0x8084F720u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = 0x808B0000u;
    f27.d = MemoryInline::FlatReadFloat64((r26 + 96));
    f28.d = MemoryInline::FlatReadFloat32((r26 + 204));
    r31 = (r31 + -7652);
    f29.d = MemoryInline::FlatReadFloat32((r26 + 208));
    r29 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r26 + 212));
    r30 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r26 + 216));
    f26.d = MemoryInline::FlatReadFloat32((r26 + 88));
}

loc_8084F748:
{
    r5 = MemoryInline::FlatRead32((r28 + 576));
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r29 + 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r3 = (r5 & 1);
    r3 = (r3 ^ r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r3 - r4);
    r4 = (r4 + r5);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 ^ -2147483648);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f6.d = PpcFmulsInline(f28.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = PpcFmulsInline(f29.d, f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r4 = MemoryInline::FlatRead32((r27 + 72));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = PpcFmulsInline(f28.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    r4_addr_3 = (r4 + r30);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r4 = (r31 + 28);
    f2.d = PpcFmulsInline(f29.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f3.d = PpcFmulsInline(f29.d, f3.d);
    f4.d = PpcFmulsInline(f29.d, f0.d);
    ctx->lr = 0x8084F7F4u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063E5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r28 + 576));
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r29 + 1);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r3 = (r5 & 1);
    r3 = (r3 ^ r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r3 - r4);
    r0 = (r0 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r4 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f6.d = PpcFmulsInline(f28.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r4 = (r31 + 39);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = PpcFmulsInline(f29.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r3 = MemoryInline::FlatRead32((r27 + 72));
    f4.d = PpcFmulsInline(f28.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    f2.d = PpcFmulsInline(f29.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f3.d = PpcFmulsInline(f29.d, f3.d);
    f4.d = PpcFmulsInline(f29.d, f0.d);
    ctx->lr = 0x8084F8A4u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063E5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r28 + 576));
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r29 + 1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r3 = (r5 & 1);
    r3 = (r3 ^ r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r3 - r4);
    r0 = (r0 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r4 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f6.d = PpcFmulsInline(f28.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r4 = (r31 + 53);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = PpcFmulsInline(f29.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r3 = MemoryInline::FlatRead32((r27 + 72));
    f4.d = PpcFmulsInline(f28.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f1.d));
    r3_addr_3 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    f2.d = PpcFmulsInline(f29.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f3.d = PpcFmulsInline(f29.d, f3.d);
    f4.d = PpcFmulsInline(f29.d, f0.d);
    ctx->lr = 0x8084F954u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063E5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r28 + 576));
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r29 + 1);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r3 = (r5 & 1);
    r3 = (r3 ^ r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r3 - r4);
    r0 = (r0 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r4 = (r4 + r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f6.d = PpcFmulsInline(f28.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r4 = (r31 + 67);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = PpcFmulsInline(f29.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    r3 = MemoryInline::FlatRead32((r27 + 72));
    f4.d = PpcFmulsInline(f28.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    r3_addr_4 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    f2.d = PpcFmulsInline(f29.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f3.d = PpcFmulsInline(f29.d, f3.d);
    f4.d = PpcFmulsInline(f29.d, f0.d);
    ctx->lr = 0x8084FA04u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063E5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_8084FA10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084F748;
    }
}

loc_8084FA14:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r27 = MemoryInline::FlatRead32((r3 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8084FA28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084FA34;
    }
}

loc_8084FA2C:
{
    r27 = 0;
    goto loc_8084FA88;
}

loc_8084FA34:
{
    r26 = 0x809C0000u;
    r26 = (r26 + 7392);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084FA84;
    }
}

loc_8084FA40:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8084FA54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8084FA6C;
}

loc_8084FA58:
{
}

loc_8084FA5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_8084FA68;
    }
}

loc_8084FA60:
{
    r0 = 1;
    goto loc_8084FA78;
}

loc_8084FA68:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8084FA6C:
{
}

loc_8084FA70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8084FA58;
    }
}

loc_8084FA74:
{
    r0 = 0;
}

loc_8084FA78:
{
}

loc_8084FA7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084FA84;
    }
}

loc_8084FA80:
{
    goto loc_8084FA88;
}

loc_8084FA84:
{
    r27 = 0;
}

loc_8084FA88:
{
    r0 = MemoryInline::FlatRead32((r28 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8084FA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084FAB0;
    }
}

loc_8084FA94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8084FA98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084FAC0;
    }
}

loc_8084FA9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8084FAA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084FAD0;
    }
}

loc_8084FAA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8084FAA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084FAE0;
    }
}

loc_8084FAAC:
{
    goto loc_8084FAEC;
}

loc_8084FAB0:
{
    r3 = (r27 + 456);
    r4 = 1;
    // inline leaf 0x805F2E84 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 372));
    MemoryInline::FlatWrite32((r3 + 376), r4);
    r5 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r5 | r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    MemoryInline::FlatWrite8((r3 + 382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805F2E84
    goto loc_8084FAEC;
}

loc_8084FAC0:
{
    r3 = (r27 + 456);
    r4 = 0;
    // inline leaf 0x805F2E84 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 372));
    MemoryInline::FlatWrite32((r3 + 376), r4);
    r5 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r5 | r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    MemoryInline::FlatWrite8((r3 + 382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805F2E84
    goto loc_8084FAEC;
}

loc_8084FAD0:
{
    r3 = (r27 + 456);
    r4 = 2;
    // inline leaf 0x805F2E84 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 372));
    MemoryInline::FlatWrite32((r3 + 376), r4);
    r5 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r5 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWrite8((r3 + 382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805F2E84
    goto loc_8084FAEC;
}

loc_8084FAE0:
{
    r3 = (r27 + 456);
    r4 = 3;
    // inline leaf 0x805F2E84 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 372));
    MemoryInline::FlatWrite32((r3 + 376), r4);
    r5 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r5 | r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite8((r3 + 382), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805F2E84
}

loc_8084FAEC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 128u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 104u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 48));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084F688 func_8084F688 preserves=false fpr_mask=0xFC000000
