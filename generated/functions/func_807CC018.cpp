#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CC018(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807CC018;

loc_807CC018:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807CC034:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC050;
    }
}

loc_807CC048:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->lr = 0x807CC050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x808654A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807CC050:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CC068:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CC074;
    }
}

loc_807CC06C:
{
    r3 = 0;
    goto loc_807CC150;
}

loc_807CC074:
{
}

loc_807CC078:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(7))) {
        goto loc_807CC090;
    }
}

loc_807CC080:
{
}

loc_807CC084:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(20))) {
        goto loc_807CC094;
    }
}

loc_807CC088:
{
}

loc_807CC08C:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(40))) {
        goto loc_807CC094;
    }
}

loc_807CC090:
{
    r0 = 1;
}

loc_807CC094:
{
}

loc_807CC098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CC0A4;
    }
}

loc_807CC09C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 728), r0);
}

loc_807CC0A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    f1.d = f31.d;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x8055586C (9 guest instruction(s))
}

loc_inl0_0x8055586C:
{
    r3 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x80555874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80555878:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x80555884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80555888:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    goto loc_inl0_cont_8055586C;
}

loc_inl0_return:
{
}

loc_inl0_cont_8055586C:
{
    // end of inlined leaf 0x8055586C
    r0 = MemoryInline::FlatRead16((r30 + 250));
    r3 = 0x808A0000u;
    MemoryInline::FlatWrite16((r30 + 252), static_cast<uint16_t>(r0));
    r6 = 0x808A0000u;
    r7 = MemoryInline::FlatRead32((r30 + 108));
    r4 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 26416));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r7 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 26420));
    ctx->lr = 0x807CC0E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r30 + 252));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 248), static_cast<uint8_t>(r0));
    r0 = 0;
}

loc_807CC0F8:
{
    MemoryInline::FlatWrite16((r30 + 250), static_cast<uint16_t>(r31));
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807CC108;
    }
}

loc_807CC100:
{
}

loc_807CC104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807CC10C;
    }
}

loc_807CC108:
{
    r0 = 1;
}

loc_807CC10C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CC110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CC14C;
    }
}

loc_807CC114:
{
    r3 = MemoryInline::FlatRead16((r30 + 250));
    r0 = 0;
}

loc_807CC120:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807CC12C;
    }
}

loc_807CC124:
{
}

loc_807CC128:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807CC130;
    }
}

loc_807CC12C:
{
    r0 = 1;
}

loc_807CC130:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CC134:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CC14C;
    }
}

loc_807CC138:
{
    r3 = r30;
    r4 = 1;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807CC14Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807CC14C:
{
    r3 = 1;
}

loc_807CC150:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807CC018 func_807CC018 preserves=false fpr_mask=0x80000000
