#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80821A9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80821A9C;

loc_80821A9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80821AC0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80821B00;
    }
}

loc_80821AC4:
{
    r0 = MemoryInline::FlatRead8((r3 + 152));
}

loc_80821ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80821B00;
    }
}

loc_80821AD0:
{
    r31 = 0;
}

loc_80821AD4:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80821AE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80821AF0;
    }
}

loc_80821AE4:
{
    r5 = (r29 + 88);
    r4 = 0;
    ctx->lr = 0x80821AF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80821AF0:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
}

loc_80821AFC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(2))) {
        goto loc_80821AD4;
    }
}

loc_80821B00:
{
    r0 = MemoryInline::FlatRead8((r29 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80821B08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80821B4C;
    }
}

loc_80821B0C:
{
    r0 = MemoryInline::FlatRead8((r29 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80821B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80821B4C;
    }
}

loc_80821B18:
{
    r30 = MemoryInline::FlatRead32((r29 + 12));
    r31 = 0;
}

loc_80821B20:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80821B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80821B3C;
    }
}

loc_80821B30:
{
    r5 = (r29 + 88);
    r4 = 0;
    ctx->lr = 0x80821B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80821B3C:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80821B48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80821B20;
    }
}

loc_80821B4C:
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

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80821A9C func_80821A9C preserves=true fpr_mask=0x00000000
