#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008C260;

loc_8008C260:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008C288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008C294;
    }
}

loc_8008C28C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008C328;
}

loc_8008C294:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8008C298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C2C0;
    }
}

loc_8008C29C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_8008C2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C2CC;
    }
}

loc_8008C2A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
}

loc_8008C2A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C2D8;
    }
}

loc_8008C2AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
}

loc_8008C2B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C2EC;
    }
}

loc_8008C2B4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
}

loc_8008C2B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C304;
    }
}

loc_8008C2BC:
{
    goto loc_8008C318;
}

loc_8008C2C0:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    goto loc_8008C318;
}

loc_8008C2CC:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    goto loc_8008C318;
}

loc_8008C2D8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite16((r4 + 50), static_cast<uint16_t>(r0));
    goto loc_8008C318;
}

loc_8008C2EC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    r0 = 1;
    r4 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite16((r4 + 50), static_cast<uint16_t>(r0));
    goto loc_8008C318;
}

loc_8008C304:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    r0 = 2;
    r4 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite16((r4 + 50), static_cast<uint16_t>(r0));
}

loc_8008C318:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008C328:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008C260 func_8008C260 preserves=true fpr_mask=0x00000000
