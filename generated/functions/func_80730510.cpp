#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80730510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80730510;

loc_80730510:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    ctx->lr = 0x8073053Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8072A21Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 56));
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r5 = 0x808A0000u;
    r29 = MemoryInline::FlatRead32(r4);
    r28 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = 0;
    r31 = MemoryInline::FlatRead32((r30 + 60));
}

loc_80730564:
{
    f31.d = MemoryInline::FlatReadFloat32((r5 + 9840));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073057C;
    }
}

loc_8073056C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80730574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8073057C;
    }
}

loc_80730578:
{
    r4 = 1;
}

loc_8073057C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80730580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730604;
    }
}

loc_80730584:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    ctx->lr = 0x8073058Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r4 = 0x808A0000u;
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9844));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r5 = 0x809C0000u;
    r4 = 1431633920;
    r6 = MemoryInline::FlatRead32((r5 + -10448));
    r0 = (r4 + 21846);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r4_addr_1 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r5 = (r4 + -1);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r4 = (r5 - r0);
    r28 = (r4 + -1);
    // inline leaf 0x80518B78 (14 guest instruction(s))
}

loc_inl1_0x80518B78:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl1_0x80518B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80518BA8;
    }
}

loc_inl1_0x80518B84:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80518B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80518BA8;
    }
}

loc_inl1_0x80518B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80518BA0;
    }
}

loc_inl1_0x80518B94:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_80518B78;
}

loc_inl1_0x80518BA0:
{
    r3 = 0;
    goto loc_inl1_cont_80518B78;
}

loc_inl1_0x80518BA8:
{
    r3 = 0;
}

loc_inl1_cont_80518B78:
{
    // end of inlined leaf 0x80518B78
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807305EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730604;
    }
}

loc_807305F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807305FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80730604;
    }
}

loc_80730600:
{
    r28 = (0 - r28);
}

loc_80730604:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
    r3 = (r28 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + 9848));
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 9840));
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r3 = r30;
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    r4 = (r1 + 8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    ctx->lr = 0x8073066Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807306ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80730684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF9 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80730510 func_80730510 preserves=false fpr_mask=0x80000000
