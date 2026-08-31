#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80166BFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80166BFC;

loc_80166BFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80166C08:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80166CB0;
    }
}

loc_80166C28:
{
    r5 = (r30 + -1);
    r4 = 0;
    ctx->lr = 0x80166C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80166C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80166C88;
    }
}

loc_80166C3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166C4C;
    }
}

loc_80166C40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_80166C44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166C58;
    }
}

loc_80166C48:
{
    goto loc_80166CEC;
}

loc_80166C4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_80166C50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166CEC;
    }
}

loc_80166C54:
{
    goto loc_80166C9C;
}

loc_80166C58:
{
    r3 = (r29 + r30);
    r0 = 13;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r5 = (r30 + -1);
    r4 = 0;
    ctx->lr = 0x80166C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r5 = 10;
    r4 = (r29 + r0);
    r3 = 2;
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r5));
    goto loc_80166CF0;
}

loc_80166C88:
{
    r3 = (r29 + r30);
    r0 = 13;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80166CF0;
}

loc_80166C9C:
{
    r3 = (r29 + r30);
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80166CF0;
}

loc_80166CB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_80166CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80166CDC;
    }
}

loc_80166CB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166CC8;
    }
}

loc_80166CBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80166CC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166CD4;
    }
}

loc_80166CC4:
{
    goto loc_80166CEC;
}

loc_80166CC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80166CCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166CEC;
    }
}

loc_80166CD0:
{
    goto loc_80166CE4;
}

loc_80166CD4:
{
    r3 = 2;
    goto loc_80166CF0;
}

loc_80166CDC:
{
    r3 = 1;
    goto loc_80166CF0;
}

loc_80166CE4:
{
    r3 = 1;
    goto loc_80166CF0;
}

loc_80166CEC:
{
    r3 = 0;
}

loc_80166CF0:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80166BFC func_80166BFC preserves=true fpr_mask=0x00000000
