#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80162CF8(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80162CF8;

loc_80162CF8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80162D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80162D10;
    }
}

loc_80162D04:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_80162FD0;
}

loc_80162D10:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25888), r30);
    MemoryInline::FlatWrite32((r13 + -26000), r0);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80162D24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80162D50;
    }
}

loc_80162D28:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(33));
}

loc_80162D2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80162D50;
    }
}

loc_80162D30:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(34));
}

loc_80162D34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80162D50;
    }
}

loc_80162D38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_80162D3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80162D50;
    }
}

loc_80162D40:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(42));
}

loc_80162D44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80162D50;
    }
}

loc_80162D48:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80162D4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80162FC4;
    }
}

loc_80162D50:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25980), r0);
}

loc_80162FC4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
}

loc_80162FD0:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000200B gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80162CF8 func_80162CF8 preserves=true fpr_mask=0x00000000
