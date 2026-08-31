#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063AFC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8063AFC8;

loc_8063AFC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622E6C (13 guest instruction(s))
}

loc_inl0_0x80622E6C:
{
    r5 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl0_0x80622E74:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1))) {
        goto loc_inl0_0x80622E80;
    }
}

loc_inl0_0x80622E78:
{
    r3 = 0;
    goto loc_inl0_cont_80622E6C;
}

loc_inl0_0x80622E80:
{
    r0 = (r5 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r4 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl0_cont_80622E6C:
{
    // end of inlined leaf 0x80622E6C
}

loc_8063AFF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8063B01C;
    }
}

loc_8063AFFC:
{
    r0 = MemoryInline::FlatRead8((r31 + 828));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063B004:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8063B01C;
    }
}

loc_8063B008:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = 0;
    r3 = (r3 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061B3CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r31 + 828), static_cast<uint8_t>(r3));
}

loc_8063B01C:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8063B024:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8063B10C;
    }
}

loc_8063B028:
{
    r0 = MemoryInline::FlatRead8((r31 + 828));
}

loc_8063B030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8063B064;
    }
}

loc_8063B034:
{
    r4 = 0x808A0000u;
    r0 = 101;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -30284));
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 832), r0);
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl1_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl1_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80602494;
    }
}

loc_inl1_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl1_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80602488:
{
    // end of inlined leaf 0x80602488
    r3 = r31;
    r4 = 8;
    r5 = -1;
    ctx->lr = 0x8063B060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8063B10C;
}

loc_8063B064:
{
    r30 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622E6C (13 guest instruction(s))
}

loc_inl2_0x80622E6C:
{
    r5 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl2_0x80622E74:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1))) {
        goto loc_inl2_0x80622E80;
    }
}

loc_inl2_0x80622E78:
{
    r3 = 0;
    goto loc_inl2_cont_80622E6C;
}

loc_inl2_0x80622E80:
{
    r0 = (r5 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 852));
    r0 = (r4 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
}

loc_inl2_cont_80622E6C:
{
    // end of inlined leaf 0x80622E6C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8063B07C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B10C;
    }
}

loc_8063B080:
{
    r4 = MemoryInline::FlatRead32((r30 + 7736));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063B08C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8063B10C;
    }
}

loc_8063B090:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9000));
    r0 = MemoryInline::FlatRead8((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063B0A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B10C;
    }
}

loc_8063B0A4:
{
    r3 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead8((r3 + 1228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063B0B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B0D4;
    }
}

loc_8063B0B4:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 89;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8063B0D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8063B10C;
}

loc_8063B0D4:
{
    r3 = r31;
    ctx->lr = 0x8063B0DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063B130u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r4 = 68;
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    ctx->lr = 0x8063B0FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = 0;
    r5 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8063B10C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8063AFC8 func_8063AFC8 preserves=true fpr_mask=0x00000000
