#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80192B88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80192B88;

loc_80192B88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80340000u;
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead32((r3 + 21932));
    r30 = MemoryInline::FlatRead32((r4 + 21928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80192BB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80192CE4;
    }
}

loc_80192BBC:
{
    goto loc_80192CEC;
}

loc_80192BC4:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + -1);
}

loc_80192BD0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80192CA0;
    }
}

loc_80192BD4:
{
    r31 = (r30 + 9244);
    r29 = 0;
    goto loc_80192C94;
}

loc_80192BE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r3 + -1);
}

loc_80192BEC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80192C8C;
    }
}

loc_80192BF0:
{
    r28 = MemoryInline::FlatRead32((r31 + 28));
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_80192BFC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r28))) {
        goto loc_80192C74;
    }
}

loc_80192C00:
{
    r0 = (r0 - r28);
    MemoryInline::FlatWrite32((r31 + 32), r0);
    goto loc_80192C8C;
}

loc_80192C10:
{
    r4 = r31;
    r28 = (r28 - r0);
    r3 = (r30 + 20);
    ctx->lr = 0x80192C20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801926D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_80192C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80192C80;
    }
}

loc_80192C2C:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r5 = (r4 & 127);
    goto loc_80192C58;
}

loc_80192C3C:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r3 = (r3_rot_5 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 & 127);
    r5 = (r3 + r0);
}

loc_80192C58:
{
    r0 = (r4 & 128);
}

loc_80192C5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80192C3C;
    }
}

loc_80192C60:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_80192C74:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_80192C7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80192C10;
    }
}

loc_80192C80:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 - r28);
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_80192C8C:
{
    r31 = (r31 + 40);
    r29 = (r29 + 1);
}

loc_80192C94:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
}

loc_80192C9C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_80192BE0;
    }
}

loc_80192CA0:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_80192CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80192CE0;
    }
}

loc_80192CAC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80192CB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80192CD4;
    }
}

loc_80192CB8:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80192CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x80192CD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80192CE0;
}

loc_80192CD4:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80192CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80192CE0:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_80192CE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80192CE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80192BC4;
    }
}

loc_80192CEC:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0003FB gpr_write=0xFC000BFB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80192B88 func_80192B88 preserves=true fpr_mask=0x00000000
