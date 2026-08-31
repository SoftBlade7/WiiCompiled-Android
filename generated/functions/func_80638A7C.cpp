#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80638A7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80638A7C;

loc_80638A7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 100));
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r30 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80638AB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80638ABC;
    }
}

loc_80638AB4:
{
    r30 = 0;
    goto loc_80638B10;
}

loc_80638ABC:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7312);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80638B0C;
    }
}

loc_80638AC8:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80638ADCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80638AF4;
}

loc_80638AE0:
{
}

loc_80638AE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_80638AF0;
    }
}

loc_80638AE8:
{
    r0 = 1;
    goto loc_80638B00;
}

loc_80638AF0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80638AF4:
{
}

loc_80638AF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80638AE0;
    }
}

loc_80638AFC:
{
    r0 = 0;
}

loc_80638B00:
{
}

loc_80638B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80638B0C;
    }
}

loc_80638B08:
{
    goto loc_80638B10;
}

loc_80638B0C:
{
    r30 = 0;
}

loc_80638B10:
{
    r4 = 0;
    r0 = (r28 + 372);
}

loc_80638B1C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r29))) {
        goto loc_80638B34;
    }
}

loc_80638B20:
{
    r3 = MemoryInline::FlatRead32((r30 + 84));
}

loc_80638B28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80638B34;
    }
}

loc_80638B2C:
{
    r4 = 1;
    goto loc_80638BB0;
}

loc_80638B34:
{
    r3 = 1;
}

loc_80638B3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r29))) {
        goto loc_80638B54;
    }
}

loc_80638B40:
{
    r3 = MemoryInline::FlatRead32((r30 + 176));
}

loc_80638B48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80638B54;
    }
}

loc_80638B4C:
{
    r4 = 1;
    goto loc_80638BB0;
}

loc_80638B54:
{
    r3 = 2;
}

loc_80638B5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r29))) {
        goto loc_80638B74;
    }
}

loc_80638B60:
{
    r3 = MemoryInline::FlatRead32((r30 + 268));
}

loc_80638B68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80638B74;
    }
}

loc_80638B6C:
{
    r4 = 1;
    goto loc_80638BB0;
}

loc_80638B74:
{
    r3 = 3;
}

loc_80638B7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r29))) {
        goto loc_80638B94;
    }
}

loc_80638B80:
{
    r3 = MemoryInline::FlatRead32((r30 + 360));
}

loc_80638B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80638B94;
    }
}

loc_80638B8C:
{
    r4 = 1;
    goto loc_80638BB0;
}

loc_80638B94:
{
    r3 = 4;
}

loc_80638B9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r29))) {
        goto loc_80638BB0;
    }
}

loc_80638BA0:
{
    r3 = MemoryInline::FlatRead32((r30 + 452));
}

loc_80638BA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80638BB0;
    }
}

loc_80638BAC:
{
    r4 = 1;
}

loc_80638BB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80638BB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80638C44;
    }
}

loc_80638BB8:
{
    r3 = (r28 + 152);
    r4 = 1;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80638BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80638BE0;
    }
}

loc_80638BD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80638BD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80638C34;
    }
}

loc_80638BDC:
{
    goto loc_80638C44;
}

loc_80638BE0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r4 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat64((r3 + -30768));
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    r4 = 3;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -30772));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x80638C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80638C44;
}

loc_80638C34:
{
    r5 = 0x808A0000u;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -30968));
    ctx->lr = 0x80638C44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80638C44:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80638A7C func_80638A7C preserves=true fpr_mask=0x00000000
