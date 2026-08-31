#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80854B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80854B40;

loc_80854B40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWrite32((r3 + 2888), r4);
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + 2884), r5);
    MemoryInline::FlatWrite8((r3 + 2624), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2232), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 516));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80854B84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80854B90;
    }
}

loc_80854B88:
{
    r29 = 0;
    goto loc_80854BE4;
}

loc_80854B90:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7336);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854BE0;
    }
}

loc_80854B9C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80854BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80854BC8;
}

loc_80854BB4:
{
}

loc_80854BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80854BC4;
    }
}

loc_80854BBC:
{
    r0 = 1;
    goto loc_80854BD4;
}

loc_80854BC4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80854BC8:
{
}

loc_80854BCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80854BB4;
    }
}

loc_80854BD0:
{
    r0 = 0;
}

loc_80854BD4:
{
}

loc_80854BD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80854BE0;
    }
}

loc_80854BDC:
{
    goto loc_80854BE4;
}

loc_80854BE0:
{
    r29 = 0;
}

loc_80854BE4:
{
    r5 = MemoryInline::FlatRead32((r31 + 2888));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(-1));
}

loc_80854BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854C08;
    }
}

loc_80854BF0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2232), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x80854C04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805F56E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80854CBC;
}

loc_80854C08:
{
    r3 = MemoryInline::FlatRead32((r31 + 2884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80854C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854CBC;
    }
}

loc_80854C14:
{
    r0 = (r3 + -9);
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
}

loc_80854C20:
{
    MemoryInline::FlatWrite8((r31 + 2624), static_cast<uint8_t>(r4));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80854C84;
    }
}

loc_80854C28:
{
    r3 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -23456);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80854C40u:
        goto loc_80854C40;
        break;
    case 0x80854C4Cu:
        goto loc_80854C4C;
        break;
    case 0x80854C60u:
        goto loc_80854C60;
        break;
    case 0x80854C54u:
        goto loc_80854C54;
        break;
    case 0x80854C6Cu:
        goto loc_80854C6C;
        break;
    case 0x80854C78u:
        goto loc_80854C78;
        break;
    case 0x80854C84u:
        goto loc_80854C84;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80854C40:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 2888), r0);
    goto loc_80854C8C;
}

loc_80854C4C:
{
    MemoryInline::FlatWrite32((r31 + 2888), r4);
    goto loc_80854C8C;
}

loc_80854C54:
{
    r0 = 16;
    MemoryInline::FlatWrite32((r31 + 2888), r0);
    goto loc_80854C8C;
}

loc_80854C60:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 2888), r0);
    goto loc_80854C8C;
}

loc_80854C6C:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r31 + 2888), r0);
    goto loc_80854C8C;
}

loc_80854C78:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 2888), r0);
    goto loc_80854C8C;
}

loc_80854C84:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 2888), r0);
}

loc_80854C8C:
{
    r5 = MemoryInline::FlatRead32((r31 + 2888));
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x80854C9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805F56E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r31 + 2888));
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x80854CACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805F570Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r31 + 2884));
    r3 = r29;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805F5958u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80854CBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80854B40 func_80854B40 preserves=true fpr_mask=0x00000000
