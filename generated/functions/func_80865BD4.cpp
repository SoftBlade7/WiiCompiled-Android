#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865BD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80865BD4;

loc_80865BD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_80865BE0:
{
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(28))) {
        goto loc_80865C0C;
    }
}

loc_80865BF8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865C00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865C0C;
    }
}

loc_80865C04:
{
    r3 = 0;
    goto loc_80865DD0;
}

loc_80865C0C:
{
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 1772));
    r6 = MemoryInline::FlatRead32((r6 + -10448));
    r8 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = MemoryInline::FlatRead32((r6 + 56));
    r0 = (r0 & 2);
}

loc_80865C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80865D68;
    }
}

loc_80865C34:
{
    r0 = MemoryInline::FlatRead8((r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865C3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865C48;
    }
}

loc_80865C40:
{
    r3 = 0;
    goto loc_80865DD0;
}

loc_80865C48:
{
    r7 = MemoryInline::FlatRead32((r3 + 248));
}

loc_80865C50:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80865CC8;
    }
}

loc_80865C54:
{
    r6 = MemoryInline::FlatRead32((r3 + 1736));
    r0 = (r6 + -29);
}

loc_80865C60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80865CC8;
    }
}

loc_80865C64:
{
    r0 = (r4 + -18);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80865C6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80865D30;
    }
}

loc_80865C70:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80865C88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80865C90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865C9C;
    }
}

loc_80865C94:
{
    r4 = 2;
    ctx->lr = 0x80865C9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80865C9C:
{
    r3 = 0x808B0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1200));
    r3 = -1;
    MemoryInline::FlatWrite32((r31 + 264), r3);
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 268), r0);
    MemoryInline::FlatWriteFloat32((r31 + 272), f0.d);
    MemoryInline::FlatWrite8((r31 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r31 + 276), r0);
    goto loc_80865DD0;
}

loc_80865CC8:
{
    r0 = (r4 + -18);
}

loc_80865CD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80865D18;
    }
}

loc_80865CD4:
{
    r0 = (r4 + -26);
}

loc_80865CDC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80865D30;
    }
}

loc_80865CE0:
{
}

loc_80865CE4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80865D30;
    }
}

loc_80865CE8:
{
    r6 = MemoryInline::FlatRead32((r3 + 1736));
    r0 = (r6 + -22);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80865CF4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80865D30;
    }
}

loc_80865CF8:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80865D10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 2;
    goto loc_80865DD0;
}

loc_80865D18:
{
    r0 = MemoryInline::FlatRead8((r3 + 1785));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865D20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865D2C;
    }
}

loc_80865D24:
{
    r3 = 0;
    goto loc_80865DD0;
}

loc_80865D2C:
{
    r8 = 2;
}

loc_80865D30:
{
    r0 = MemoryInline::FlatRead8((r3 + 1785));
}

loc_80865D38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80865D54;
    }
}

loc_80865D3C:
{
    r0 = (r4 + -22);
}

loc_80865D44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80865D54;
    }
}

loc_80865D48:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1785), static_cast<uint8_t>(r0));
    goto loc_80865D68;
}

loc_80865D54:
{
    r0 = (r4 + -18);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80865D5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80865D68;
    }
}

loc_80865D60:
{
    r3 = 0;
    goto loc_80865DD0;
}

loc_80865D68:
{
    r0 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865D98;
    }
}

loc_80865D74:
{
    r4 = MemoryInline::FlatRead32((r31 + 1736));
    r30 = r8;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80865D88:
{
    r8 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865DCC;
    }
}

loc_80865D90:
{
    r8 = r30;
    goto loc_80865DCC;
}

loc_80865D98:
{
    r0 = MemoryInline::FlatRead32((r3 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80865DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865DCC;
    }
}

loc_80865DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80865DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865DCC;
    }
}

loc_80865DAC:
{
    r30 = r8;
    r3 = r31;
    r4 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80865DC0:
{
    r8 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865DCC;
    }
}

loc_80865DC8:
{
    r8 = r30;
}

loc_80865DCC:
{
    r3 = r8;
}

loc_80865DD0:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80865BD4 func_80865BD4 preserves=true fpr_mask=0x00000000
