#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80162A88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80162A88;

loc_80162A88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80162AB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80162AC0;
    }
}

loc_80162AB8:
{
    r31 = 1;
    goto loc_80162B28;
}

loc_80162AC0:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80162AC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80162AD4;
    }
}

loc_80162ACC:
{
    r31 = 4;
    goto loc_80162B28;
}

loc_80162AD4:
{
    r31 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r13 + -25872));
    r31 = (r31 + 12752);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_80162AE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80162B24;
    }
}

loc_80162AE8:
{
    ctx->lr = 0x80162AECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80163758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80162AF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80162B0C;
    }
}

loc_80162AF4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r3));
}

loc_80162AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80162B04;
    }
}

loc_80162AFC:
{
    r31 = 1;
    goto loc_80162B28;
}

loc_80162B04:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
    goto loc_80162B28;
}

loc_80162B0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
}

loc_80162B10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80162B1C;
    }
}

loc_80162B14:
{
    r31 = 0;
    goto loc_80162B28;
}

loc_80162B1C:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
    goto loc_80162B28;
}

loc_80162B24:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80162B28:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000201B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80162A88 func_80162A88 preserves=true fpr_mask=0x00000000
